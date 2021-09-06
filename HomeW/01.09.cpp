#include<iostream>

using namespace std;

//void PrintArray(int n, int* array)
//{
//	for (int i = 0; i < n; i++)
//		cout << array[i] << "\t";
//	cout << endl;
//}
void SortArray(int* array, int n )
{
	int tmp, j;

	for (int i = 1, j; i < n; i++)
	{
		tmp = array[i];
		for ( j = i - 1; j >= 0 && array[j] < tmp; j--)
			array[j + 1] = array[j];
		array[j + 1] = tmp;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int a{ 0 }, n;
	cout << "Введите число товаров: "; cin >> n;
	int* array = new int[n];
	cout << "Вводите цены товаров: ";
	for (int i = 0; i != n; i++)
	{
		int a; cin >> a;
		array[i] = a;
	}
	SortArray(array, n);

	for (int i = 0; i < n / 2; i++)
		a += array[i];
	cout << "Максимальная сумма чека: "<<a;
		

	return 0;
}
