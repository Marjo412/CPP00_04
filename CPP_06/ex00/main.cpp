#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        ScalarConverter::convert(av[1]);
    }
    else
    {
        std::cout << "Usage: ./Converter <value>" << std::endl;

    //     // tests rapides
    //     std::cout << "\n--- Tests ---\n" << std::endl;

    //     ScalarConverter::convert("a");
    //     std::cout << std::endl;

    //     ScalarConverter::convert("42");
    //     std::cout << std::endl;

    //     ScalarConverter::convert("4.2f");
    //     std::cout << std::endl;

    //     ScalarConverter::convert("4.2");
    //     std::cout << std::endl;

    //     ScalarConverter::convert("nan");
    //     std::cout << std::endl;

    //     ScalarConverter::convert("+inf");
    //     std::cout << std::endl;

    //     ScalarConverter::convert("hello");
    //     std::cout << std::endl;
    }
    return (0);
}

/*
Tester le projet soit en input soit avec les tests rapides
*/