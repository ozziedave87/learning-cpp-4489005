// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{ //NB struct was changed to class
public:
//constructor
    cow(std::string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
//Getter functions
    std::string get_name()const{ 
        return name;
    }
    int get_age() const{ 
        return age;
    }
    cow_purpose get_purpose() const{ 
        return purpose;
    }
//Setter fucntions
    void set_name(std::string new_name){
        name = new_name;
    }
    void set_age(int new_age){
        age = new_age;
    }
    void set_purpose(cow_purpose new_purpose){
        purpose = new_purpose;
    }
private: //makes public or private
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    /*cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;*/

    cow my_cow("Hildy", 7, cow_purpose::pet);

    //Getter outputs
    std::cout << "Getter outputs" << std::endl;
    std::cout << my_cow.get_name() << " is a type - " << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;

    //Setter outputs
    std::cout << std::endl << std::endl;
    //cow my_cow2;
    my_cow.set_name("Eddy");
    my_cow.set_age(12);
    my_cow.set_purpose(cow_purpose::dairy);
     std::cout << my_cow.get_name() << " is a type - " << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
