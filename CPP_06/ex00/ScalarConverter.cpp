#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
    (void)copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy)
{
    (void)copy;
    return *this;
}

ScalarConverter::~ScalarConverter()
{}

// 1. gérer pseudo literals
// 2. détecter char
// 3. détecter int
// 4. détecter float
// 5. détecter double
// 6. conversion + affichage
void ScalarConverter::convert(std::string literal)
{
    if (literal == "nan" || literal == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return ;
    }
    else if (literal == "+inf" || literal == "+inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return ;
    }
    else if (literal == "-inf" || literal == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return ;
    }

    //char
    else if (literal.length() == 1 && !isdigit(literal[0]))
    {
        char c = literal[0];
        int i = static_cast<int>(c); //conversion
        float f = static_cast<float>(c);
        double d = static_cast<double>(c);

        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << i << std::endl;

        std::cout << std::fixed << std::setprecision(1); //allows you to display a decimal
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
        return ;
    }

    //int
    if (literal.length() > 0)
    {
        size_t j = 0;
        //ignore '+' and '-'
        if (literal[0] == '+' || literal[0] == '-')
            j = 1;

        bool isInt = true;

        //avoid '+' and '-'
        if (j == literal.length())
            isInt = false;

        //check each character to see if there is anything other than a number
        for(size_t k = j; k < literal.length(); k++)
        {
            if (!isdigit(literal[k]))
                isInt = false;
        }

        if (isInt)
        {
            //to convert a big value
            double nbr = atof(literal.c_str());

            if (nbr >= std::numeric_limits<int>::min() && nbr <= std::numeric_limits<int>::max())
            {
                //conversion
                int i = static_cast<int>(nbr);
                char c = static_cast<char>(i);
                float f = static_cast<float>(i);
                double d = static_cast<double>(i);

                if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<int>::max())
                    std::cout << "char: impossible" << std::endl;
                else if (isprint(c))
                    std::cout << "char: '" << c << "'" << std::endl;
                else
                    std::cout << "char: Non displayable" << std::endl;

                std::cout << "int: " << i << std::endl;
                std::cout << std::fixed << std::setprecision(1);
                std::cout << "float: " << f << "f" << std::endl;
                std::cout << "double: " << d << std::endl;
            }
            else
            {
                std::cout << "char: impossible" << std::endl;
                std::cout << "int: impossible" << std::endl;
                std::cout << std::fixed << std::setprecision(1);
                std::cout << "float: " << nbr << "f" << std::endl;
                std::cout << "double: " << nbr << std::endl;
            }
            return ;
        }
    }
    
    //float
    if (literal.length() > 0)
    {
        size_t e = 0;
        //ignore '+' and '-'
        if (literal[0] == '+' || literal[0] == '-')
            e = 1;

        bool isFloat = true;
        int dotCount = 0; //check the '.' for the float

        //avoid '+' and '-'
        if (e == literal.length())
            isFloat = false;

        //must finish with 'f'
        if (literal[literal.length() - 1] != 'f')
            isFloat = false;

        //check each character to see if there is anything other than a number,
        //except for the final 'f' and passe the '.'
        for (size_t g = e; g < literal.length() - 1; g++)
        {
            if (literal[g] == '.')
                dotCount++;
            else if (!isdigit(literal[g]))
                isFloat = false;
        }
        if (dotCount != 1)//check that there is only one '.'
            isFloat = false;
        
        if (isFloat)
        {
            float f = atof(literal.c_str());
            int i = static_cast<int>(f);
            char c = static_cast<char>(f);
            double d = static_cast<double>(f);

            if (isprint(c))
                std::cout << "char: '" << c << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
            std::cout << "int: " << i << std::endl;

            std::cout << std::fixed << std::setprecision(1);
            std::cout << "float: " << f << "f" << std::endl;
            std::cout << "double: " << d << std::endl;
            return ;
        }
    }

    //double
    if (literal.length() > 0)
    {
        size_t b = 0;
        //ignore '+' and '-'
        if (literal[0] == '+' || literal[0] == '-')
            b = 1;
        
        bool isDouble = true;
        int dotCount = 0;

        if (b == literal.length())
            isDouble = false;

        if (literal[literal.length() - 1] == 'f')
            isDouble = false;
        
        for (size_t c = b; c < literal.length(); c++)
        {
            if (literal[c] == '.')
                dotCount++;
            else if (!isdigit(literal[c]))
                isDouble = false;
        }
        if (dotCount != 1)//check that there is only one '.'
            isDouble = false;
        
        if (isDouble)
        {
            double d = atof(literal.c_str());
            int i = static_cast<int>(d);
            char c = static_cast<char>(d);
            float f = static_cast<float>(d);

            if (isprint(c))
                std::cout << "char: '" << c << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
            std::cout << "int: " << i << std::endl;

            std::cout << std::fixed << std::setprecision(1);
            std::cout << "float: " << f << "f" << std::endl;
            std::cout << "double: " << d << std::endl;
            return ;
        }
    }

    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

/*
**literal = raw value to be interpreted

**nan -> not a number (double)
**nanf -> not a number float
**+/- inf -> infinity (double)
**+/- inff -> infinity float 

**std::numeric_limits: allows to have the properties and limits of a numeric type.
**std::fixed: is a stream manipulator that forces the display of floating-point
        numbers in fixed decimal notation.
**std::steprecision: acts on the total number of significant digits and with fixed
        defines the number of digits after the decimal point.

**static_cast: https://www.geeksforgeeks.org/cpp/static_cast-in-cpp/
**isprint: check if each char in printable or not
*/