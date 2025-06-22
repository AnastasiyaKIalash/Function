#include<iostream>
using namespace std;



void FilRand(int arr[], const int n);
void FilRand(double arr[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

int MinValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);

int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);

void ShiftLeft(int arr[], const int n, const int znachenie);
void ShiftRight(int arr[], const int n, const int znachenie);

void main()
{
	setlocale(LC_ALL, "");


	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };

	FilRand(arr, n);
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



void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << "\t";
	cout << endl;
}

void Print(double brr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)cout << brr[i] << "\t";
	cout << endl;
}

int Sum(int arr[], int const n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;

}

double Sum(double brr[], int const SIZE)
{
	double sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += brr[i];
	}
	return sum;

}

double Avg(int arr[], int const n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(double arr[], int const n)
{
	return (double)Sum(arr, n) / n;
}

int MinValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

double MinValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

int MaxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

double MaxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

void ShiftLeft(int arr[], const int n, const int znachenie)
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

void ShiftRight(int arr[], const int n, const int znachenie)
{
	ShiftLeft(arr, n, n - znachenie);
}