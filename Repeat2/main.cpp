#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, " ");
	const int ROWS = 7;
	const int COLS = 7;

	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;

		}
		
	}
	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";

		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool met_before = false;
			for(int k = 0; k<i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before)break;
			}
			if (met_before)continue;
			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])count++;
				}
				

			}
			if (count) cout << "znachenie " << arr[i][j] << "\t" << "povtopyaetsya " << count << "\t" << "paz." << endl;
		}
	}
}
