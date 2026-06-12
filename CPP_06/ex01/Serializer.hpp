#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>
#include <string>

struct Data
{
    int value;
    std::string name;
};

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer& copy);
        Serializer& operator=(const Serializer& copy);
        ~Serializer();

    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif

/*
** uintptr_t : It is an integer capable of storing a memory address
** reinterpret_cast : is a cast operator in C++ that allows reinterpreting
    the binary sequence of one data type into another, even if the types are not related
*/