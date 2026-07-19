// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

/*#include <iostream>

int main(){
    std::cout << "Hi There!" << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
*/

// Alternative with variables

#include <iostream>

//global variables - allocated in data segment, only freed when the program ends.
int a, b = 5; 

int main() {
    bool my_flag = false; 
    a = 7;
    std::cout << "Hello World!" <<std::endl;

    //show variable values
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;

    // toggle flag for different output
    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a+b << std::endl;
    std::cout << "b - a = " << b-a << std::endl;

    unsigned int positive;
    positive = b-a;

    std::cout << "b - a (unsigned) = " <<positive << std::endl;
    

    std::cout << std::endl << std::endl;
    return(0);
}

