#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(void){
	/*
	int numbers[] = {4,2,5,7,9,6,3,1,8}, aux;
	
	//Algoritmo del metodo burbuja.
	for(int i=0;i<9;i++){
		for(int k=0;k<8;k++){
			if(numbers[k] > numbers[k+1]){
				aux = numbers[k];
				numbers[k] = numbers[k+1];
				numbers[k+1] = aux;
			}	
		}
	}
	
	cout << "Ordered by ASC" << endl;
	for (int j=0;j<9;j++){
		cout << numbers[j] << " ";
	}
	
	cout << endl  << endl << "Ordered by DESC" << endl;
	for(int m=8;m>=0;m--){
		cout << numbers[m] << " ";
	}
	cout << endl << endl;
	
	int numbers[] = {4,3,2,5,8,1,0,7,9,6};
	int aux;
	
	// Algoritmo ordenamiento por insercion.
	for(int i=0;i<10;i++){ 
		aux = numbers[i]; 
		
		while((i>0) && (numbers[i-1] > aux)){
			numbers[i] = numbers[i-1];
			i--;
		}
		numbers[i] = aux;  // Actualiza el bucle para que no haya repeticiones.
	}
	
	for(int j=0;j<10;j++){
		cout << numbers[j] << " ";
	}
	
	cout << endl << endl;
	
	int numbers[] = {3,4,2,9,6,1,5,8,0,7}, aux, min;
	
	for(int i=0;i<10;i++){
		min = i;
		for(int j=i+1;j<10;j++){
			if(numbers[j] < numbers[min]){
				min = j; 
			}
		}
		aux = numbers[i];
		numbers[i] = numbers[min];
		numbers[min] = aux;
	}
	
	for(int m=0; m<10;m++){
		cout << numbers[m] << " ";
	}
	
	cout << endl << endl;
	*/
	
	system("pause");
	return 0;
}
