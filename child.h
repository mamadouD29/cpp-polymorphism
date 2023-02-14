#pragma once

#ifndef  CHILD_H
#define   CHILD_H

#include "parent.h"
#include <string>


class Child : public Parent{

        std::string name;
    public:
        Child();
        Child(int number, std::string name);

        void print() const override ;


};

#endif