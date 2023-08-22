#include <iostream>
#include <vector>
#include <unordered_set>

using std::cout;
using std::cin;

int sum_of_numbers(const int& n);
int min_of_arr(const int* arr, const int SIZE);
int recurs_fn(const int value);
std::unordered_set<int> uniq_arr(std::vector<int> arr2);

int main()
{
	setlocale(LC_ALL, "rus");

	int value = 0;
	const int SIZE = 10;
	//1
	cout << "Введите значение n: " << '\t';
	cin >> value;
	cout << sum_of_numbers(value) << '\t';
	cout << '\n';
	//2
	int arr[SIZE] = {55, 456, 32, 48, 7, 47, 233, 80, 57, 10};
	cout << min_of_arr(arr, SIZE);
	cout << '\n';
	//3
	int fac = 5;
	cout << recurs_fn(fac);
	//4
	std::vector<int> arr2;
	std::unordered_set<int> unique_arr;
	arr2 = {5, 4, 3, 8, 1, 5, 4, 8, 6, 7 };
	
	unique_arr = uniq_arr(arr2);


}


//Задача 1: Подсчет суммы четных чисел от 1 до N.Напишите программу, используя цикл, которая находит сумму всех четных чисел в диапазоне от 1 до заданного числа N.
int sum_of_numbers(const int& n)
{
	int res = 0;
	for (int i = 1; i <= n; ++i)
	{
		res += i;
	}
	return res;
}

//Задача 2: Поиск наименьшего числа в списке.Напишите программу, которая находит наименьшее число в заданном списке с помощью цикла.
int min_of_arr(const int* arr, const int SIZE)
{
	int min = arr[0];
	for (int index = 1; index < SIZE; ++index)
	{
		if (arr[index] < min)
			min = arr[index];
	}
	return min;
}

//Задача 3: Вычисление факториала числа.Напишите программу, которая находит факториал заданного числа N с использованием рекурсии или встроенных функций.
int recurs_fn(const int value)
{
	if (value == 1)
		return 1;
	else
		return value * recurs_fn(value - 1);
}


//Задача 4: Поиск уникальных элементов в списке.Напишите программу, которая создает новый список, содержащий только уникальные элементы из исходного списка.
std::unordered_set<int> uniq_arr(std::vector<int> arr2)
{
	std::unordered_set<int> temp;

	for (auto i : arr2)
	{
		temp.insert(i);
	}
	
	for (auto i : temp)
	{
		cout << i << '\t';
	}

	return temp;
}