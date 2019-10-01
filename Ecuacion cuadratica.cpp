#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

float a, b, c, x1, x2; 

int main()
{
	cout << "SOLUCION A UNA ECUACION CUADRATICA" << endl;
	cout << "Ingrese los valores que corresponden a la forma ax^2+bx+{c" << endl;
	cout << "Ingrese el valor de a: " << endl;
	cin >> a;
	cout << "Ingrese el valor de b: " << endl;
	cin >> b;
	cout << "Ingrese el valor de c " << endl;
	cin >> c;

	if((a*b)==0){
		cout << "Hay un error en sus datos, no es posible la ecuacion" << endl;
	}
	else {

		x1 = (-b+sqrt(b*b-4*a*c))/(2*a);

		x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);

		cout << endl << "El resultado de x1 es: " << x1;
		cout << endl << "El resultado de x2 es: " << x2;
    
	}
}


