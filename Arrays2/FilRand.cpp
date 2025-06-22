#include"FilRand.h"
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