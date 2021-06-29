#include <iostream>
#include <conio.h>

using namespace std;

int main(void){
	/*
	int matrizOne[100][100], raws1, columns1, matrizTwo[100][100], raws2, columns2;
	int matrizResult[3][3];
	
	cout << "Please enter the number of raws: "; cin >> raws1;
	cout << "Please enter the number of columns: "; cin >> columns1;
	
	if(raws1==columns1){
		for(int i=0;i<raws1;i++){
			for(int j=0;j<columns1;j++){
				cout << "Please enter a number [" << i << "][" << j << "]: "; cin >> matrizOne[i][j];
			}
		}
	}
	
	cout << "\nPlease enter the number of raws: "; cin >> raws2;
	cout << "Please enter the number of columns: "; cin >> columns2;
	
	if(raws2==columns2){
		for(int i=0;i<raws2;i++){
			for(int j=0;j<columns2;j++){
				cout << "Please enter a number [" << i << "][" << j << "]: "; cin >> matrizTwo[i][j];
			}
		}
	}
	
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){  //Me faltaba colocar un for loop más. Con eso se arreglaba el problem.
			matrizResult[i][j] = 0;
			for(int l=0;l<3;l++){
				matrizResult[i][j] += matrizOne[i][l] * matrizTwo[l][j];
			}
		}
	}
	cout << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << matrizResult[i][j] << " ";
		}
		cout << endl;
	}
	*/
	
	getch();
	return 0;
}
