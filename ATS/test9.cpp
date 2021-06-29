#include <iostream>
#include <stdlib.h>
#include <time.h>  //Para numeros aleatorios.

using namespace std;

int main(void){
	/*
	int examen1, examen2, examen3;
	int aproAll = 0, aproOne = 0, aproLast = 0;
	
	for (int i=1; i<=5; i++){
		cout << "Alumno " << i << endl;
		
		cout <<"Please enter the grade of the exam1: "; cin >> examen1;
		cout <<"Please enter the grade of the exam2: "; cin >> examen2;
		cout <<"Please enter the grade of the exam3: "; cin >> examen3;
		
		
		if ((examen1>10.5) && (examen2>10.5) && (examen3>10.5)){
			aproAll++;
		}
		if ((examen1>10.5) || (examen2>10.5) || (examen3>10.5)){
			aproOne++;
		}
		if ((examen1<10.5) && (examen2<10.5) && (examen3>10.5)){
			aproLast++;
		}
	}
	
	cout << "Aprobaron todos los examenes: " << aproAll << endl;
	cout << "Aprobaron al menos 1 examen: " << aproOne << endl;
	cout << "Aprobaron el ultimo examen: " << aproLast << endl;
	
	
	int number, dato, conteo;
	// Genera numeros aleatorios:
	// variable = limiteInferior + rand() % (limiteSuperior +1 - limiteInferior)
	srand(time(NULL)); //Permite generar numeros aleatorios.
	dato = 1 + rand() % (100+1-1);
	
	do{
		cout << "Ingresa un numero entre <1-100>: "; cin >> number;
		if (number > dato){
			cout << "\nIngresa un numero menor!" << endl;
		}
		if (number < dato){
			cout << "\nIngresa un numero mayor!" << endl;
		}
		conteo++;
	}while(number != dato);
	
	cout << endl <<"ADIVINASTE EL NUMERO! FELICIDADES!" << endl;
	cout << "Lo hiciste en " << conteo << " intento(s)." << endl;
	*/
	
	int number, i=2;
	
	cout << "Please enter a number: "; cin >> number;
	cout << "Descomponiendo el numero ingresado en factores primos: " << endl;
	
	for(int i=2; number>1;i++){
		while (number % i == 0){
			cout << i << " ";  // Para que vaya mostrando los numeros aceptados.
			number /= i;
		}
	}	
	cout << endl << endl;		

	
	system("pause");
	return 0;
}
