#include <iostream>

using std::cout;
using std::cin;

int sum_of_numbers(const int& n)
{
	int res = 0;
	for (int i = 1; i <= n; ++i)
	{
		res += i;
	}
	return res;
}

int min_of_arr(const int *arr, const int SIZE)
{
	int min = arr[0];
	for(int index = 1; index < SIZE; ++index)
	{
		if (arr[index] < min)
			min = arr[index];
	}
	return min;
}



int main()
{
	setlocale(LC_ALL, "rus");

	int value = 0;
	const int SIZE = 10;
	
	cout << "Введите значение n: " << '\t';
	cin >> value;
	cout << sum_of_numbers(value) << '\t';

	int arr[SIZE] = {55, 456, 32, 48, 7, 47, 233, 80, 57, 10};
	cout << min_of_arr(arr, SIZE);
	delete[] arr;
}
