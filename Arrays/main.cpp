#include<iostream>
using namespace std;

#define tab  "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

void Sum(int arr[], const int n);
void Sum(double arr[], const int n);

//void SredneeA(int arr[], const int n);
//void SredneeA(double arr[], const int n);





void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	Sum(arr, n);
	//SredneeA(arr, n);


	const int SIZE = 8;
	double brr[SIZE];

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	Sum(brr, SIZE);
	//SredneeA(brr, SIZE);
	
	
}


void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}

}


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}


void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			if (arr[j] > arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			if (arr[j] > arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	
}

void Sum(int arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	cout << Sum << tab;
	cout << endl;
}


void Sum(double arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	cout << Sum << tab;
	cout << endl;
}



//void SredneeA(int arr[], const int n)
//{
//	int Sum = 0;
//	double SrA;
//	for (int i = 0; i < n; i++)
//	{
//		Sum += arr[i];
//		SrA = (double) Sum / n;
//		
//	}
//	cout << SrA << tab;
//	cout << endl;
//}
//
//
//void SredneeA(double arr[], const int n)
//{
//	double Sum = 0;
//	double SrA;
//	for (int i = 0; i < n; i++)
//	{
//		Sum += arr[i];
//		SrA = Sum / n;
//		
//	}
//	cout << SrA << tab;
//	
//}




