
#include <iostream>
#include "prog1.hpp"
int main()
{
    extern const int dollar;
    extern const int quarters;
    extern const int dimes;
    extern const int nickels;
    extern const int  pennies;

    int money; int change;
    std::cout << "Enter a positive Integer <=100 : ";
    std::cin >> money; //Enter the money here.


       
    change = money / dollar;
    std::cout << "Your change is :"<< change<<" dollars\n";
        int x = money % dollar; // gets the remainder.

        change = x / quarters;
        std::cout << "Your change is :" << change << " quarters\n";
        int y = money % quarters; // gets the remainder.

        change = y / dimes;
        std::cout << "Your change is :" << change << " dimes\n";
        int z = money % dimes; // gets the remainder.

        change = z/ nickels;
        std::cout << "Your change is :" << change << " nickels\n";
        int v = money % nickels; // gets the remainder.

        change = v / pennies;
        std::cout << "Your change is :" << change << " pennies\n";
        

    
    
return 0;
}


