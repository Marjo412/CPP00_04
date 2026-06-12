#include "Identify.hpp"

Base::~Base()
{}

//It randomly instantiates A, B, or C and returns the instance as a Base pointer.
Base * generate(void)
{
    static bool seeded = false;
    if (!seeded)
    {
        std::srand(std::time(0));
        seeded = true;
    } //This loop ensures that srand() is used only once and not at each iteration.

    int r = std::rand() % 3;

    if (r == 0)
        return new A();
    else if (r == 1)
        return new B();
    else
        return new C();
}

//It prints the actual type of the object pointed to by p: "A", "B", or "C".
void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

//It prints the actual type of the object referenced by p: "A", "B", or "C".
void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch (...) {} //catch everything, ignore the error and continue

    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch (...) {}

    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch (...) {}

    std::cout << "Unknown type" << std::endl; //error handle
}

/*
**rand() % 3 → donne 0, 1 ou 2
** dynamic_cast → is used to check at runtime whether an object actually belongs to a certain type in a class hierarchy.
*/