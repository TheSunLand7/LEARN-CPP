#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;
/*
struct Personas {
	char name[20];
	char gender[20];
	int age;
	float height;
}persona[3];

int main(void){
	
	for(int i=0;i<3;i++){
		fflush(stdin);  // Permite vaciar el buffer para colocar mas valores.
		cout << "Please enter the name of the person " << i+1 << " : ";
		cin.getline(persona[i].name, 20, '\n');
		cout << "Please enter the gender of the person " << i+1 << " : ";
		cin.getline(persona[i].gender, 20, '\n');
		cout << "Please enter the age of the person " << i+1 << " : ";
		cin >> persona[i].age;
		cout << "Please enter the height of the person " << i+1 << " : ";
		cin >> persona[i].height;
		cout << "--------------------------------------" << endl;
	}
	
	for(int j=0;j<3;j++){
		cout << "\nImprimiendo los datos\n" << endl;
		cout << "Nombre of the person " << j+1 << ": " << persona[j].name<< endl;
		cout << "Gender of the person " << j+1 << ": " << persona[j].gender << endl;
		cout << "Age of the person " << j+1 << ": " << persona[j].age << endl;
		cout << "Height of the person " << j+1 << ": " << persona[j].height << endl;
	
		cout << "----------------------------------------------" << endl;
	}
	
	
	
	system("pause");
	return 0;
}
*/

struct info_direccion{
 	char direccion[30];
 	char ciudad[20];
 	char provincia[20];
};
struct empleados{
	char nombre[30];
 	struct info_direccion dir_empleado;
 	double salario;
}empleado[100];

int main(){
	int nume;
	cout << "\nDigite el numero de empleados: "; cin >> nume;
	cout << "\n";
 
	for(int i=0;i<nume;i++){
		fflush(stdin);
	  	cout << "Digite el nombre:"; cin.getline(empleado[i].nombre,30,'\n');
	  	cout << "Digite la direccion:"; cin.getline(empleado[i].dir_empleado.direccion,30,'\n');
	  	cout << "Digite la ciudad:"; cin.getline(empleado[i].dir_empleado.ciudad,20,'\n');
	  	cout << "Digite la provincia:"; cin.getline(empleado[i].dir_empleado.provincia,20,'\n');
	  	cout << "Salario:"; cin>>empleado[i].salario;
	  
	  	cout << "\n";
	 }
 
	for(int i=0;i<nume;i++){
	 	
	 	cout << "Nombre: " << empleado[i].nombre << endl;
		cout << "Direccion: " << empleado[i].dir_empleado.direccion << endl;
		cout << "Ciudad: " << empleado[i].dir_empleado.ciudad << endl;
		cout << "Provincia: " << empleado[i].dir_empleado.provincia << endl;
		cout << "Salario: " << empleado[i].salario << endl;
		cout << "\n";
	}
 
 	system("pause");
 	return 0;
}
