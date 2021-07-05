//
// Created by JaeZero on 2021.07.04 -- Sunday at 20:52:13
//
// --> In this file we discuss about THIS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//THIS: Es un puntero hacia el actual objeto instanciado al cual el metodo pertenece. 
//Solo se puede acceder a traves de un miembro de una funcion que pertenece a una clase (metodo).
//

//void PrintEntity(Entity* e);

class Entity {

	public:
		int x, y;
		Entity (int x, int y) {
			//Si no queremos inicializar las variabls 'arriba', podemos inicializarlos en el cuerpo:
			//Sin embargo, como las varibales son iguales, lo que esta pasando es que las variables de
			//    este constructor se estan asignando a ellas mismas y no se le esta asignando a las variables
			//    de la clase, como debe de ser.
			
			//Para hacer referencia a las variables de la clase usamos el keyboard 'this'.
			//veamnos como esta compuesto 'this':
			//Entity* entity = this;
			//Entonces podemos utilizar:
			//entity->x = x;
			//entity->y = y;
			
			//O para hacerlo mas simple:
			this->x = x;
			//(*this).x = x;  //Esto es similar al anterior.
			this->y = y;

			//Otro uso del 'this' es para llamar a una funcion fuera de la clase.
			//PrintEntity(this);   //This error is in 'VSCODIUM' (idk why?).
		}
		~Entity () {}
};

//void PrintEntity(Entity *e) { /* --Do something-- */ }

int main() {
	/* --Do something -- */

	std::cin.get(); return 0;
}

