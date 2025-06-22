#include<iostream>
using namespace std;



void FilRand(int arr[], const int n);
void FilRand(double arr[], const int n);

template<typename T>
void Print(T arr[], const int n);

template<typename T>
void Sort(T arr[], const int n);

template<typename T>
T Sum(T arr[], const int n);

template<typename T>
double Avg(T arr[], const int n);


template<typename T>
T MinValueIn(T arr[], const int n);


template<typename T>
T MaxValueIn(T arr[], const int n);


template<typename T>
void ShiftLeft(T arr[], const int n, const int znachenie);

template<typename T>
void ShiftRight(T arr[], const int n, const int znachenie);

void main()
{
	setlocale(LC_ALL, "");


	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };

	FilRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << Sum(arr, n) << endl;
	cout << Avg(arr, n) << endl;
	cout << MinValueIn(arr, n) << endl;
	cout << MaxValueIn(arr, n) << endl;

	int znachenie;
	cout << "vvedite znachenie: ";cin >> znachenie;
	ShiftLeft(arr, n, znachenie);
	Print(arr, n);

	ShiftRight(arr, n, znachenie);
	Print(arr, n);

	const int SIZE = 8;
	double brr[SIZE];

	FilRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << Sum(brr, SIZE) << endl;

	cout << Avg(brr, SIZE) << endl;
	cout << MinValueIn(brr, SIZE) << endl;
	cout << MaxValueIn(brr, SIZE) << endl;

}

void FilRand(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}

}

void FilRand(double brr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		brr[i] = rand() % 100;
	}

}


template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << "\t";
	cout << endl;
}


template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i +1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;

			}
		}
	}
}



template<typename T>
T Sum(T arr[], int const n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;

}


template<typename T>
double Avg(T arr[], int const n)
{
	return (double)Sum(arr, n) / n;
}


template<typename T>
T MinValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}



template<typename T>
T MaxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}


template<typename T>
void ShiftLeft(T arr[], const int n, const int znachenie)
{

	for (int i = 0; i < znachenie; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;

	}

}

template<typename T>
void ShiftRight(T arr[], const int n, const int znachenie)
{
	ShiftLeft(arr, n, n - znachenie);
}


