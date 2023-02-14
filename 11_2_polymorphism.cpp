#include <iostream>
#include "parent.h"
#include "child.h"

int main()
{
    Parent p1;
    //p1.print();

    Child c1;
    //c1.Parent::print();
    //c1.print();

    Parent* pp = nullptr;
    
    pp = new Parent();
    pp->print();
    delete pp;

    pp = new Child();
    pp->print();                // POLYMORPHISM: output the number and the name;
    delete pp;

    
    Parent p2;
    //p2.print();

    p2 = c1;            // object slicing
    p2.print();         // output: number but the name is not printed because of the object slicing

    Parent* pp = &p2;
    pp->print();

    pp = &c1;
    pp->print();
    


   return 0;

}