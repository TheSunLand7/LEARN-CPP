#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(void){
	/*
	char word[20];
	int longWord = 0;
	
	cout << "Please enter any word you want: ";
	cin.getline(word, 20, '\n');  // Esta funcion es mas recomendada en ves de cin solo.
	
	longWord = strlen(word);  // La funcion strlen() te devuelve un entero.
	
	if (longWord > 10){
		cout << word << endl;
	} else {
		cout << "Your word does not beat 10 characteres!" << endl << endl;
	}
	
	// La funcion strcpy(la variable vacia, la variable a copiar) sirve para copiar.
	
	char words[20];
	int newList[100], newListTwo[100];
	cout << "Please enter words: "; cin.getline(words, 20, '\n');
	
	for (int i=0;i<strlen(words);i++){
		newList[i] =  words[i];
	}
	
	for (int j=0;j<strlen(words);j++){
		newListTwo[j] = newList[j];
	}
	
	cout << "This is the second array copied\n" << endl;
	for (int k=0;k<strlen(words);k++){
		cout << char(newListTwo[k]);
	}
	cout << endl << endl << endl;
	*/
	
	char word1[100], word2[100];
	cout << "Please enter the first word: "; cin.getline(word1, 20, '\n');
	cout << "Please enter the second word: "; cin.getline(word2, 20, '\n');
	
	if (strcmp(word1, word2)==0){
		cout << "El caracter '" << word1 << "' y el caracter '" << word2 << "' son iguales." << endl;
	} else {
		if (strcmp(word1, word2) > 0){
			cout << "'" << word1 << "' es mayor alfabeticamente que '" << word2 << "'." << endl << endl;
		} else {
			cout << "'" << word2 << "' es mayor alfabeticamente que '" << word1 << "'."  << endl << endl;
		}
	}
	
	cout << "*---------------------------------------THE END-------------------------------------------*" << endl;
	system("pause");
	return 0;
}
