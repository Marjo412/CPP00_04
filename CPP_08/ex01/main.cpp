#include "Span.hpp"

int main()
{
    std::cout << "===== TEST DU SUJET =====" << std::endl;

    Span sp(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "\n===== SPAN VIDE =====" << std::endl;
    try
    {
        Span sp(5);

        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===== UN SEUL ELEMENT =====" << std::endl;
    try
    {
        Span sp(5);

        sp.addNumber(42);

        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===== SPAN PLEIN =====" << std::endl;
    try
    {
        Span sp(2);

        sp.addNumber(10);
        sp.addNumber(20);
        sp.addNumber(30);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===== ADDMNUMBER =====" << std::endl;
    try
    {
        std::vector<int> values;

        values.push_back(15);
        values.push_back(8);
        values.push_back(42);
        values.push_back(4);
        values.push_back(30);

        Span sp(5);

        sp.addMnumber(values.begin(), values.end());

        std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span  : " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===== TEST 10000 NOMBRES =====" << std::endl;
    try
    {
        Span big(10000);

        for (int i = 0; i < 10000; i++)
            big.addNumber(i);

        std::cout << "Shortest span : " << big.shortestSpan() << std::endl;
        std::cout << "Longest span  : " << big.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
