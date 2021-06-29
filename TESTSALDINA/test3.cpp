#include <iostream>
#include <functional>
#include <string>
/*FUNCTIONS
bool pesi(int);

int main() {
    int number;
    std::cout << "Please enter a number: "; std::cin >> number;

    std::function<bool(int)> f = pesi;

    if (f(number)){
        std::cout << number << " is a prime number." << std::endl;
    } else
        std::cout << number << " is not a prime number." << std::endl;
    
    std::cin.get();
    return 0;
}

bool pesi(int a) {
    
    if (a > 1){  
        for (int i = 2; i < a; ++i){
            if (a % i == 0){
                return false;
            }
        }
        return true;
    }
    
    return false;
}


// All primer numbers between a given range.
bool allPrim(int);

int main() {
    int number, count = 0;
    std::cout << "Please enter a number: "; std::cin >> number;

    std::function<bool(int)> f = allPrim;
    
    for (int i = 2; i < number; ++i)
    {
        if (f(i))
        {
            std::cout << i << " ";
            ++count;
        }
        
    }

    std::cout << "\nThere are " << count << " primer numbers." << std::endl;
    

    std::cin.get();
    return 0;
}

bool allPrim(int num) {
    if (num > 1){
        for (int i = 2; i < num; ++i) {
            if (num % i == 0){
                return false;
            }
        }
    }

    return true;
}


void showMenu();
void operation(int, int&);
void newUser();
bool verifyUser(std::string&, std::string&);

// Global variables
std::string newUserName, newPassword, user, password;;

int main() {
    int option, balance = 500, sysAccess;

    do{
        std::cout << "Sign Up [1] || Sign In [2]?\n" << "Choose 1 or 2: "; std::cin >> sysAccess;
        
        if (sysAccess == 1){
            newUser();
        } else if (sysAccess == 2) {
            
            if (verifyUser(newUserName, newPassword)) {
                do {
                    showMenu();
                    std::cout << "\nPlease choose an option: "; std::cin >> option;
                    operation(option, balance);
                } while (option !=4);
            } 
        }
    } while (sysAccess != 3); 
    

    std::cin.get();
    return 0;
}

//To create a new username
void newUser() {
    fflush(stdin);
    std::cout << "Please enter a new username: "; std::getline (std::cin, newUserName);
    
    std::cout << "Please enter a new password: "; std::getline (std::cin, newPassword);
    std::cout << "Sign Up successfully!" << std::endl;

}

//To verify user's login
bool verifyUser(std::string &verifyUserName, std::string &verifyPassword) {
    std::cout << "Please enter your username: "; std::cin >> user;
    std::cout << "Please enter your password: "; std::cin >> password;
    if (verifyUserName == user) {
        //std::cout << verifyUserName << ", " << user << std::endl;
        if (verifyPassword == password){
            //std::cout << verifyPassword << ", " << password << std::endl;
            std::cout << "\nLogin successfully!" << std::endl;
            return true;
        }
        
    }
    std::cout << "\nData entered: " << std::endl;
    std::cout << verifyUserName << ", " << user << std::endl;
    std::cout << verifyPassword << ", " << password << std::endl;
    std::cout << "\nLog in failed! Try again." << std::endl;
    return false;

}

void showMenu() {
    std::cout << "*****************MENU****************" << std::endl;
    std::cout << "1. BALANCE" << std::endl;
    std::cout << "2. DEPOSIT" << std::endl;
    std::cout << "3. WITHDRAW" << std::endl;
    std::cout << "4. EXIT" << std::endl;
    //std::cout << "*************************************" << std::endl;
}

void operation(int option, int &balance) {
        
    switch (option)
    {
    case 1:
        std::cout << "Your balance is $" << balance << std::endl << std::endl;
        break;
    case 2:
        int deposit;
        std::cout << "Please enter deposit amount: "; std::cin >> deposit;
        balance += deposit;
        std::cout << '\n' << std::endl;
        break;
    case 3:
        int withdraw;
        std::cout << "Please enter withdraw amount: "; std::cin >> withdraw;
        if (withdraw <= balance){
            balance -= withdraw;
            std::cout << '\n' << std::endl;
        }else
            std::cout << "Sorry, NOT enough money!" << std::endl << std::endl;
        break;
    }
    //} while(option != 4);
}



//We need to add a 'second user' and a 'transaction' option. || --> DONE!
void showMenu();
void operation(int, int&, int&);

int main() {

    int option, balance1 = 500, balance2 = 600, user;

    do {
        std::cout << "Wich user are you? " << "\n1. User1" 
                    << "\n2. User2" << "\nPlease choose one: "; std::cin >> user;
        if (user == 1) {
            do {
                showMenu();
                std::cout << "\nPlease choose an option: "; std::cin >> option;
                operation(option, balance1, balance2);
            } while (option !=5);
        } else if (user == 2) {
            do {
                showMenu();
                std::cout << "\nPlease choose an option: "; std::cin >> option;
                operation(option, balance2, balance1);
            } while (option !=5);
        }
    } while(user != 3);     
    

    std::cin.get();
    return 0;
}

void showMenu() {
    std::cout << "*****************MENU****************" << std::endl;
    std::cout << "1. BALANCE" << std::endl;
    std::cout << "2. DEPOSIT" << std::endl;
    std::cout << "3. WITHDRAW" << std::endl;
    std::cout << "4. TRANSACTION" << std::endl;
    std::cout << "5. EXIT" << std::endl;
    //std::cout << "*************************************" << std::endl;
}

void operation(int option, int &balance1, int &balance2) {
        
    switch (option)
    {
    case 1:
        std::cout << "Your balance is $" << balance1 << std::endl << std::endl;
        break;
    case 2:
        int deposit;
        std::cout << "Please enter deposit amount: "; std::cin >> deposit;
        balance1 += deposit;
        std::cout << '\n' << std::endl;
        break;
    case 3:
        int withdraw;
        std::cout << "Please enter withdraw amount: "; std::cin >> withdraw;
        if (withdraw <= balance1){
            balance1 -= withdraw;
            std::cout << '\n' << std::endl;
        }else
            std::cout << "Sorry, NOT enough money to withdraw!" << std::endl << std::endl;
        break;
    case 4:
        int transaction;
        std::cout << "Please enter the transaction amount: "; std::cin >> transaction;
        if (transaction <= balance1) {
            balance1 -= transaction;
            std::cout << "Successful transaction!" << std::endl;
            balance2 += transaction;
        } else
            std::cout << "Sorry, NOT enough money to transfer!" << std::endl << std::endl;
        break;
        
    }
    //} while(option != 4);
}


// Recursive function with factorial.
int factorial(int);

int main() {
    int number;
    std::cout << "Please enter a number: "; std::cin >> number;
    std::function<int(int)> f = factorial;
    std::cout << "The factorial of " << number << "! is: " << f(number) << std::endl;

    std::cin.get();
    return 0;
}

int factorial(int n) { // 5 4 3 2 1
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);  // 5 * (4 * (3 * (2 * (1))))
    
}


// Recursive function with finobacci series.
// 0 1 1 2 3 5 8 ...
int finobacci(int);

int main() {
    int number;
    std::cout << "Please enter a number: "; std::cin >> number;
    std::function<int(int)> f = finobacci;

    for (int i = 0; i < number; ++i)
    {
        std::cout << f(i) << " ";
    }
    

    std::cin.get();
    return 0;
}

int finobacci(int n) {  // 0 1 2
    if (n == 0 || n == 1) {
        return n;
    }
    return finobacci(n - 1) + finobacci(n - 2); 
}
*/

//Generic functions and templates.
// Templates
template<typename T>  //This part has to be at the prototype and development.
void Swap(T&, T&);

int main () {
    int a = 5, b = 7;
    
    std::cout << "Value of a and b before function: " << a << ", " << b << std::endl;
    Swap<int>(a, b);
    std::cout << "Value of a and b after function: " << a << ", " << b << std::endl;

    std::cin.get();
    return 0;
}

template<typename T>
void Swap(T& a, T& b) {
    T aux = a;
    a = b;
    b = aux;
}