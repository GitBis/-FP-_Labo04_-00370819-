#include "pch.h"
#include <iostream>
using namespace std;

int num1, num2, num3;
int main()
{
	cout << "Ingrese 3 numeros enteros:" << endl;
	cin >> num1 >> num2 >> num3;
	int prom = num1 + num2 + num3;
	cout <<"El promedio es " << prom/3;

	return 0;
}

