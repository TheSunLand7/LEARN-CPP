#include <iostream>
#include <string>
#include <stdexcept>

// COMMENTS IN SPANISH.

/*
class Date {
    
    private:
        int day, month, year;

    public:
        
        void SetDate(int d, int m, int y) {
            this->day = d;  //Es lo mismo que: day = d;
            this->month = m;
            this->year = y;
        }

        void Print() {
            std::cout << this->year << "."
                      << this->month << "."
                      << this->day << std::endl;
        }
                    //GETTERS

        int GetYear() { return this->year;}  //Esto es un getter. Sirve para retornar valores de manera
        int GetMonth() { return this->month;}  //separada y no todo.
        int GetDay() { return this->day;}
        
                    //SETTERS

        void SetDay(int d) {this->day = d;}
        void SetMonth(int m) {this->month = m;}
        void Setyear(int y) {this->year = y;}
};

int main() {
    int d, m, y;
    std::cout << "Enter date (yyyy,mm,dd): "; std::cin >> y >> m >> d;
    
    Date dt;
    dt.SetDate(d, m, y);
    std::cout << "Entered date is: ";
    dt.Print();

    std::cout << "\nJust month: " << dt.GetMonth() << std::endl;

    std::cin.get(); return 0;
}*/

/*RULE OF ZERO THREE FIVE
class DummyClass {
    
    private:

        int dummy_attr1;
        char dummy_attr2;
    public:

        //Podemos inicializar los atributos en los constructores.
        DummyClass() : dummy_attr1(0), dummy_attr2('E') {
            std::cout << "Dummy class here!!!!!" << std::endl;
        }

        DummyClass(int param) : dummy_attr1(param), dummy_attr2('P') {
            std::cout << "2nd constructor here!! Param = " << param << std::endl;
        }

        void Print() {
            std::cout << "dummy_attr1 = " << dummy_attr1 << std::endl;
            std::cout << "dummy_attr2 = " << dummy_attr2 << std::endl;
        }

        //El metodo friend nos permite acceder a los atributos a partir de instancias y crear
        //interaccion entre ellas como sumar.
        friend int Add(DummyClass dc1, DummyClass dc2) {
            int result = dc1.dummy_attr1 + dc2.dummy_attr1;
            return result;
        }

        ~DummyClass() { 
            std::cout << "Desctructor has been called!" << std::endl;
        }
};

int main() { 
    
    //Necesito aclarar, por qué dummy con parentesis no imprime el texto del constructor.
    //DummyClass dummy1;
    //dummy1.Print();

    //DummyClass dummy2(7);
    //dummy2.Print();

    DummyClass dc1(100), dc2(200);

    int res = Add(dc1, dc2);

    std::cout << "Result is: " << res << std::endl;

    std::cin.get(); return 0;
}*/

/*OTHER WAY OF DO CLASS

class Date {

    private:
        int day, month, year;

        std::string GetMonthName () const {
            static std::string months[] = {
                "january", "february", "march", "april",
                "may", "june", "july", "august", 
                "september", "october", "november", "december"
            };

            return months[month-1];
        }
    public:
        //Constructor
        Date(int d, int m, int y) {
            this->SetDate(d, m, y);
        }
        void SetDate(int d, int m, int y) {
            SetDay(d);
            SetMonth(m);
            SetYear(y);

        }

        void PrintNice() const {
            std::cout << day << " " << GetMonthName() << " " << year << std::endl;
        }

        int GetDay() { return this->day;}
        int GetMonth() { return this->month;}
        int GetYear() { return  this->year;}

        void SetDay(int d) { 
            if (d < 0 || d > 31)
                throw std::logic_error ("Day out of range");
            this->day = d;
        }
        void SetMonth(int m) { 
            if (m < 0 || m > 12)
                throw std::logic_error ("Month must be in [1, 12] interval!");
            this->month = m; 
        }
        void SetYear(int y) { 
            if (y < 0)
                throw std::logic_error ("Year must be positive!");
            this->year = y; 
        }

        //Desctructor

        ~Date() {
            std::cout << "Desctructor has been called!" << std::endl;
        }
};

int main() {

    Date dt1(9, 8, 1945);
    Date dt2(dt1);

    dt1.PrintNice();
    dt2.PrintNice();

    //std::cout << "Final code!" << std::endl;

    std::cin.get(); return 0;
}*/

