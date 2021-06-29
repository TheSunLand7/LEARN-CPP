#include <iostream>
#include <math.h>
using namespace std;

int main (void){
	int opc, cubo_number, number1, number2;
	cout << "1. Generar el cubo de un numero." << endl;
	cout << "2. Verificar si el numero a ingresar es par o impar." << endl;
	cout << "3. Salir." << endl;
	cout << "Que opcion desea realizar: " ; cin >> opc;
	
	switch(opc){
		case 1:
			cout << "Por favor ingrese el numero: "; cin >> number1;
			cubo_number = pow(number1, 3);
			cout << "El cubo de " << number1 << " es: " << cubo_number; break;
		case 2:
			cout << "Por favor digite el numero a verificar: "; cin >> number2;
			if (number2 % 2 == 0){
				cout << "El numero " << number2 << " es par."; break;
			}
			else{
				cout << "El numero " << number2 << " es impar."; break;
			}
		case 3: break;
	}
	
	
	
	return 0;
}
