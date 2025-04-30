#include<iostream>
using namespace std;

int Factorial(int a);

void main()
{
	setlocale(LC_ALL, "");
	int a;
	cout << "vvedite chislo: "; cin >> a;
	cout << Factorial(a) << endl;
}
	int Factorial(int a)
	{
		int copy = a;
		while (a > 1)
		{
			copy *= a - 1;
			a --;
					
		}
		return copy;
	}
