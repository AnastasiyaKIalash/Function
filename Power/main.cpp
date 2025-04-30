#include<iostream>
using namespace std;

int Power(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "vvedite osnovanie stepeni i  ego pokazatel: "; cin >> a >> b;
	cout << Power(a, b) << endl;

}

int Power(int a, int b)
{
	int sum = a;
	while(b > 1)
	{
		sum *= a;
		b--;
	}
	return sum;
}