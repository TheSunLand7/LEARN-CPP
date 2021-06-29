#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(void){
	/*
	// Busqueda secuencial. No importa el orden de la secuencia a iterar.
	int numbers[5] = {3,1,5,2,4}, dato, i=0;
	char band = 'F';
	
	dato = 9;
	do {
		if(numbers[i] == dato){
			band = 'V';
		}
		i++;
	}while((band == 'F') && (i<5));
	
	if (band == 'V'){
		cout << "We found the number in the position: " << i-1 << endl;
	} else if (band == 'F'){
		cout << "We did not find the number in the array!" << endl;
	}
	
	cout << "\n\n\n";
	*/
	
	// Busqueda binaria. La secuancia a iterar debe estar ordenada.
	
	int numbers[] = {1,2,3,4,5}, inf, sup, mitad, dato;
	char band = 'F';
	
	inf = 0;
	sup = 5;  // Colocamos de acuerdo al numero de elementos del arreglo.
	dato = 4;
	
	do{
		mitad = (inf+sup)/2;
		if (numbers[mitad] == dato) {
			band = 'V';
			break;
		}
		if (numbers[mitad] > dato) {
			sup = mitad;
			mitad = (inf+sup)/2;
		}
		if (numbers[mitad] < dato) {
			inf = mitad;
			mitad = (inf+sup)/2;
		}
	}while(inf <= sup);
	
	if (band == 'V'){
		cout << "We found the number in position: " << mitad << endl;
	} else {
		cout << "We could not find the number!" << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
