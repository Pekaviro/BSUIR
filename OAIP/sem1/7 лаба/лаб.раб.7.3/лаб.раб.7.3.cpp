#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool glas(char a)
{
    string gl = "аяоёуюэеыи";
    return gl.find(a) != -1;
}

void vvod(string s1)
{
    // создаем объект класса ofstream для записи в файл
    ofstream file("..\\output.txt");

    // проверяем, что файл открыт
    if (file.is_open())
    {
        string s2;
        for (int i = 0; i < s1.size(); i++)
        {
            s2 += s1[i];
            if (glas(s1[i]))
            {
                s2 += "ла";
            }
        }
        file << s2;
        cout << "Строка успешно записана" << endl;// записываем строку в файл
    }
    file.close();
}

void vyvod()
{
    string s4;
    ifstream file("..\\output.txt");
    string s3;
    getline(file, s3);
    for (int i = 0; i < s3.size(); i++) {
        if (s3[i] == 'л' && s3[i + 1] == 'а')
        {
            i++;
        }
        else {
            s4 += s3[i];
        }
    }
    cout << s4 << endl;
    file.close(); // закрываем файл
}

int main()
{
    system("chcp 1251");

    string s1;
    cout << "Введите строку: ";
    getline(cin, s1);

        vvod(s1);
        vyvod();
    return 0;
}