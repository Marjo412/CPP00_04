# include "../include/Bureaucrat.hpp"

int main()
{
    std::cout << "\n----- Valid test -----" << std::endl;
    try
    {
        Bureaucrat a("Marjorie", 42);
        std::cout << a << std::endl;

        a.incrementGrade();
        std::cout << "After increment: " << a << std::endl;

        a.decrementGrade();
        std::cout << "After decrement: " << a << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n----- Too low test -----" << std::endl;
    try
    {
        Bureaucrat b("Loren", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    std::cout << "\n----- Too hight test -----" << std::endl;
    try
    {
        Bureaucrat c("Stephan", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    std::cout << "\n----- Increment error test -----" << std::endl;
    try
    {
        Bureaucrat d("David", 1);
        std::cout << d << std::endl;
        d.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n----- Decrement error test -----" << std::endl;
    try
    {
        Bureaucrat e("Evee", 150);
        std::cout << e << std::endl;
        e.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    return 0;
}
/*
**e.what(): This shows that exceptions are correctly implemented.
*/