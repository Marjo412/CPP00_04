#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main()
{
    std::vector<int> vec;
    std::list<int> lst;
    std::deque<int> deq;

    for (int i = 1; i <= 5; i++)
    {
        vec.push_back(i);
        lst.push_back(i * 10);
        deq.push_back(i * 100);
    }

    std::cout << "===== VECTOR =====" << std::endl;
    try
    {
        easyfind(vec, 3);
        easyfind(vec, 8);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===== LIST =====" << std::endl;
    try
    {
        easyfind(lst, 20);
        easyfind(lst, 42);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n===== DEQUE =====" << std::endl;
    try
    {
        easyfind(deq, 500);
        easyfind(deq, 600);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}