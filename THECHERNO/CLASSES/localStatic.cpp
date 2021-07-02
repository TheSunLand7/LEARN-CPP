/*In this case we are going to see about local scope in a function specifically*/
#include <iostream>

// STATIC LOCAL VARIABLE: Nos permite declarar una variable que tiene 'vida' hasta que 
// 		nuestro programa finalice; sin embargo, el scope(alcance) esta limitado a la funcion
//      a la que pertenece.

class Singleton {
	public:
		static Singleton& Get() {

			//Si no colocamos static a esta instancia, el tiempo de vida de este terminaria
			//    cuando la funcion termine de ejecutarse. y no podriamos usarla para otros
			//    propositos en nuestro programa.
			static Singleton instance;
			return instance;
		}

        void hello(const char *message) {
			std::cout << message << std::endl;
		}
};

void Function() {

	//Si declaramos esta variable sin el keyboard 'static', cuando la llamemos en la funcion
	//    principal, este solo creara una copia por cada llamada.
	//int i = 0;
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

int main() {

	//Cada una de estas funciones imprimira 1 y no aumentara por cada llamada.
	//Para hacer que por cada llamada de la funcion se imprima i incrementandose,
	//    se debe hacer a la varibale 'i' statica.
	//Sin embargo esto se puede lograr colocando la variable 'i' como global; sin embargo,
	//    cualquiera podria acceder y cambiar su valor en cualquier momento. 
	/*
	Function();
	Function();
    Function();
    Function();
    Function();
	*/
	Singleton::Get().hello("It works!");


    std::cin.get(); return 0;
}