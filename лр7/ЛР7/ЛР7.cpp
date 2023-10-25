#include <iostream>
using namespace std;
#include <windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float Y, symchik, x;
	cout << "Введіть значення змінної х\nx=";
	cin >> x;
	symchik = 0;
	if (x + 5 == 0)
	{
		cout << "Ділити на нуль не можна!!!";
	}
	else
	{
		for (int n = 1; n <= 5; n++)
		{
			symchik *= cos(n);
		}
		Y = (pow(tan(x),2) + symchik) / (x + 5);
		cout << "Значення виразу:\nY=" << Y;
	}/*
	float Z, dobchik, y;
	cout << "Введіть значення змінної у\ny=";
	cin >> y;
	dobchik = 1;
	for (int k = 1; k <= 10; k++)
		{
			dobchik *= log10(k*y);
		}
		Z = (dobchik + pow(y,2));
		cout << "Значення виразу:\nZ=" << Z;
*/}