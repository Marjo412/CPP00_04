#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

int main()
{
    Intern someRandomIntern;

    std::cout << "\n----- VALID FORMS TEST -----" << std::endl;

    AForm* form1 = someRandomIntern.makeForm("robotomy request", "Bender");
    AForm* form2 = someRandomIntern.makeForm("shrubbery creation", "Garden");
    AForm* form3 = someRandomIntern.makeForm("presidential pardon", "Marvin");

    std::cout << "\n----- INVALID FORM TEST -----" << std::endl;

    AForm* form4 = someRandomIntern.makeForm("unknown form", "Nobody");

    std::cout << "\n----- SIGN & EXECUTE TEST -----" << std::endl;

    try
    {
        Bureaucrat boss("Boss", 1); // grade max

        if (form1)
        {
            boss.signForm(*form1);
            boss.executeForm(*form1);
        }

        if (form2)
        {
            boss.signForm(*form2);
            boss.executeForm(*form2);
        }

        if (form3)
        {
            boss.signForm(*form3);
            boss.executeForm(*form3);
        }
    }
    catch (std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    delete form1;
    delete form2;
    delete form3;
    delete form4;

    return 0;
}