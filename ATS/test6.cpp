#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	/*
	int numero, result;
	
	while(numero<1 || numero>10){
		cout << "Please enter a number: "; cin >> numero;
	}
	
	for(int i=1; i<=20; i++){
		result = numero * i;
		cout << numero << " * " << i << " = " << result << endl;
	}
	
	 int number, conteo = 0;
	 
	 do{
	 	cout << "Please enter a number: "; cin >> number;
	 	conteo++;
	 }while((number != 0));
	 
	 if (number == 0){
	 	cout << "\nThe numbers entered are: " << conteo << endl;
	 }
	 */
	 
	float temperatura, result, menor_temp = 100, mayor_temp = 0;
	int conteo;
	do{
		cout << "Ingrese la temperatura: "; cin >> temperatura;
		conteo++;
		result += temperatura;
		
		if (temperatura > mayor_temp){
			mayor_temp = temperatura;
		}
		if (temperatura < menor_temp){
			menor_temp = temperatura;
		}
		
	}while(conteo < 6);
	
	
	
	cout << "The average of temperatures: " << result / 6 << endl;
	cout << "The less temperature is: " << menor_temp << endl;
	cout << "The greater temperature is: " << mayor_temp << endl;
	
	

	getch();
	return 0;
}
