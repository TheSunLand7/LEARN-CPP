//
// Created by JaeZero on 2021.07.01 -- Thursday at 19:33:38
//
// --> In this file we discuss about  const.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//COSNT: Es como un mecanismo para que nuestro codigo se vea mas ordenado y tambien
//    una promesa de que 'algo' sera constante.

class Entity {
	private:
		//Si modificamos los tributos a pointers, podemos hacer que el metodo 'GetX' tenga 3 'const'.
		//En este caso, solo la variable 'm_X' es un pointer. Para convertir 'm_Y' a pointer se debe
		//    colocar el (*) atras de la variable (*m_Y).
		//int* m_X, m_Y; //--> Ver linea 23
		int m_X, m_Y;
		
		//SI por alguna razon (debug) queremos modificar una variable dentro un metodo 'const', 
		//    podemos usar el keyword 'mutable'.
		mutable int var;

	public:
		//Al colocar 'const' despues del nombre del metodo significa que no se va a modificar el valor
		//   de los atributos; es decir, no se puede modificar 'm_X' ni 'm_Y'.
		//Esto normalmente se aplica a los 'getters' y solo funciona en una clase.
		//const int* const GetX() const {//}--> from line 16
		int GetX() const {
			var = 2;
			return this->m_X;
		}

		//Para los 'setters', no se puede colocar 'const', porque en los 'setters' si vamos a modificar
		//    los valores de los atributos.
		void SetX(int x) {
			this->m_X = x;
		}
};


//Se pasa como referencia porque no queremos que la funcion realice una copia del objeto (uso de memoria extra).
void PrintEntity (const Entity& e) {
	//Al reasignar 'e', estamos modificando su valor, porque estamos pasando como referencia el objeto; es decir,
	//    estamos trabajando con valores.
	//e = Entity();  //--> Es incorrecto.
	//Cuando quitamos el 'const' del metodo 'GetX' no vamos a poder llamar dicho metodo, porque no hay garantia
	//    de que los atributos se mantegan sin modificaciones.
	std::cout << e.GetX() << std::endl;
}

int main() {

	Entity e;
	
	//Esta variable sera constante y no sera modificado --> 'read-only variable'.
	const int MAX_AGE = 80;

	//?Existen muchas aplicaciones de 'const', una de ellas es con POINTERS:
	//1. Al agregar 'const' al inicio o despues de 'int', esto significa que no podemos modificar el valor
	//       de la variable pointer 'a' (*a), pero si podemos asignarle otro lugar de memoria.
	// const int* a = new int; // or int const* a = new int;
	//*a = 2;
	//a = (int*)&MAX_AGE;

	//2. Al gregar 'const' despues del pointer(*) y antes de la variable, esto significa que si podemos
	//       modificar el valor de la variable dereferenciada 'a' (*a), pero no podemos asignarle otra
	//       direccion de memoria como en (a = (int*)&MAX_AGE;).
	//int* const a = new int;
	//*a = 2;
	//a = (int*)&MAX_AGE;

	//3. Al gregar 'const' al inicio y despues del pointer (*), esto significa que no podemos cambiar el
	//      valor de la variable dereferenciada 'a' (*a) y tampoco podemos asignarle otro lugar de memoria.
	//const int* const a = new int;
	//*a = 2;
	//a = (int*)&MAX_AGE;

	//Al asignarle un valor constante a la variable 'a', va a causar un error, por eso
	//    si queremos que no ocurra un error debemos romper la restriccion de 'const' y forzar
	//    la asignacion (no es recomendable). 
	//a = (int*)&MAX_AGE;
	//std::cout << *a << std::endl;

	//?Ahora veremos la aplicacion de 'const' en clases y metodos. --> ve a la clase 'Entity'.


	std::cin.get(); return 0;
}