#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

/*
struct Alumno {
	char name[20];
	int age;
	float grade;
}alumno[3];

int main(void){
	float bestGrade = 0;
	int conteo = 0;
	
	for (int i=0;i<3;i++){
		fflush(stdin);
		cout << "Name of the alumn " << i+1 << ": "; cin.getline(alumno[i].name, 20, '\n');
		cout << "Age of the alumn " << i+1 << ": "; cin >> alumno[i].age;
		cout << "Grade of the alumn " << i+1 << ": "; cin >> alumno[i].grade;
		cout << "-------------------------------------" << endl;
		
		if (alumno[i].grade > bestGrade){
			bestGrade = alumno[i].grade;
			conteo = i;
		}
	}
	
	cout << "The best grade is: " << bestGrade << endl;	
	cout << "\nIMPRIMIENDO DATOS DEL ALUMNO:\n" << endl;
	
	cout << "Name: " << alumno[conteo].name << endl;
	cout << "Age: " << alumno[conteo].age << endl;
	cout << "Grade: " << alumno[conteo].grade << endl;
	cout << "----------------------------------------" << endl << endl;
	
	
	system("pause");
	return 0;
}


struct Atleta{
	char nombre[20];
	char pais[20];
	int medallas;
}atleta[100];

int main(void){
	int m_medallas=0, n_atletas, conteo;
	cout << "Please enter the number of athletes: "; cin >> n_atletas;
	
	for (int i=0;i<n_atletas;i++){
		fflush(stdin);
		
		cout << "\nATHLETE " << i+1 << ":\n" << endl;
		cout << "Please enter the name: "; cin.getline(atleta[i].nombre, 20, '\n');
		cout << "Please enter the country: "; cin.getline(atleta[i].pais, 20, '\n');
		cout << "Please enter the number of medals: "; cin >> atleta[i].medallas;
		
		cout << "----------------------------------------------------------" << endl;
		
		if (atleta[i].medallas > m_medallas){
			m_medallas = atleta[i].medallas;
			conteo = i;
		}
	}	
	
	cout << "\nDATOS DEL ATLETA CON MAS MEDALLAS:\n\n";
	cout << "Name: " << atleta[conteo].nombre << endl;
	cout << "Country: " << atleta[conteo].pais << endl << endl;
	
	system("pause");
	return 0;
}
*/

struct Notas{
	float nota1, nota2, nota3;
};

struct Alumno{
	char nombre[20], sexo[20];
	int edad;
	struct Notas grade;
}alumno[100];

int main(void){
	int n_alumnos, conteo;
	float bestGrade=0, promNotas=0;
	cout << "Please enter the name of students: "; cin >> n_alumnos;
	
	for(int i=0;i<n_alumnos;i++){
		fflush(stdin);
		cout << "\nSTUDENT " << i+1 << ":\n";
		cout << "Name: "; cin.getline(alumno[i].nombre,20,'\n');
		cout << "Gender: "; cin.getline(alumno[i].sexo, 20,'\n');
		cout << "Age: "; cin >> alumno[i].edad;
		
		cout << "Please enter the first grade: "; cin >> alumno[i].grade.nota1;
		cout << "Please enter the second grade: "; cin >> alumno[i].grade.nota2;
		cout << "Please enter the third grade: "; cin >> alumno[i].grade.nota3;
		
		promNotas = (alumno[i].grade.nota1+alumno[i].grade.nota2+alumno[i].grade.nota3)/3;
		if (promNotas > bestGrade){
			bestGrade = promNotas;
			conteo = i;
		}
		cout << "-------------------------------" << endl;	
	}
	
	cout << "\nTHE BEST STUDENT IS:\n";
	cout << "Name: " << alumno[conteo].nombre << endl;
	cout << "Gender: " << alumno[conteo].sexo << endl;
	cout << "Age: " << alumno[conteo].edad << endl;
	cout << "Grade: " << bestGrade << endl << endl;
	
	system("pause");
	return 0;
}

