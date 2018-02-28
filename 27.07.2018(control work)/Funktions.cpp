#include <iostream>

using namespace std;

double control(int *arr, int size, double *summ, double *mult)
{
	for (int i = 0; i < size; i++)
	{
		*summ += *(arr + i);
	}
	cout << "Summa: " << *summ << endl;
	for (int j = 0; j < size; j++)
	{
		*mult *= (*arr + j);
	}
	cout << "ALL: " << *mult << endl;
	return 0;
}

int control(int *arr, int size, int *summ, int *mult)
{
	for (int i = 0; i < size; i++)
	{
		*summ += *(arr + i);
	}
	cout << "Summa: " << *summ << endl;
	for (int j = 0; j < size; j++)
	{
		*mult *= (*arr + j);
	}
	cout << "ALL: " << *mult << endl;
	return 0;
}

short int control(int *arr, int size, short int *summ, short int *mult)
{
	for (int i = 0; i < size; i++)
	{
		*summ += *(arr + i);
	}
	cout << "Summa: " << *summ << endl;
	for (int j = 0; j < size; j++)
	{
		*mult *= (*arr + j);
	}
	cout << "ALL: " << *mult << endl;
	return 0;
}

void Array(int arr[6], int size)
{
	for (int i = 0; i < size; i++) cout << arr[i] << ' ';
	cout << endl;
}


void Print(int * arr, int size_first, int size_last)
{
	for (int i = 0; i < size_first; i++)
	{
		cout << endl;
		for (int j = 0; j < size_last; j++)
			cout << *(arr + i * size_last + j) << ' ';
	}
	cout << endl;
}

int sravnivanie(int *arr, int size_first, int size_last)
{
	int i, j, sum_str, sr_arif;
	for (i = 0; i < size_last; i++)
	{
		sum_str = 0;
		sr_arif = 0;
		for (j = 0; j < size_last; j++)
		{
			sum_str = sum_str + *arr;
		}
		cout << "\n" << sum_str;
		sr_arif = sum_str / size_last;
		cout << " srednee arifmeticheskoe stroki " << i + 1 << " = " << sr_arif << " \n ";
		return 0;
	}
}

char soedinenie(char *arr, int size)
{
	strcat(arr, " my friend.");
	cout << arr << endl;
	return 0;
}

unsigned int sum(int lower, int summand)
{
	return (summand == lower) ? lower : summand + sum(lower, summand - 1);
}



