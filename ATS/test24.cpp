#include <iostream>

/*POINTERS
int main() {
	
	int someArray[10];

	// *pLocation --> Return the address memory of the variable pointed.
	// pLocation -->Return the valueof the variable pointed 

	int *pLocation6 = &someArray[6];
	int *pLocation0 = &someArray[0];

	std::cout << "pLocation6: " << int(pLocation6) << std::endl;
	std::cout << "pLocation0: " << int(pLocation0) << std::endl;
	std::cout << "Difference: " << pLocation6 - pLocation0 << std::endl;
	

	int someArray[10] {3,6,9,12,15,18,21,24,27,30};

	int *pLocation0 = &someArray[0];  //Or simply someArray-->This return the first element address.

	for (unsigned int i = 0; i < sizeof(someArray)/sizeof(someArray[0]); ++i) {
		// std::cout << someArray + i << " = " << *(someArray + i) << std::endl;
		std::cout << pLocation0 << " = " << *pLocation0 << std::endl;
		++pLocation0;
	}
	
	
	std::cin.get();
	return 0;
}
//Pointers to Functions

using namespace std;

int addition (int a, int b)
{ return (a+b); }

int subtraction (int a, int b)
{ return (a-b); }

int operation (int x, int y, int (*functocall)(int,int))
{
  int g;
  g = (*functocall)(x,y);
  return (g);
}

int main ()
{
  int m,n;
  int (*minus)(int,int) = subtraction;

  m = operation (7, 5, addition);
  n = operation (20, m, minus);
  cout <<n;
  return 0;
}

*/

/*EJERCICIO DE PUNTEROS 1
 * Ejercicio 1: Comprobar si un número es par o impar, y señalar la posición de memoria donde
 * se está guardando el número. Con punteros.

int main() {

	int num, *pNum = nullptr;

	std::cout << "Please enter a number: "; std::cin >> num;
	pNum = &num;
	
	if (*pNum % 2 == 0)
		std::cout << "It's an even number. Address memory: " << pNum << std::endl;
		
	else
		std::cout << "It's an odd number. Address memory: " << pNum << std::endl;
	delete pNum;
		
	std::cin.get();
	return 0;
}
*/

/*EJERCICIO DE POINTERS 2
 * Ejercicio 2: Determinar si un número es primo o no; con puteros y además indicar en
 * que posición de memoria se guardo el número.

int main() {
	int number, *pNumber = nullptr;
	bool band = true;
	
	std::cout << "Please enter a number: "; std::cin >> number;
	pNumber = &number;

	for (int i = 2; i < *pNumber; ++i) {
		if (*pNumber % i == 0)
			band = false;
			break;
	}

	if (band == false) {
		std::cout << "Not a prime number!" << std::endl;
		std::cout << "Address Memory: " << pNumber << std::endl;
	}
	else {
		std::cout << "A prime number!" << std::endl;
		std::cout << "Address Memory: " << pNumber << std::endl;
	}

	delete pNumber;
		

	
	std::cin.get();
	return 0;
}
*/

/*EJERCICIO DE POINTERS 3
 * Ejercicio 3: Rellenar un array de 10 números, posteriormente utilizando
 * punteros indicar cuales son números pares y su posición en memoria.

int main() {
	int someArray[10], *pSomeArray = nullptr;

	for (unsigned int i = 0; i < 10; ++i) {
		std::cout << "Please enter element [" << i << "]: "; std::cin >> someArray[i];
	}
	pSomeArray = someArray;

	for (unsigned int i = 0; i < 10; ++i) {
		if (*pSomeArray % 2 == 0) {
			std::cout << *pSomeArray << " is an even number: " << std::endl;
			std::cout << "Position of location memory: " << pSomeArray << std::endl;
		}
		++pSomeArray;
	}

	delete pSomeArray;
	
	std::cin.get();
	return 0;
}
*/

/*EJERCICIO DE POINTERS 4
 * Ejercicio 4: Rellenar un arreglo con n números, posteriormente utilizando
 * punteros determinar el menor elemento del vector.

int main() {
	int someArray[100], sizeArray, *pArray = nullptr, smallNum;
	std::cout << "Please enter a size of the array: "; std::cin >> sizeArray;

	for (unsigned int i = 0; i < sizeArray; ++i) {
		std::cout << "Please enter a number at someArray[" << i << "]: "; std::cin >> someArray[i];
	}
	pArray = someArray;
	smallNum = someArray[0];

	for (unsigned int i = 0; i < sizeArray; ++i) {
		if (*pArray < smallNum)
			smallNum = *pArray;
		++pArray;
	}

	std::cout << "\nThe smallest number of the array is: " << smallNum << std::endl;
	delete[] pArray;	
	
	std::cin.get();
	return 0;
}
*/

/*NEW AND DELETE OPERATORS
void getData();
void showData();

//Global variables
int sizeArray, *pGrades = nullptr;

int main() {
	getData();
	showData();

	delete[] pGrades;
	std::cin.get();
	return 0;
}

void getData() {
	std::cout << "Please enter a the size of the array: "; std::cin >> sizeArray;

	pGrades = new int[sizeArray];

	for(unsigned int i = 0; i < sizeArray; ++i) {
		std::cout << "Please enter the grade [" << i + 1 << "]: "; std::cin >> *(pGrades + i); //pGrades[i]
	}
}

void showData() {
	std::cout << "\nShowing Grades: " << std::endl;
	for (unsigned int i = 0; i < sizeArray; ++i) {
		std::cout << "Grade " << i + 1 << ": " << *(pGrades + i) << std::endl;
	}
}
*/

/*TRANSMISION DE ARRAYS COMO PUNTEROS

int maxNumber(int*, int);

int main() {
	const int sizeArray = 5;
	int someArray[sizeArray] {3, 5, 1, 8, 6};

	std::cout << "The biggest number of the array is: " << maxNumber(someArray, sizeArray) << std::endl;
	
	std::cin.get();
	return 0;
}

int maxNumber(int *psomeArray, int numElm) {
	int bigNum = psomeArray[0];

	for (unsigned int i = 0; i < numElm; ++i) {
		if (*(psomeArray + i) > bigNum)
			bigNum = *(psomeArray + i);
	}

	return bigNum;
}
*/

/*EJERCICIO DE PUNTEROS 5
 * Ejercicio 5: Pedir al usuario N números, almacenarlos en un arreglo dinámico posteriormente
 * ordenar los números en orden ascendente y mostrarlos en pantalla. 
 * NOTA: Utilizar cualquier método de ordenamiento.
void getData();
void ordData();
void showData();

int sizeArray, *pArray = nullptr;

int main() {
	
	getData();
	ordData();
	showData();
	

	delete[] pArray;
	
	std::cin.get();
	return 0;
}

void getData() {
	std::cout << "Please enter the size of the array: "; std::cin >> sizeArray;
	pArray = new int[sizeArray];

	for (unsigned int i = 0; i < sizeArray; ++i) {
		std::cout << "Please enter number " << i + 1 << ": "; std::cin >> *(pArray + i);
	}
}

void ordData() {
	
	for (unsigned int i = 0; i < sizeArray; ++i) {
		int pos = i;
		while(pos > 0) {
			if (*(pArray + pos) < *(pArray + pos - 1)) {
				int aux = pArray[pos-1];
				pArray[pos-1] = pArray[pos];
				pArray[pos] = aux;
			}
			--pos;
		}
	}
}

void showData() {
	for (unsigned int i = 0; i < sizeArray; ++i) {
		std::cout << *(pArray + i) << " ";
	}

}
*/

/*EJERCICIO DE POINTERS 6
 * Ejercicio 6: Hacer una función para almacenar N números en un arreglo dinámico,
 * posteriormente en otra función buscar un número en particular. 
 * NOTA: Puedes utilizar cualquier método de búsqueda(Secuencial o Binaria)

void getData();
void seekData(int*, int);

int sizeArray, *pArray = nullptr;

int main() {
	
	getData();
	seekData(pArray, sizeArray);
	

	delete[] pArray;
	
	std::cin.get();
	return 0;
}

void getData() {
	std::cout << "Please enter the size of the array: "; std::cin >> sizeArray;
	pArray = new int[sizeArray];

	for (unsigned int i = 0; i < sizeArray; ++i) {
		std::cout << "Please enter number " << i + 1 << ": "; std::cin >> *(pArray + i);
	}
}

void seekData(int *pArray, int sizeArray) {
	int i = 0, dato;
	bool band = true;

	std::cout << "Please enter a number to seek in the array: "; std::cin >> dato;
	while(band && (i < sizeArray)) {
		if (*(pArray + i) == dato) {
			band = false;
			break;
		}
		++i;
	}

	if (band)
		std::cout << "Sorry! The number entered has not been found." << std::endl;
	else
		std::cout << "Number found! at the position " << i << std::endl;
	
}
*/

/*EJERCICIO DE POINTERS 7
 * Ejercicio 7: Pedir su nombre al usuario y devolver el número de vocales que hay. 
 * NOTA: Recuerda que debes utilizar punteros.

#include <string>
int getData(char*);

//Global variables
char vowels[] {'A', 'E', 'I', 'O', 'U'}, *pVowels = nullptr;

int main() {
	
	std::cout << "\nThere are " << getData(pVowels) << " vowels in the name." << std::endl;
	
	std::cin.get();
	return 0;
}

int getData(char *pVowels) {
	std::string nameUser;
	int count = 0;
	
	pVowels = vowels;

	std::cout << "Please enter your name: "; std::getline(std::cin, nameUser);

	for (unsigned int m = 0; m < nameUser.size(); ++m)
		nameUser[m] = toupper(nameUser[m]);
	
	for (unsigned int i = 0; i < nameUser.size(); ++i) {
		for (unsigned int j = 0; j < 5; ++j) {
			if (*(pVowels + j) == nameUser[i])
				++count;
		}
	}

	return count;
}
*/

/*EJERCICIO DE POINTERS 8
 * Ejercicio 8: Pedir una cadena de caracteres (string) al usuario,
 * e indicar cuantas veces aparece la vocal a,e,i,o,u; en la cadena de caracteres.
 * NOTA: Usar punteros.
#include <string>

void getData(char*);

//Global variables
char vowels[] {'A', 'E', 'I', 'O', 'U'}, *pVowels = nullptr;

int main() {
	
	getData(pVowels);
	
	std::cin.get();
	return 0;
}

void getData(char *pVowels) {
	std::string nameUser;
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
	
	pVowels = vowels;

	std::cout << "Please enter your name: "; std::getline(std::cin, nameUser);

	for (unsigned int m = 0; m < nameUser.size(); ++m)
		nameUser[m] = toupper(nameUser[m]);
	
	for (unsigned int i = 0; i < nameUser.size(); ++i) {
		for (unsigned int j = 0; j < 5; ++j) {
			if (*(pVowels + j) == nameUser[i])
				if (nameUser[i] == *pVowels)
					++countA;
				else if (nameUser[i] == *(pVowels + 1))
					++countE;
				else if (nameUser[i] == *(pVowels + 2))
					++countI;
				else if (nameUser[i] == *(pVowels + 3))
					++countO;
				else
					++countU;
		}
	}
	if (countA > 0)
		std::cout << "\nThere is(are) " << countA << " vowel(s) A in the name." << std::endl;
	if (countE > 0)
		std::cout << "\nThere is(are) " << countE << " vowel(s) E in the name." << std::endl;
	if (countI > 0)
		std::cout << "\nThere is(are) " << countI << " vowel(s) I in the name." << std::endl;
	if (countO > 0)
		std::cout << "\nThere is(are) " << countO << " vowel(s) O in the name." << std::endl;
	if (countU > 0)
		std::cout << "\nThere is(are) " << countU << " vowel(s) U in the name." << std::endl;

}
*/

/*EJERCICIO DE PUNTEROS 9

void getData();
void showData(int**, int, int);

//Global Variables
int **puntero_matrix, nRaws, nCol;

int main() {
	
	getData();
	showData(puntero_matrix, nRaws, nCol);

	//Liberando memoria.
	for (unsigned int i = 0; i < nRaws; i++) {
		delete[] puntero_matrix[i];
	}

	delete[] puntero_matrix;

	std::cin.get();
	return 0;
}

void getData() {
	std::cout << "Please enter the number of raws: "; std::cin >> nRaws;
	std::cout << "Please enter the number of columns: "; std::cin >> nCol;

	puntero_matrix = new int* [nRaws]; //Reservando memoria para las filas.

	//Reservando memoria para las columnas.
	for (unsigned int i = 0; i < nRaws; ++i) {
		puntero_matrix[i] = new int [nCol];
	}

	//Pedir datos al usuario para la matriz.
	for (unsigned int i = 0; i < nRaws; ++i) {
		for (unsigned int j = 0; j < nCol; ++j) {
			std::cout << "Please enter value for [" << i << "][" << j << "]: "; std::cin >> *(*(puntero_matrix + i) + j);
		}
	}

}

void showData(int **puntero_matrix, int nRaws, int nCol) {
	for (unsigned int i = 0; i < nRaws; ++i) {
		for (unsigned int j = 0; j < nCol; ++j) {
			std::cout << *(*(puntero_matrix + i) + j) << " "; 
		}
		
		std::cout << std::endl;
	}
}

Ejercicio 9: Realice un programa que calcule la suma de dos matrices dinámicas.

void getData();
void sumData(int**, int** , int, int);

int **puntero_matrix1, **puntero_matrix2, nRaws, nCol;

int main() {

	getData();
	sumData(puntero_matrix1,puntero_matrix2, nRaws, nCol);

	//Deleting memory.
	for (unsigned int i = 0; i < nRaws; ++i) {
		delete[] puntero_matrix1[i];
	}
	for (unsigned int i = 0; i < nRaws; ++i) {
		delete[] puntero_matrix2[i];
	}

	delete [] puntero_matrix1;
	delete [] puntero_matrix2;

	std::cin.get();
	return 0;
}

void getData() {

	std::cout << "Please enter the number of raws: "; std::cin >> nRaws;
	std::cout << "Please enter the number of columns: "; std::cin >> nCol;

	if (nRaws == nCol) {

		//primera matriz.
		puntero_matrix1 = new int* [nRaws];
		for (unsigned int i = 0; i < nRaws; ++i) {
			puntero_matrix1[i] = new int[nCol];
		}

		for (unsigned int i = 0; i < nRaws; ++i) {
			for (unsigned int j = 0; j < nCol; ++j) {
				std::cout << "Please enter value for [" << i << "][" << j << "]: "; std::cin >> *(*(puntero_matrix1 + i) + j);
			}
		}

		std::cout << "=====================================================" << std::endl;
		std::cout << "Dates for second matrix:" << std::endl;

		//Segunda matriz.
		puntero_matrix2 = new int* [nRaws];
		for (unsigned int i = 0; i < nRaws; ++i) {
			puntero_matrix2[i] = new int[nCol];
		}

		for (unsigned int i = 0; i < nRaws; ++i) {
			for (unsigned int j = 0; j < nCol; ++j) {
				std::cout << "Please enter value for [" << i << "][" << j << "]: "; std::cin >> *(*(puntero_matrix2 + i) + j);
			}
		}
	} else {
		std::cout << "Please enter the same value for raws and columns!" << std::endl;
	}

	
}

void sumData(int **puntero_matrix1, int **puntero_matrix2 , int nRaws, int nCol) {
	for (unsigned int i = 0; i < nRaws; ++i) {
		for (unsigned int j = 0; j < nCol; ++j) {
			*(*(puntero_matrix1 + i) + j) += *(*(puntero_matrix2 + i) + j);
		}
	}

	//Showing matriz final.
	for (unsigned int i = 0; i < nRaws; ++i) {
		for (unsigned int j = 0; j < nCol; ++j) {
			std::cout << *(*(puntero_matrix1 + i) + j) << " ";
		}
		std::cout << std::endl;
	}
}
*/