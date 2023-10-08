#include <iostream>
using namespace std;

//Task1 and Task2
void Task(int* array, int size, int digits)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		array[i] = i + 1;
	}
	int* temp = new int[size + digits];
	for (int i = 0; i < size; i++)
	{
		temp[i] = array[i];
	}
	for (int i = size; i < (size+digits); i++)
	{
		temp[i] = rand() % 30;
	}
	delete[] array;
	array = temp;
	for (int i = 0; i < size+digits; i++)
	{
		cout << array[i] << endl;
	}
	delete[] temp;
}

void ArrayMAndN(int* M,int* N, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter numbers which will be in array[M]: ";
		cin >> M[i];
		cout << "Enter numbers which will be in array[N]: ";
		cin >> N[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << "Numbers of array[M]";
		cout << M[i] << endl;
	}
	for (int i = 0; i < size; i++)
	{
		cout << "Numbers of array[N]";
		cout << N[i] << endl;
	}
}

//Task3
void Task3(int* M,int* N,int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (M[i] == N[i])
		{
			sum++;
		}
	}
	int* duplicates = new int[sum];
	int count = 0;
	while(count < sum)
	{
		for (int i = 0; i < size; i++)
		{
			if (M[i] == N[i])
			{
				duplicates[count] = N[i];
				count++;
			}
		}
	}
	for (int i = 0; i < sum; i++)
	{
		cout << duplicates[i] << endl;
	}
	cout << "Sum of duplicates = " << sum << endl;
}

int main()
{
	/* Task1 Добавить заданное количество элементов (случайные значения) в конец динамического массива. */
	/* Task2 Написать функцию, которая добавляет заданное количество элементов(случайные значения) в конец динамического массива.*/
	int size;
	cout << "Enter size of array " << endl;
	cin >> size;
	cout << "Enter how many digits add to the end of array: ";
	int digits;
	cin >> digits;
	int* array = new int[size];
	Task(array, size, digits);
	
	/* Task3 Даны два массива : А[M] и B[N](M и N вводятся с клавиатуры).
	   Необходимо создать третий массив минимально возможного размера,
	   в котором нужно собрать только общие элементы двух массивов без повторений. */

	int sizeOfArray = 5;
	int* M = new int[sizeOfArray];
	int* N = new int[sizeOfArray];
	ArrayMAndN(M, N, sizeOfArray);
	Task3(M, N, sizeOfArray);

	



}