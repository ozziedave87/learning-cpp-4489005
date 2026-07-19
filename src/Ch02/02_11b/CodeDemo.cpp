// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    celsius = ((float)5/9.0) * (fahrenheit - 32);

    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsious : " << celsius << std::endl;
    std::cout << std::endl << std::endl;

    //extracting the components 
    float weight = 10.99;

    std::cout << "Float: " << weight << std::endl;
    std::cout << "Integer: " << (int)weight <<std::endl;
    std::cout << "Fraction part: " << (double)((weight - (int)weight) * 10000) <<std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
