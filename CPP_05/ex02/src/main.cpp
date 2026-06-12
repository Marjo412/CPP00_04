#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include <ctime>

int main()
{
    std::srand(std::time(NULL)); //used for rand() doesn't always generate the same number

    std::cout << "----- SHRUBBERY TEST -----" << std::endl;
    try
    {
        Bureaucrat a("Alice", 100);
        ShrubberyCreationForm shrub("home");

        a.signForm(shrub);
        a.executeForm(shrub);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n----- ROBOTOMY TEST -----" << std::endl;
    try
    {
        Bureaucrat b("Bob", 40);
        RobotomyRequestForm robot("Bender");

        b.signForm(robot);
        b.executeForm(robot);
        b.executeForm(robot);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n----- PRESIDENTIAL PARDON TEST -----" << std::endl;
    try
    {
        Bureaucrat c("Charlie", 1);
        PresidentialPardonForm pardon("Arthur");

        c.signForm(pardon);
        c.executeForm(pardon);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n----- EXECUTION WITHOUT SIGNATURE -----" << std::endl;
    try
    {
        Bureaucrat d("Dave", 1);
        ShrubberyCreationForm shrub2("garden");

        d.executeForm(shrub2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n----- GRADE TOO LOW TEST -----" << std::endl;
    try
    {
        Bureaucrat e("Eve", 150);
        PresidentialPardonForm pardon2("Ford Prefect");

        e.signForm(pardon2);
        e.executeForm(pardon2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
/*
**e.what(): This shows that exceptions are correctly implemented.
*/