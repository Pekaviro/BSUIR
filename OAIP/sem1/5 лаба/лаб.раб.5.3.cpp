//подключаем библиотеку функций для консольного приложения
#include <iostream>

//подключаем пространство имён с используемыми функциями 
using namespace std;
int i, j;

//создаём отдельную функцию 1
int* stroki(int n, int** a, int* s1)
{
    int summa1=0;
    
    //находим сумму чисел в каждой строке
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            summa1 += a[i][j];
        s1[i] = summa1;
        summa1 = 0;
    }

    return s1;
}

//создаём отдельную функцию 2
int* stolby(int n, int** a, int *s2)
{
    int summa2=0;

    //находим сумму чисел в каждом столбце
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            summa2 += a[j][i];
        s2[i] = summa2;
        summa2 = 0;
    }
    return s2;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    //выводим пользователю сообщение о необходимости ввода значений
    cout << "Введите порядок матрицы: ";
    cin >> n;

    if (cin.good())
    {
        bool flag = true;

        //объявляем динамические массивы
        int** a;
        a = new int* [n];
        for (i = 0; i < n; i++)
            a[i] = new int[n];

        int* s1;
        s1 = new int[n];

        int* s2;
        s2 = new int[n];

        //выводим пользователю сообщение о необходимости ввода значений
        cout << "Введите элементы массива: "<<endl;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> a[i][j];

        //обращаемся к отдельным функциям
        stroki(n, a, s1);
        stolby(n, a, s2);

        //проверяем тип данных
        if (cin.good())
            {
                for (i = 0; i < n - 1; i++)
                    if ((s1[i] != s1[i + 1]) || (s2[i] != s2[i + 1]))
                    {
                        cout << "Матрица не является магическим квадратом";
                        flag = true;
                        break;
                    }
                    else
                        flag = false;

                if (flag == false)
                    cout << "Матрица является магическим квадратом";
            }
        else
            cout << "Необходимы числовые значения";

        for (i = 0; i < n; i++)
            delete[]a[i];
        delete[]a;
        delete[]s1;
        delete[]s2;
    }
    else
        cout << "Необходимы числовые значения";
}