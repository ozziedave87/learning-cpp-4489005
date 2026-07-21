// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

int main(){
    cow *my_cow; //pointer for malloc
    my_cow = new cow("Gertie", 3, cow_purpose::hide);
    std::cout << my_cow->get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << std::endl;
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;

    delete my_cow; // this will free the memory by deleting the objects you no longer need - this is a destructor
    
    std::cout << std::endl << std::endl;
    return (0);
}
