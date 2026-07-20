// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    double nums[5] = {1,23,32,24,337};
    //double result; 

    double nums_sum = nums[0]+nums[1]+nums[2]+nums[3]+nums[4];

    std::cout << "nums_sum = " << nums_sum << std::endl;

    double nums_avg = nums_sum / 5;

    std::cout << "nums_avg = " << nums_avg << std::endl;

    // Write your code here
    
    //std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
