//подключаем библиотеку инструментов для работы с форматированием вывода
#include <iomanip>
//подключаем библиотеку функций для консольного приложения
#include <iostream>
//подключаем пространство имён с используемыми функциями 
using namespace std;

//создаём отдельную функцию
void itog(char* str, int n)
{
	cout << "Вертикально: " << endl;
	for (int i = 0; i < n; i++)
		cout << str[i] << endl;

	cout << "По диагонали: " << endl;
	for (int i = 0; i < n; i++)
		cout << setw(i + 1) << str[i] << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите количество символов: ";
	cin >> n;

	//проверяем тип данных
	if (cin.good())
	{
		char* str = new char[n+1];
		cout << "Введите строку: ";
		for (int i = 0; i < n; i++)
			cin >> str[i];
		str[n] = '/0';
		itog(str, n);
		delete[]str;
	}
	else
		cout << "Необходимо числовое значение";
}