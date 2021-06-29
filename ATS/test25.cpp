#include <iostream>

/* EJERCICIO DE POINTERS 9
Ejercicio 10: Realice un programa que lea una matriz dinámica de NxM y cree su matriz traspuesta. 
Nota: La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.

void getData();
void matrixTrans(int **, int **,int, int);
void showData(int **, int, int);

//Global variables
int **puntero_matrix = nullptr, **puntero_trans = nullptr;
int nRaws, nCol;

int main() {

	getData();
	matrixTrans(puntero_matrix,puntero_trans,nRaws,nCol);
	showData(puntero_trans, nRaws,nCol);

	//Flushing memory...
	for (int i = 0; i < nRaws; ++i) {
		delete[] puntero_matrix[i];
	}
	for (int i = 0; i < nCol; ++i) {
		delete[] puntero_trans[i];
	}
	
	delete[] puntero_matrix;
	delete[] puntero_trans;

	//Flush memory of pointer-to-pointer.
	puntero_matrix = NULL;
	puntero_trans = NULL;


	std::cin.get();
	return 0;
}

void getData() {
	std::cout << "Please enter the number of raws:"; std::cin >> nRaws;
	std::cout << "Please enter the number of columns: "; std::cin >> nCol;

	puntero_matrix = new int* [nRaws];
	for (int i = 0; i < nRaws; ++i) {
		puntero_matrix[i] = new int[nCol];
	}

    puntero_trans = new int *[nCol];
	for (int i = 0 ; i < nCol; ++i) {
		puntero_trans[i] = new int[nRaws];
	}

	for (int i = 0; i < nRaws; ++i) {
		for (int j = 0; j < nCol; ++j) {
			std::cout << "Please enter value for [" << i << "][" << j << "]: "; std::cin >> *(*(puntero_matrix + i) + j);
		}
	}
}

void matrixTrans(int **puntero_matrix, int **puntero_trans, int nRaws, int nCol) {

	

	for (int i = 0; i < nRaws; ++i) {
		for (int j = 0; j < nCol; ++j) {
			*(*(puntero_trans + j) + i) = *(*(puntero_matrix + i) + j);
		}
	}
}

void showData(int **puntero_trans,int nRaws,int nCol) {
	for (int i = 0; i < nCol; ++i) {
		for (int j = 0; j < nRaws; ++j) {
			std::cout << *(*(puntero_trans + i) + j) << " ";
		}
		std::cout << std::endl;
	}
}
*/

/*EJERCICIO DE POINTERS 11
Ejercicio 11: Hacer una estructura llamada alumno, en la cual se tendrán los siguientes Campos: Nombre, edad, promedio, 
pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.
NOTA: Usar punteros a estructura


#include <string>

const int SIZE = 3;

struct Alumno {
    std::string name;
    int age = 0;
    float avg = 0;
}alumno[SIZE], *pAlumno = alumno;

void getData();
void compData(Alumno *);

int main() {
    
    getData();
    compData(pAlumno);

    std::cin.get();
    return 0;
}

void getData() {
    
    for (int i = 0; i < SIZE; ++i) {
        std::fflush(stdin);
        std::cout << "Please enter the student's name " << i + 1 << ": "; std::cin >>(pAlumno+i)->name;
        std::cout << "Please enter the student's age " << i + 1 << ": "; std::cin >> (pAlumno+i)->age;
        std::cout << "Please enter the student's grade " << i + 1 << ": "; std::cin >> (pAlumno+i)->avg;
        std::cout << "----------------------------------------------\n";
        
    }
}

void compData(Alumno *pAlumno) {
    float biggest = 0.0f;
    int pos = 0;

    for (int i = 0; i < SIZE; ++i) {
        if ((pAlumno + i)->avg > biggest) {
            biggest = (pAlumno + i)->avg;
            pos = i;
        }
    }

    std::cout << "\nThe student with biggest grade is: " << std::endl;
    std::cout << "Name: " << (pAlumno + pos)->name << std::endl;
    std::cout << "Age: " << (pAlumno + pos)->age << std::endl;
    std::cout << "Grade: " << (pAlumno + pos)->avg << std::endl;
}
*/

/*PILAS
1. INSERT AND DELETE DATA

struct Nodo {
	int data;
	Nodo *next;
};

void addElem(Nodo *&, int);
void delElem(Nodo *&, int&);

int main() {
	Nodo *stack = NULL;
	int number;

	std::cout << "Enter a number: "; std::cin >> number;
	addElem(stack, number);

	std::cout << "Enter a another number: "; std::cin >> number;
	addElem(stack, number);

	//Call the delElem function to remove elements of the stack.
	while (stack != NULL) {
		delElem(stack, number);
		if (stack != NULL) {
			std::cout << number << ", ";
		} else
			std::cout << number << "." << std::endl;
	}

	std::cin.get();
	return 0;
}

void addElem(Nodo *&stack, int number) {
	Nodo *new_nodo = new Nodo();  //Es como crear una varibale de tipo estructura.
	new_nodo->data = number;  //Se almacena eñ dato
	new_nodo->next = stack;  //Se apunta al siguiente nodo.
	stack = new_nodo;  //Stack apunta al nuevo nodo para que el siguiente nodo apunte a este primero y asi sucesivamente.
	
	std::cout << "Number " << number << " has been entered!\n" << std::endl;
}

void delElem(Nodo *&stack, int &number) {
	Nodo *aux = stack;
	number = aux->data;
	stack = aux->next;
	delete aux;
}*/

/*EJERCICIO DE PILAS 1
Ejercicio 1: Hacer un programa para agregar números enteros a una pila, hasta que el usuario lo decida, 
después mostrar todos los números introducidos en la pila.

struct Nodo {
	int data;
	Nodo *next;
};

void addElem(Nodo *&, int);
void delElem(Nodo *&, int&);

int main() {
	int number;
	Nodo *stack = NULL;
	bool run = true;

	//To get data from user.
	while (run) {
		std::cout << "Please enter a number [press 0 to exit]: "; std::cin >> number;
		
		if (number == 0) {
			run = false;
		} else {
			addElem(stack, number);
			std::cout << "Number " << number << " entered succesfully!\n" << std::endl;
		}
	}

	//To show data entered from user.
	std::cout << "\nShowing data entered by user: \n";
	while (stack != NULL) {
		delElem(stack, number);
		if (stack != NULL) {
			std::cout << number << ", ";
		} else
			std::cout << number << "." << std::endl;
	}

	std::cin.get();
	return 0;
}

void addElem(Nodo *&stack, int number) {
	Nodo *new_nodo = new Nodo();
	new_nodo->data = number;
	new_nodo->next = stack;
	stack = new_nodo;
}

void delElem(Nodo *&stack, int &number) {
	Nodo *aux = stack;
	number = aux->data;
	stack = aux->next;
	delete aux;
}*/

/*EJERCICIO DE PILAS 2
Ejercicio 2: Hacer un programa en C++, utilizando Pilas que contenga el siguiente menu: 

 1. Insertar un caracter a la pila
 2. Mostrar todos los elementos de la pila
 3. Salir

struct Nodo {
	char data;
	Nodo *next;
};

int showMenu();
void addElem(Nodo *&, char);
void delElem(Nodo *&, char&);
void showData(Nodo *&, char&, int);

int main() {
	char character, answer;
	Nodo *stack = NULL;

	do {
		int option = showMenu();

		if (option == 3) {
			break;
		} else 
			showData(stack, character, option);

		std::cout << "\nWould you like to do something else? (y/n): "; std::cin >> answer;
	} while ((answer == 'Y') || (answer == 'y'));
	
	std::cin.get();
	return 0;
}

int showMenu() {
	int choice = 0;

	std::cout << "x------MENU------x\n"
	          << "1. Insert a character. \n"
			  << "2. Show all characters. \n"
			  << "3. Exit. \n"
			  << "Choose (1-3): "; std::cin >> choice;
	return choice;
}

void addElem(Nodo *&stack, char character) {
	Nodo *new_nodo = new Nodo();
	new_nodo->data = character;
	new_nodo->next = stack;
	stack = new_nodo;
}

void delElem(Nodo *&stack, char &character) {
	Nodo *aux = stack;
	character = aux->data;
	stack = aux->next;
	delete aux;
}

void showData(Nodo *&stack, char &character, int choice) {
	bool run = true;
	switch (choice) {
		case 1:
			//To get data from user.
			while (run) {
				std::cout << "\n";
				std::cout << "Please enter a character [press 'q' to exit]: "; std::cin >> character;
				
				if (character == 'q') {
					run = false;
				} else {
					addElem(stack, character);
					std::cout << "\tCharacter " << character << " entered succesfully!\n" << std::endl;
				}
			}
			break;
		case 2:
			//To show data entered by user.
			std::cout << "\nShowing data entered by user: \n";
			while (stack != NULL) {
				delElem(stack, character);
				if (stack != NULL) {
					std::cout << character << ", ";
				} else
					std::cout << character << "." << std::endl;
			}
			break;
		case 3: break;
	}
}*/