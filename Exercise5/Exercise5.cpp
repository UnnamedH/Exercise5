#include <iostream>
using namespace std;

int getSum(int arr[], int length) {
	int i_max = 0;
	int i_min = 0;

	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] > arr[i_max]) {
			i_max = i;
		}
		if (arr[i] < arr[i_min]) {
			i_min = i;
		}
	}

	int i_start;
	int i_end;
	if (i_max > i_min) {
		i_start = i_min;
		i_end = i_max;
	}
	else {
		i_start = i_max;
		i_end = i_min;
	}

	int sum = 0;
	for (size_t i = i_start; i <= i_end; i++)
	{
		sum = sum + arr[i];
	}

	return sum;
}


int main()
{
	setlocale(LC_ALL,"");
	int arr[] = { 1,2,5,-1,0,3,6 };

	int sum = getSum(arr, 7);
	cout << "Сумма членов последовательности расположенных между минимальным и максимальным елементом: " << sum;
	return 0;
}

