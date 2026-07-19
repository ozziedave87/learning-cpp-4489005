// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t LENGTH1 = 25;

    char array_str1[LENGTH1] = "Hey guys! "; //char array 1 - 25 characters
    char array_str2[] = "What's up?"; //char aray 2


    std::string std_str1 = "Hi everybody! "; //string array 
    std::string std_str2 = "How's the going?"; //string array

    //concat arrays
    strncat(array_str1, array_str2, LENGTH1); //nb this adds str to the end of str1 up to 25 characters
    std::cout << array_str1 <<std::endl;
    std::cout << std_str1 + std_str2 <<std::endl; //nb this adds the strings together but does not modify either



    
    std::cout << std::endl << std::endl;
    return (0);
}
