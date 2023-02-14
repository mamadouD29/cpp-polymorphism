#include "parent.h"


Parent::Parent() : number(80){}

Parent::Parent (int number) : number  { number } {}
 void Parent::print() const {
    std::cout << "number : " << number << std::endl;
}