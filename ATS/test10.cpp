#include <iostream>
#include <conio.h>

using namespace std;

int main(void){
	/*
	int numeros[] = {2, 3, 4, 1, 5}, product = 1;
	
	for(int i=0;i<5;i++){
		product *=numeros[i];
	}
	
	cout << "The result of this product is: " << product << endl;
	
	int numeros[100], n;
	cout << "Please enter the number of elements of the array: "; cin >> n;
	for(int i=0; i<n;i++){
		cout << "Please enter a number: "; cin >> numeros[i];	
	}
	
	cout << "\nINDEX --> ELEMENT" << endl;
	for(int i=n-1;i>=0;i--){
		cout << i << "     --> " << numeros[i] << endl;
	}
	
	
	int numeros[100], n, suma=0, numMayor=0;
	cout << "Please enter a number of elements of the array: "; cin >> n;
	
	for(int i=0;i<n;i++){
		cout << "Please enter the number " << i+1 << ": "; cin >> numeros[i]; // 2 5 3
		suma += numeros[i]; // 2 7 10
		if (numeros[i]>numMayor){
			numMayor=numeros[i]; // 2 5 5
		}
		
	}
	if (numMayor == suma - numMayor){
		cout << "\nEl numero " << numMayor << " es la suma de otros numeros!" << endl;
	}
	else{
		cout << "\nNingun numero es la suma de otros numeros!" << endl;
	}
	*/
	int numeros[] = {2, 5, 7, 9, 6}, numerosx2[5];
	
	for (int i=0;i<5;i++){
		numerosx2[i] = numeros[i] * 2;
		cout << "The " << i+1 << " element of the new list is: " << numerosx2[i] << endl;
	}	
	
	
	getch();
	return 0;
}
