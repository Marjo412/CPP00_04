#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

#include <iostream>
#include <string>
#include <cstdlib> //rand()
#include <ctime>

class Base
{
    public:
        virtual ~Base(); //mandatory for use dynamic_cast
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif