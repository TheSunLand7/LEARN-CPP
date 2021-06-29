#include <iostream>
#include <conio.h>

using namespace std;

int main(void){
	/*
	int numberBase = 2, numberExpo, potencia = 1, sumaPotencias = 0;
	
	cout << "Please enter an expo: "; cin >> numberExpo;
	
	for (int i=1; i <= numberExpo; i++){
		potencia *= numberBase;
		sumaPotencias += potencia;
		
	}
	
	cout << "The result is: " << sumaPotencias << endl;
	*/
	
	int number, sumaPos = 0, sumaNeg = 0;
	cout << "PLease enter a number: "; cin >> number;
	
	for (int i=1; i<=number;i += 2){
		sumaPos += i;
		// cout << sumaPos << endl;
	}
	cout << "-------------------------------------" << endl;
	
	for(int a=-2; a>=-number; a-=2){
		sumaNeg += a;
		// cout << sumaNeg << endl;
	}
	
	cout << "The result of the sum is: " << sumaPos + sumaNeg << endl;
	
	getch();
	return 0;
}
