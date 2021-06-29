#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	/*
	int number[100][100], filas, columnas;
	cout << "Please enter the number of raws: "; cin >> filas;
	cout << "Please enter the number of columns: "; cin >> columnas;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout << "Please enter a number [" << i <<"][" << j << "]: "; cin >> number[i][j];
		}
	}
	cout << endl;
	cout << "{";
	for(int a=0;a<filas;a++){
		for(int b=0;b<columnas;b++){
			cout << number[a][b] << " ";
		}
		cout << endl;
	}
	
	int numbers[100][100], raws, columns;
	cout << "Please enter the number of raws: "; cin >> raws;
	cout << "Please enter the number of columns: "; cin >> columns;
	
	for(int i=0;i<raws;i++){
		for(int j=0;j<columns;j++){
			cout << "Please enter a number [" << i << "][" << j << "]: "; cin >> numbers[i][j];
		}
	}
	for(int i=0;i<raws;i++){
		for(int j=0;j<columns;j++){
			if (j==i){
				cout << numbers[i][j];
			} else {
				cout << " ";
			}
			
		}
		cout << endl;
	}
	
	int matrizInit[100][100], raws, columns;
	
	cout << "Please enter the number of raws: "; cin >> raws;
	cout << "Please enter the number of columns: "; cin >> columns;
	
	for(int i=0;i<raws;i++){
		for(int j=0;j<columns;j++){
			cout << "Please enter a number [" << i << "][" << j << "]: "; cin >> matrizInit[i][j];
		}
	}
	cout << "\nLa matriz transpuesta es: " << endl;
	for(int i=0;i<raws;i++){
		for(int j=0;j<columns;j++){
			cout << matrizInit[j][i] << " ";
		}
		cout << endl;
	}
	*/
	int matrizFirst[100][100], raws1, columns1, result;
	int matrizSecond[100][100], raws2, columns2, matrizSuma[3][3];
	
	cout << "Please enter the number of raws: "; cin >> raws1;
	cout << "Please enter the number of columns: "; cin >> columns1;
	
	if(raws1==columns1){
		for(int i=0;i<raws1;i++){
			for(int j=0;j<columns1;j++){
				cout << "Please enter a number [" << i << "][" << j << "]: "; cin >> matrizFirst[i][j];
			}
		}
	}
	cout << endl;
	
	cout << "Please enter the number of raws: "; cin >> raws2;
	cout << "Please enter the number of columns: "; cin >> columns2;
	
	if(raws2==columns2){
		for(int a=0;a<raws2;a++){
			for(int b=0;b<columns2;b++){
				cout << "Please enter a number [" << a << "][" << b << "]: "; cin >> matrizSecond[a][b];
			}
		}
	}
	
	cout << endl << "The sum of two arrays is: " << endl;
	for(int m=0;m<3;m++){
		for(int n=0;n<3;n++){
			result = matrizFirst[m][n] + matrizSecond[m][n];
			matrizSuma[m][n] = result;
		}
	}
	
	for(int m=0;m<3;m++){
		for(int n=0;n<3;n++){
			cout << matrizSuma[m][n] << " ";
		}
		cout << endl;
	}
	getch();
	return 0;
}
