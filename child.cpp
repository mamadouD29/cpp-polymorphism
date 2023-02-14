#include "child.h"

Child::Child() : Parent(), name{"Good enough"}{}

Child::Child (int number, std::string name) 
        : Parent(number), name{name} {}


// redefine the function
void Child::print() const {

        Parent::print();
        std::cout<<"Name : " << name << std::endl;
}