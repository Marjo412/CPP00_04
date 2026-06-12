#include "../include/Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& copy)
{
    (void)copy; //Intern class is empty
}

Intern& Intern::operator=(const Intern& copy)
{
    (void)copy;
    return *this;
}

Intern::~Intern()
{}

// Creation fucntions
AForm* createRobotomy(const std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm* createShrubbery(const std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm* createPresidential(const std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
    std::string names[3] =
    {
        "robotomy request",
        "shrubbery creation",
        "presidential pardon"
    };

    AForm* (*functions[3])(const std::string) =
    {
        &createRobotomy,
        &createShrubbery,
        &createPresidential
    };

    for (int i = 0; i < 3; i++)
    {
        if (formName == names[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return functions[i](target);
        }
    }

    std::cout << "Error: unknown form" << std::endl;
    return NULL;
}
