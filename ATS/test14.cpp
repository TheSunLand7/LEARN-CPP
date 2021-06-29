#include <iostream>
#include <cstdlib>  // La funcion atoi() y atof() funcionan con esta biblioteca.
#include <cstring>

using namespace std;

int main(void){
	/*
	char saludo[] = "Hi! What's up ";
	char personName[30], saludoFinal[100];
	
	cout << "Please enter your name: "; cin.getline(personName, 30, '\n');
	
	strcpy(saludoFinal, saludo);
	strcat(saludoFinal, personName);  // Concatena dos cadenas de strings o caracteres.
	
	cout << saludoFinal << endl << endl;
	
	char word[20], wordRev[30];
	cout << "Please enter any word you want: "; cin.getline(word, 20);
	
	strcpy(wordRev, word);
	strrev(word);
	if (strcmp(word,wordRev) == 0){
		cout << "The word is polindroma!" << endl;
	} else {
		cout << "The word isnt polindroma!" << endl;
	}
	
	cout << endl;
	
	char word1[] = "manzana", word2[] = "melocoton";
	strupr(word1);
	strupr(word2);
	int res = strcmp(word1, word2);
	
	if( res == 0){
		cout << "Ambas palabras son iguales." << endl;
	} else {
		cout << "Las palabras ingresadas no son iguales." << endl;
	}
	cout << "La separacion es de: " << res << endl;
	
	char nombreUsuario[30];
	// CHAR COMPARE[] = 'B';
	
	cout << "Please enter your name in uppercase: "; cin.getline(nombreUsuario, 30, '\n');
	
	// IF (STRCMP(NOMBREDEUSUARIO,COMPARE) > 0) ...
	if(nombreUsuario[0] == 'A'){
		strlwr(nombreUsuario);
		cout << nombreUsuario << endl;
	} else {
		cout << "The name does not start with 'A'." << endl;
	}
	
	char cadena1[30], cadena2[30];
	int number1;
	float suma = 0, number2;
	cout << "Please enter an int number: "; cin.getline(cadena1, 30, '\n');
	cout << "Please enter next float number: "; cin.getline(cadena2, 30, '\n');
	
	number1 = atoi(cadena1);
	number2 = atof(cadena2);
	
	suma = number1 + number2;
	
	cout << "THE SUM IS: " << suma << endl << endl; 
	*/
	
	
	// Ejercicio 10: Pedir al usuario que digite una cadena, luego copiar su contenido hacia otro array de caracteres. 
	// y por ultimo modificar su mensaje poniendo a partir de la posición 10 "Buena broma".
	char addWord[] = " Buena broma ", word[100], word2[100], word3[100], word4[100];
	int res = 0;
	cout << "Please enter any word you want: "; cin.getline(word, 100, '\n');
	strcpy(word2, word);

	for (int i=0;i<9;i++){
		word3[i] = word2[i];
	}
	
	strcat(word3, addWord);
	
	for(int i=22;i<100;i++){
		word3[i] = word2[i-13];
	}

	cout << strupr(word3) << endl << endl;
	
	
	system("pause");
	return 0;
}
