#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstddef>
#include <exception>
#include <cstdlib>

template<typename T>
class Array
{
    private:
        unsigned int _len;
        T* _array;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& copy);
        Array& operator=(const Array& copy);
        ~Array();

        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;

        unsigned int size(void) const;
};

#endif