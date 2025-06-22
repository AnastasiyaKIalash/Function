#include"Print.h"
#include"constants.h"
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << tab;
	cout << endl;
}

void Print(double brr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)cout << brr[i] << tab;
	cout << endl;
}