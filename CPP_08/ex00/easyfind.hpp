#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>

template <typename T>
void easyfind(T &cont, int c)
{
    if (std::find(cont.begin(), cont.end(), c) != cont.end())
        std::cout << c << " is found." << std::endl;
    else
        throw std::runtime_error("Not found.");
}

#endif

/*
**https://www.progmatique.fr/article-11-Cpp-classe-list-stl.html
*/