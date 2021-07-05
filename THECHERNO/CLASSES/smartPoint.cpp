//
// Created by JaeZero on 2021.07.04 -- Sunday at 23:35:13
//
// --> In this file we discuss about SMART POINTERS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
//Para usar 'smart pointers' debemos incluir:
#include <memory>

//SMART POINTERS: Son una manera de automatizar el proceso de liberar memoria cuando se
//    se utilice el operador 'new'. Es decir, no tenemos que llamar al operador 'delete'.
//    En muchos casos incluso, no tenemos que llamar al operador 'new'.
//Cuando cremaos un smart pointer, este llamara a 'new' y alocara memoria por nosotros y despues, 	
//    basado en que tipo de smart pointer usemos, la memoria alocada sera liberada en algun punto.
//1. UNIQUE POINTER: Es el mas simple de todos. Es un 'scoped pointer'; es decir, cuando el puntero
//                       sale del scope, este será eliminado y llamara al operador 'delete'.
//                   No se puede copiar un 'unique pointer', debe ser unico, porque si lo hacemos, habra
//                       2 punteros con las misma direccion de memoria y cuando uno libere memoria, el otro
//                       seguira apuntado a la memoria liberada.
//2. SHARED POINTER: La manera en como trabaja este pointer es por conteo de referencia; es decir, hace el conteo
//                       de cuantas referencias tenemos hacia nuestro pointer. Una vez que el conteo de referencia
//						 alcance a cero, este sera eliminado y se libera la memoria.
class Entity {
	private:
		int x, y;

	public:
		Entity () { std::cout << "Created Entity" << std::endl;}
		~Entity () { std::cout << "Deleted Entity" << std::endl;}

		void Print () {}
};

int main() {
	
	{
		//Creamos un 'unique pointer'.
		//std::unique_ptr<Entity> entity(new Entity());
		//Existe una manera preferida de construir 'unique pointers'. La razon principal es debido a
		//    lidiar con los 'exceptions'.
		std::unique_ptr<Entity> entity = std::make_unique<Entity>();
		entity->Print();  //Accedemos a los metodos como simepre.

		//Creando un 'shared pointer'.
		//Con los 'shared pointers' no se puede colocar directamente 'new Entity()', debido a que este
		//    se alocala en otro bloque de memoria llamada 'the control block' y en donde alamcena el
		//    conteo de referencia. Por eso si primero creamos un 'new Entity()' y luego lo pasamos en el
		//    'shared pointer constructor', vamos a tener doble alocacion de memoria.
		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
		//Podemos hacer una copia. Y si sacamos la copia fuera del 'scope', la copia del 'shared pointer'
		//    aun seguira apuntando a la direccion de memoria del original.
		std::shared_ptr<Entity> e0 = sharedEntity;  
		//Lo que hace este 'weak_ptr' es que hace la copia de 'shared pointer', pero no incrementa el conteo de
		//    referencia. Es como una referencia nada mas. SI el 'shared pointer' es eliminado, 'weak_ptr' apunta
		//    a una direccion de memoria liberada (invalida). Es bueno para saber si aun no ha sido eliminado el
		//    'shared pointer'.
		std::weak_ptr<Entity> weakEtity = sharedEntity;

	}

	std::cin.get(); return 0;
}