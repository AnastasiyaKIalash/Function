#include"stdafx.h"
#include"constants.h"
#include"FilRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"



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
	cout << "vvedite znachenie: " ;cin >> znachenie;
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









