#include <iostream>
#include <conio.h>  // Para que el ejecutable creado no se cierre automaticamente.
// #include <stdlib.h>  // Lo mismo que conio.h
using namespace std;

int main(){
	int i = 1;
	
	while (i <= 100){
		cout << i << endl;
		i++;
	}
	
	//system("pause"); ---> Viene de stdlib.h
	getch();
	return 0;
}
