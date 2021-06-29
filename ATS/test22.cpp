#include <iostream>

/*PASS AN ARRAY TO A FUNCTION AS PARAMETER
 * EXAMPLE: POWER THE ELEMENTS OF AN ARRAY.
 * No es necesario colocar una referencia, debido a que c++ lo convierte en un puntero.
 * Ver mas en: https://stackoverflow.com/questions/14309136/passing-arrays-to-function-in-c

 
 
void potencia(int arreglo[], int);
void showItem(int arreglo[], int);
 
int main () {
	const int TAM{5};
	int arreglo[TAM] {1, 2, 3, 4, 5};
	potencia(arreglo, TAM);
	showItem(arreglo, TAM);

	std::cin.get();
	return 0;
}

void potencia(int arreglo[], int length) {
	for (int i = 0; i < length; ++i) {
		arreglo[i] *= arreglo[i];
	}
}

void showItem(int arreglo[], int length) {
	for (int j = 0; j < length; ++j) {
		std::cout << arreglo[j] << " ";
	}
}
*/

/*EJERCICIO DE FUNCIONES 11
 * Ejercicio 11: Realice una función que tome como parámetros un vector de números enteros y 
 * devuelva la suma de sus elementos.
 
void sumElem(int arr1[], int);

int main () {
	const int TAM{5};
	int arr1[TAM];
	
	for (int i = 0; i < TAM; ++i) {
		std::cout << "Please enter " << i + 1 <<". value: "; std::cin >> arr1[i];
	}
	
	sumElem(arr1, TAM);
	
	std::cin.get();
	return 0;
}

void sumElem(int arr1[], int length) {
	int sum = 0;
	for (int k = 0; k < length; ++k) {
		sum += arr1[k];
	}
	std::cout << "\nThe total SUM of elements is: " << sum << std::endl;
}
*/

/*EJERCICIO DE FUNCIONES 12
 * Ejercicio 12: Realice una función que tome como parámetros un vector y su tamaño y  
 * diga si el vector está ordenado crecientemente. Sugerencia: compruebe que para todas las 
 * posiciones del vector, salvo para la 0, el elemento del vector es mayor o igual que el 
 * elemento que le precede en el vector.
void ordElem(int arr2[], int);
void showItem(int arr2[], int);

int main () {
	const int TAM{5};
	int arr2[TAM];
	
	for (int i = 0; i < TAM; ++i) {
		std::cout << "Please enter " << i + 1 <<". value: "; std::cin >> arr2[i];
	}
	ordElem(arr2, TAM);
	showItem(arr2, TAM);
	
	std::cin.get();
	return 0;
}

void ordElem(int arr2[], int length) {
	
	//for (int i = 0; i < length; ++i) {
	//	for (int j = i; j >= 0; --j) {
	//		if ((arr2[j] < arr2[j-1]) && (j > 0)) {
	//			int aux = arr2[j-1];
	//			arr2[j-1] = arr2[j]; 
	//			arr2[j] = aux;
	//		}
	//	}
		
	//}
	
	char band = 'F';
	for (int i = 0; i < length; ++i) {
		if ((i < length - 1) && (arr2[i] > arr2[i+1]) && (band == 'F')) {
			band = 'V';
		}
	}
	
	if (band == 'F') {
		std::cout << "\nEl array esta ordenado!" << std::endl;
	} else
		std::cout << "\nEl array no esta ordenado!" << std::endl;
}

void showItem(int arr2[], int length) {
	std::cout << "El arreglo es: " << std::endl;
	for (int m = 0; m < length; ++m) {
		std::cout << arr2[m] << " ";
	}
}
*/

/*EJERCICIO DE FUNCIONES 14
 * Ejercicio 14: Realiza una función que tome como parámetros un vector de enteros y 
 * su tamaño e imprima un vector con los elementos impares del vector recibido.
void getData();
void showItem(int arr3[], int);
// Global variables
int arr3[100], TAM;

int main () {
	getData();
	
	showItem(arr3, TAM);
	std::cin.get();
	return 0;
}

void getData() {
	std::cout << "Please enter the size of the array: "; std::cin >> TAM;
	
	for (int i = 0; i < TAM; ++i) {
		std::cout << "Please enter " << i + 1 << ". number: "; std::cin >> arr3[i];
	}
}

void showItem(int arr3[], int TAM) {
	int auxArray[TAM];
	
	//Copying elements of arr3 into auxArray.
	for (int j = 0; j < TAM; ++j) {
		auxArray[j] = arr3[j];
	}
	std::cout << "\nLos numeros impares en el arreglo son: " << std::endl;
	
	//Printing the odd values.
	for (int m = 0; m < TAM; ++m) {
		if (auxArray[m] % 2 != 0) {
			std::cout << auxArray[m] << " ";
		}
	}
}
*/

/*EJERCICIO DE FUNCIONES 15
 * Ejercicio 15: Desarrollar una función que determine si una matriz es simétrica o no.
 * /2  5  9/
 * /5  8 -1/
 * /9 -1 10/ 

void getData();
void matTran(int mat2[][100], int, int);
void verSim(int mat2[][100], int, int);

//Global variables
int mat2[100][100], newMat[100][100], NRAWS, NCOL;

int main () {
	getData();
	matTran(mat2, NRAWS, NCOL);
	verSim(mat2, NRAWS, NCOL);
	std::cin.get();
	return 0;
}

void getData() {
	std::cout << "Please enter the number of raws: "; std::cin >> NRAWS;
	std::cout << "Please enter the number of columns: "; std::cin >> NCOL;
	
	for (int i = 0; i < NRAWS; ++i) {
		for (int j = 0; j < NCOL; ++j) {
			std::cout << "Please enter the elemnt in mat[" << i << "][" << j << "]: "; std::cin >> mat2[i][j]; 
		}
	}
	
	std::cout << "\nThe matrix entered is: " << std::endl;
	for (int i = 0; i < NRAWS; ++i) {
		for (int j = 0; j < NCOL; ++j) {
			std::cout << mat2[i][j] << " "; 
		}
		std::cout << std::endl;
	}
}

void matTran(int mat2[][100], int NRAWS, int NCOL) {
	
	for (int i = 0; i < NRAWS; ++i) {
		for (int j = 0; j < NCOL; ++j) {
			 newMat[j][i] = mat2[i][j];
		}
	}
	std::cout << "\nThe matrix Trasnposed is: " << std::endl;
	for (int k = 0; k < NRAWS; ++k) {
		for (int l = 0; l < NCOL; ++l) {
			std::cout << newMat[k][l] << " ";
		}
		std::cout << std::endl;
	}
	
}

void verSim(int mat2[][100], int NRAWS, int NCOL) {
	//To count the number of elements that are equals.
	int count = 0;
	
	if (NRAWS == NCOL) {
		for (int i = 0; i < NRAWS; ++i) {
			for (int j = 0; j < NCOL; ++j) {
				if (mat2[i][j] == newMat[i][j]) {
					++count;
				} 
			}
		}
	}
	
	if (count == NCOL * NRAWS) {
		std::cout << "The matrix is SIMETRIC!" << std::endl;
	} else
		std::cout << "The matrix is NOT simetric!" << std::endl;
}
*/

/*EJERCICIO DE FUNCIONES  16
 * Ejercicio 16: Realice una función que dada una matriz y un número de fila de la matriz 
 * devuelva el menor de los elementos almacenados en dicha fila
 
void getData();
void showItem(int mat[][100], int, int);
void lessElem(int mat[][100], int, int);

//Global variables:
int mat[100][100], NRAWS, NCOL;
int main() {
	
	getData();
	showItem(mat, NRAWS, NCOL);
	lessElem(mat, NRAWS, NCOL);
	
	std::cin.get();
	return 0;
}

void getData() {
	std::cout << "Please enter the number of raws: "; std::cin >> NRAWS;
	std::cout << "Please enter the number of columns: "; std::cin >> NCOL;
	
	for (int i = 0; i < NRAWS; ++i) {
		for (int j = 0; j < NCOL; ++j) {
			std::cout << "Please enter the elemnt in mat[" << i << "][" << j << "]: "; std::cin >> mat[i][j]; 
		}
	}
}

void showItem(int mat[][100], int, int) {
	std::cout << "\nThe matrix you have entered is: " << std::endl;
	for (int k = 0; k < NRAWS; ++k) {
		for (int l = 0; l < NCOL; ++l) {
			std::cout << mat[k][l] << " ";
		}
		std::cout << std::endl;
	}

}

void lessElem(int mat[][100], int NRAWS, int NCOL) {
	int number, smallest = 9999;
	std::cout << "\nPlease enter any raw's number: "; std::cin >> number;
	
	//The smallest number.
	for (int m = number-1; m < number; ++m) {
		for (int n = 0; n < NCOL; ++n) {
			if (mat[m][n] < smallest) {
				smallest = mat[m][n];
			}
		}
	}
	std::cout << "The smallest number of the raw " << number << " is: " << smallest << std::endl;
}
*/
