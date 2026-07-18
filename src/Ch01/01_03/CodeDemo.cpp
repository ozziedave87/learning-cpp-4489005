// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

/*#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cin >> str;
    std::cout << str;

    std::cout << std::endl << std::endl;
    return (0);
}*/

// My answer to ask for name and display name

#include <iostream>
#include <string>

int main(){
    
    //Variables
    std::string strVar;

    //Function
    std::cout << "What is your name?" << std::flush; //flush mkes sure it is sent to terminal before asking for next step
    std::cin >> strVar;
    std::cout << "Nice to meet you " << strVar << "!" <<std::endl; //NB cout only works for a single word, no space

    std::cout << std::endl << std::endl;

    return(0);
}


