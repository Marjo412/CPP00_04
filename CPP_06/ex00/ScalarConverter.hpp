#ifndef SCALARCONVERT_HPP
# define SCALARCONVERT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <limits>
#include <climits>
#include <iomanip>

class ScalarConverter
{
    public:
        static void convert(std::string literal);

    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& copy);
        ScalarConverter& operator=(const ScalarConverter& copy);
        ~ScalarConverter();
};

#endif

/*
**This exercice take an input string and display the output conversion in :
    char, int, float and double
** The output must be all 4 types each time:
    char:
    int:
    float:
    double:
*/