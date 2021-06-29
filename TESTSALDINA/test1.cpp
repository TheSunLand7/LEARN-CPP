#include <iostream>
#include <string>

/*
WRITE OUT ALL THE NUMBERS BETWEEN 100-500 THAT ARE DIVISIBLE BY 3 AND 5.
USE THE WHILE LOOP.

int main(void){
    LOG WITH PIN
    int userPin = 1234, pinEntered, count = 0;
    do
    {
        std::cout << "Please enter your PIN: "; std::cin >> pinEntered;
        if (userPin != pinEntered)
        {
            count++;
        }
        
    } while ((userPin != pinEntered) && (count < 3));
    //This part I do not understand very well.
    if (count < 3)
    {
        std::cout << "Loading..." << std::endl;
    } else {
        std::cout << "Blocked..." << std::endl;
    }
    


    REVERSE THE NUMBER GIVEN.
    
    int number;
    std::cout << "Please enter a number: "; std::cin >> number;
    if (number == 0)
    {
        std::cout << "You entered a zero." << std::endl;
    } else {
        int reversedNumber = 0;
        if (number < 0)
        {
            number *= -1;
        }
        do
        {
            reversedNumber *= 10;  //Para que el numero termine en 0 y asi sumar sin alterar.
            reversedNumber += number % 10;
            number /= 10;
        } while (number != 0);
        std::cout << "The reversed number is " << reversedNumber << std::endl;
        
    }
   
    
    int number = 100;
    do
    {
        ((number % 3 == 0) && (number % 5 == 0)) ? cout << number << endl : cout << "Not in the list!" << endl;
        number++;
        
    } while (number <= 500);
    
    
    COUNT THE NUMBER OF DIGITS OF THE NUMBER GIVEN.
    int number;
    std::cout << "Please enter a number: "; std::cin >> number;

    if (number == 0)
    {
        std::cout << "You entered a 0." << std::endl;
    } else {
       
        int counter = 0;
        if (number < 0) {
            number *= -1;
        }
        do
        {
            number /= 10;
            counter++;
        } while (number > 0);
        std::cout << "The number of digits is " << counter << std::endl;
                

    }
    
    system("pause");
    return 0;
}
*/
