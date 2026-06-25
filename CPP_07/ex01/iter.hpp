#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T, typename F>
void iter(T *array, const size_t len, F f)
{
    for (size_t i = 0; i < len; i++)
        f(array[i]);
}

template <typename T>
void print(const T &array)
{
    std::cout << array << std::endl;
}

template <typename T>
void increment(T &n)
{
    n++;
}

#endif

/*
** There's no need to create two functions: one const and one non-const,
    because in template the function will receive the appropriate type.
*/