// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    // auto variable interface

    auto a = 8; // int
    auto b = 123456789123; // long int
    auto c = 3.14f; //floating point
    auto d = 3.14; //double
    auto e = true; //bool
    auto f = 'f'; //char
    auto g = "CPP rocks"; //string - PKC, pointer to char

    std::cout << "The type of a is " << typeid(a).name() <<std::endl;
    std::cout << "The type of b is " << typeid(b).name() <<std::endl;
    std::cout << "The type of c is " << typeid(c).name() <<std::endl;
    std::cout << "The type of d is " << typeid(d).name() <<std::endl;
    std::cout << "The type of e is " << typeid(e).name() <<std::endl;
    std::cout << "The type of f is " << typeid(f).name() <<std::endl;
    std::cout << "The type of g is " << typeid(g).name() <<std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
