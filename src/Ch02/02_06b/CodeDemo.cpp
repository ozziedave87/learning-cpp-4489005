// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string> 
#include <cstdint> // this is a c library for c++

//macros - be careful, will find and replace 

#define CAPACITY 5000 //often named with all caps - will now replace every instance of CAPACITY with 5000
#define DEBUG //used for ifdef directive

int main(){
    
    int32_t large = CAPACITY;
    uint8_t small = 37;

#ifdef DEBUG //this is a directive. not indented inline with the code
    std::cout << "[about to perform the addition]" << std::endl;
#endif

    large += small; // same as large = large + small but using the += operator.

    //display result
    std::cout << "The large integer is " << large << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
