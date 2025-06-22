#include<iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void FilRand(int arr[], const int n);
void FilRand(double arr[], const int n);
void FilRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Print(T arr[], const int n);

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

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

	
	int i_arr_2[ROWS][COLS];
	//FilRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

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

void FilRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
		
	}
	
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
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


