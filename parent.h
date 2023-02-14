#pragma once

#ifndef PARENT_H
#define PARENT_H

#include <iostream>

class Parent{
        int number;
    public:
        Parent();
        Parent(int number);

        // virtual keyword will make the function to support polymorphism
        virtual void print() const;
};

#endif