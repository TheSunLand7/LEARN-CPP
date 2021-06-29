#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){
	/*
	int number, sumaValores = 0;  // Como va a almacenar un valor se le inicia de esta manera
	
	do{
		cout << "Please enter a number: "; cin >> number;
		if (number > 0){
			sumaValores += number;
		}
		
	}while((number > 30 || number < 20) && number != 0);
	
	cout << "The sum of the numbers entered es: "<< sumaValores << endl;
	
	
	int numberBase, numberExpo, potencia = 1;
	
	cout << "Please enter the base number: "; cin >> numberBase;
	cout << "Please enter the expo number: "; cin >> numberExpo;
	
	for (int i=1; i <= numberExpo; i++){
		potencia *= numberBase;
	}
	
	cout << potencia;
	
	
	int number, sumaTotal = 0, i = 1;
	
	cout << "Please enter a number: "; cin >> number;
	
	do{
		sumaTotal += i;
		i += 2;
	}while(i <= number);
	
	cout << "La suma total es: " << sumaTotal;
	
	int number, factorial = 1, i = 1;
	
	cout << "Please enter a number: "; cin >> number;
	
	do{
		factorial *= i;  // factorial = factorial * i
		i++;
	}while(i <= number);
	
	cout << "The factorial of " << number << "! is: " << factorial << endl;
	*/
	
	int number, factorial = 1, sumaFactorial = 0;
	
	cout << "Please enter a number: "; cin >> number;
	for (int i = 1; i <= number; i++){
		factorial *= i;
		sumaFactorial += factorial;
	}
	
	cout << "The sum of factorials is: " << sumaFactorial << endl;
	
	
	system("pause");
	return 0;
}
