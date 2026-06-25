#include "Array.tpp"
#include "Array.hpp"

#include "Array.hpp"

int main(void)
{
    std::cout << "===== DEFAULT CONSTRUCTOR =====" << std::endl;

    Array<int> empty;
    std::cout << "Size : " << empty.size() << std::endl;

    std::cout << "\n===== CONSTRUCTOR WITH SIZE =====" << std::endl;

    Array<int> numbers(5);

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << " ";
    std::cout << std::endl;

    std::cout << "\n===== COPY CONSTRUCTOR =====" << std::endl;

    Array<int> copy(numbers);

    copy[0] = 100;

    std::cout << "Original : ";
    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << " ";

    std::cout << "\nCopy     : ";
    for (unsigned int i = 0; i < copy.size(); i++)
        std::cout << copy[i] << " ";
    std::cout << std::endl;

    std::cout << "\n===== ASSIGNMENT OPERATOR =====" << std::endl;

    Array<int> assign;

    assign = numbers;
    assign[1] = 200;

    std::cout << "Original : ";
    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << " ";

    std::cout << "\nAssigned : ";
    for (unsigned int i = 0; i < assign.size(); i++)
        std::cout << assign[i] << " ";
    std::cout << std::endl;

    std::cout << "\n===== STRING ARRAY =====" << std::endl;

    Array<std::string> words(3);

    words[0] = "Hello";
    words[1] = "CPP";
    words[2] = "Templates";

    for (unsigned int i = 0; i < words.size(); i++)
        std::cout << words[i] << std::endl;

    std::cout << "\n===== EXCEPTION =====" << std::endl;

    try
    {
        std::cout << numbers[10] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught!" << std::endl;
    }

    return (0);
}