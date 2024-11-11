//подключаем библиотеку функций для консольного приложения
#include <iostream>
//подключаем пространство имён с используемыми функциями 
using namespace std;

//объявляем переменные
double x, y, z, m, m1, m2, m3;

double max1(double m1, double m2)
{
    m1 = x + y + z;
    m2 = x * y * z;
    if (m1 >= m2)
        return m1;
    else
        return m2;
}

double max2(double m1, double m3)
{
    m1 = x + y + z;
    m3 = x / (y * z);
    if (m1 >= m3)
        return m1;
    else
        return m3;
}

int main()
{ 
    setlocale(LC_ALL, "Russian");
    //выводим пользователю сообщение о необходимости ввода значений
    cout << "Введите x, y, z: " << endl;
    //вводим значения переменных
    cin >> x >> y >> z;
    //проверяем тип данных
    if (cin.good()) 
    {
        //проверяем на исключительные ситуации
        if ((max2(m1, m3) == 0) || (y * z == 0))
        {
            cout << "Решение невозможно";
        }
        else 
        {
            m = max1(m1, m2) / max2(m1, m3);
            //выводим результат вычислений
            cout << "m=" << m;
        }
    }
    else
    {
        //сообщаем о использовании неправильного типа данных
        cout << "Необходимо числовое значение";
    }
}