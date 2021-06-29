#include <iostream>
#include <string>

/*
class Person {
    private:
        std::string name;
        int age;
    public:
        Person(std::string, int);
        void showPerson();
};

class Alumni : public Person {
    private:
        std::string ID;
        float final_grade;
    public:
        Alumni(std::string, int, std::string, float);  //Se escribe los atributos que se hereda.
        void showAlumni();

};

Person::Person(std::string _name, int _age) {
    name = _name;
    age = _age;
}

//Heredo los atributos de Person : pero estos datos ya los tengo de Person.
Alumni::Alumni(std::string _name, int _age, std::string _id, float _final_grade) : Person(_name, _age) {
    ID = _id;
    final_grade = _final_grade;
}

void Person::showPerson() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}

void Alumni::showAlumni() {
    showPerson();  //Esto ya se definio en la clase Person.
    std::cout << "ID: " << ID << std::endl;
    std::cout << "FInal Grade: " << final_grade << std::endl;
}

int main() {
    Alumni a1("Chencho", 23, "16098523", 18.6);
    a1.showAlumni();

    std::cin.get(); return 0;
}*/

/*EJERCICIO*/
class Person {
    private:
        std::string name;
        int age;
    public:
        Person(std::string, int);
        void showPerson();
};

class Employee : public Person {
    private:
        std::string ID;
        float salary;
    public:
        Employee(std::string, int, std::string, float);
        void showEmployee();
};

class Student : public Person {
    private:
        float final_grade;
    public:
        Student(std::string, int, float);
        void showStudent();
};

class Univ : public Student {
    private:
        std::string codAlm;
        std::string college;
    public:
        Univ(std::string, int, float, std::string, std::string);
        void showUniver();
};

Person::Person(std::string _name, int _age) {
    name = _name;
    age = _age;
}

void Person::showPerson() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}

Employee::Employee(std::string _name, int _age, std::string _id, float _salary) : Person(_name, _age) {
    ID = _id;
    salary = _salary;
}

void Employee::showEmployee() {
    showPerson();
    std::cout << "ID: " << ID << std::endl;
    std::cout << "Salary: " << salary << std::endl;
}

Student::Student(std::string _name, int _age, float _final_grade) : Person(_name, _age) {
    final_grade = _final_grade;
}

void Student::showStudent() {
    showPerson();
    std::cout << "Final Grade: " << final_grade << std::endl;
}

Univ::Univ(std::string _name, int _age, float _final_grade, std::string _codAlm, std::string _college) : Student(_name, _age, _final_grade) {
    codAlm = _codAlm;
    college = _college;
}

void Univ::showUniver() {
    showStudent();
    std::cout << "Cod. Alumn: " << codAlm << std::endl;
    std::cout << "College: " << college << std::endl;
}

int main() {
    Employee emp("Chencho", 23, "16098523", 1368.65);
    std::cout << "-EMPLOYEE-" << std::endl;
    emp.showEmployee();
    std::cout << '\n';

    Student st("Kirin", 25, 16.7);
    std::cout << "-STUDENT-" << std::endl;
    st.showStudent();
    std::cout << '\n';

    Univ un("Jae", 26, 15.8, "18568794", "UNMSM");
    std::cout << "-UNIVERSITARIO-" << std::endl;
    un.showUniver();

    std::cin.get(); return 0;
}