#include "iter.hpp"

int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5};
    size_t len = 5;

    std::cout << "=== INT ARRAY ===" << std::endl;
    iter(numbers, len, print<int>);

    iter(numbers, len, increment<int>);

    std::cout << "=== AFTER INCREMENT ===" << std::endl;
    iter(numbers, len, print<int>);

    std::string words[] = {"hello", "world", "cpp"};

    std::cout << "=== STRING ARRAY ===" << std::endl;
    iter(words, 3, print<std::string>);

    const int constNumbers[] = {10, 20, 30};

    std::cout << "=== CONST ARRAY ===" << std::endl;
    iter(constNumbers, 3, print<const int>);

    return 0;
}

/*
** WE have to determine the type of print and increment functions, because they are template functions.
** The compiler cannot deduce the type of the function template from the function pointer.
*/