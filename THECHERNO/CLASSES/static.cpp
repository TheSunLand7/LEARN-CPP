/*In this case we are going to discus how statics works in
c++. To be specific, how it works in a class.

COMMENTS BELOW ARE IN SPANISH*/
#include <iostream>

// STATIC VARIABLE: Solo habra una instancia a traves de todas las instancias de
// la clase.
//    Esto quiere decir que si una variable instanciada cambia la vairable
//    estatica, este cambio se verá reflejado en las demas instancias.
// STATIC METHODS: Con los metodos estaticos no se tiene acceso a una clase
//    instanciada. Un metodo estatico
//    puede ser llamado sin una clase instanciada. Dentro de un metodo estatico
//    no se puede escribir codigo que refiera a una clase instanciada.
//    Un metodo estatico no puede utilizar variables no estaticas.

class Entity {
public:
  // Si hacemos 'x' e 'y' static, significa que ya no son 'miembros' de la clase
  //    Entity (pero si pertenecen a la clase), porque el espacio que se les
  //    asigna se encuentra en un almacenamiento estático separado al de la
  //    clase. Por eso las variables estaticas se deben inicializar
  //    explicitamente.

  static int x, y;

  void Print() { std::cout << x << ", " << y << std::endl; }
};

int Entity::x, Entity::y;

int main() {

  // Entity e;
  Entity::x = 2;
  Entity::y = 3;

  // Como las variables x and y son statics la siguiente linea fallara.
  // Entity e1 = {5, 8};
  // Entity e1;
  Entity::x = 5;
  Entity::y = 8;

  // *A simple vista parece que se va a imprimir valores distintos; sin embargo,
  //    esto no es así. Estos van a imprimir los mismos valores {5, 8}.

  // e.Print();
  // e1.Print();

  /*STATIC es util cuando usamos datos estaticos; es decir, que no van cambiar
    entre clases instanciadas pero que queremos utilizarlos en nuestra clase.*/

  std::cin.get();
  return 0;
}
