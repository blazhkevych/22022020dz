/*
Задание 1: Написать программу, копирующую последовательно элементы одного массива размером 10 элементов в 2 массива размером 5 элементов каждый.
*/
#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	(time(0));
	const size_t n = 10, t = 5, b = 5;
	int arr1[n] = {};
	int arr2[t] = {};
	int arr3[b] = {};
	cout << "Числа в первом массиве:";
	for (int i = 0; i < n; i++)
	{
		arr1[i] = rand() % 100;
		cout << " " << arr1[i];
	}
	cout << "\nЧисла во втором массиве:";
	for (int i = 0; i < 5; i++)
	{
		arr2[i] = arr1[i];
		cout << " " << arr2[i];
	}
	cout << "\nЧисла в третьем массиве:";
	for (int i = 5, j = 0; i < 10; ++j, i++)
	{
		arr3[j] = arr1[i];
		cout << " " << arr3[j];
	}
	return 0;
}
/*
Задание 2: Напишите программу, которая выполняет поэлементную сумму двух массивов и результат заносит в третий массив.
#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	const int size = 10;
	int arr1[size]{};
	int arr2[size]{};
	int arr3[size]{};
	cout << "*** Случайные числа arr1 ***" << endl;
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = rand() % 10 + 1;
		cout << arr1[i] << '\t';
	}
	cout << "\n*** Случайные числа arr2 ***" << endl;
	for (int i = 0; i < 10; i++)
	{
		arr2[i] = rand() % 10 + 1;
		cout << arr2[i] << '\t';
	}
	cout << "\n*** Поэлементная сумма arr1 и arr2 ***" << endl;
	for (int i = 0; i < 10; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
		cout << arr3[i] << '\t';
	}
	return 0;
}
*/