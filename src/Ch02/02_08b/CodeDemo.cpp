// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

//macros

//#define AGE_LENGTH 4 //nb no ; at the end of directives (i.e. macro)

int main(){
    const size_t AGE_LENGTH = 4; // this is preferred to the macro. 
    
    int age[AGE_LENGTH];
    float temperature[] = {31.5, 32.7, 38.9}; //nb list of doubles as no f is used, compiler will assign f (implicit conversion/type casting)

    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "The length of the age array is " << AGE_LENGTH << " elements" << std::endl;

    std::cout << "The age in position 0 is " << age[0] << std::endl;
    std::cout << "The age in position 1 is " << age[1] << std::endl;
    std::cout << "The age in position 2 is " << age[2] << std::endl;
    std::cout << "The age in position 3 is " << age[3] << std::endl;

    std::cout << std::endl << std::endl;

    std::cout << " The temperature in position 0 is " << temperature[0] << std::endl;
    std::cout << " The temperature in position 1 is " << temperature[1] << std::endl;
    std::cout << " The temperature in position 1 is " << temperature[1] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
