#include "pch.h"
#include <iostream>
using namespace std;
int num1, num2;
int main()
{
    cout << "SABER SI ES DIVISIBLE" << endl;
	cout << "Ingrese un numero" << endl;
	cin >> num1;
	cout << "Ingrese otro numero" << endl;
	cin >> num2;

	if (fmod(num1,num2)==0) {

		cout << "El numero " << num1 << " es divisible con " << num2;
	}

	else {
		cout << "El numero " << num1 << " no es divisible con " << num2;
	}
	
	return 0;
}

