#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;

struct Person{
	char name[20];
	bool discap;
}person[100], peopleD[100], peopleNotD[100];

int main(void){
	int n_people, countD=0, countNotD=0;
	
	cout << "Please enter the number of people to examine: "; cin >> n_people;
	
	for (int i=0;i<n_people;i++){
		fflush(stdin);
		cout << "\nPERSON " << i+1 << endl;
		cout << "Name: "; cin.getline(person[i].name, 20, '\n');
		cout << "Disability: "; cin >> person[i].discap;
		
		if (person[i].discap == 1){
			// Se utiliza countD para que no haya vacios en el conteo
			// Si eres incredulo comprueba con datos
			strcpy(peopleD[countD].name, person[i].name);
			countD++;
		} else if (person[i].discap == 0){
			strcpy(peopleNotD[countNotD].name, person[i].name);
			countNotD++;
		}
		cout << "---------------------------------------" << endl;
	}
	cout << "\nPEOPLE WITH SOME DISABILITIES:\n";
	
	for(int j=0;j<countD;j++){
		cout << peopleD[j].name << endl;
	}
	cout << "\nPEOPLE WITH NO DISABILITIES:\n";
	
	for (int k=0;k<countNotD;k++){
		cout << peopleNotD[k].name << endl;
	}
	
	cout << endl << endl;
	system("pause");
	return 0;
}
