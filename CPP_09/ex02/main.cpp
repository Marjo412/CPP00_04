#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if(argc <= 1)
        return 1;

    try
    {
        PmergeMe merge;
        clock_t startVector;
        clock_t endVector;
        clock_t startDeque;
        clock_t endDeque;

        merge.parseInput(argv);

        std::cout << GREEN << "Before: ";
        merge.displayVector();

        startVector = std::clock();
        merge.sortVector();
        endVector = std::clock();
        double vectorTime = static_cast<double>(endVector - startVector) * 1000000.0 / CLOCKS_PER_SEC;

        std::cout << MAG << "After: ";
        merge.displayVector();

        startDeque = std::clock();
        merge.sortDeque();
        endDeque = std::clock();
        double dequeTime = static_cast<double>(endDeque - startDeque) * 1000000.0 / CLOCKS_PER_SEC;

        std::cout << BLUE << "Time to process a range of " << argc - 1
            << " elements with std::vector : " << vectorTime << " us" << std::endl;

        std::cout << RED << "Time to process a range of " << argc - 1
            << " elements with std::deque  : " << dequeTime << " us" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}

//./PmergeMe `shuf -i 1-1000 -n 3000 | tr "\n" " " `
//./PmergeMe $(shuf -i 1-100000 -n 3000)