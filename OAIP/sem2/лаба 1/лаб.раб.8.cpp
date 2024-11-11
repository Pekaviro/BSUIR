#include <iostream>
using namespace std;

int usual(int arr[], int n)
{
	int max1 = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= max1)
			max1 = arr[i];
	}
	return max1;
}

int recursio(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int max2 = recursio(arr, n - 1);
    if (arr[n-1] > max2) {
        return arr[n-1];
    }
    return max2;
}

int main() {
    int n;

    setlocale(LC_ALL, "Russian");
    cout << "Введите количество элементов массива: ";
    cin >> n;

    int* arr = new int[n];
    
    if (cin.good())
    	{
    		cout << "Введите элементы массива: ";
    		for (int i = 0; i < n; i++)
    			cin >> arr[i];
    	}

    cout << "Максимальный элемент в массиве, найденный с использованием обычной функции: " << usual(arr, n) << endl;
    cout << "Максимальный элемент в массиве, найденный с использованием рекурсивной функции: " << recursio(arr, n) << endl;

    for (int i = 0; i < n; i++)
        delete []arr;

    return 0;
}