#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern& copy);
        Intern& operator=(const Intern& copy);
        ~Intern();

        AForm* makeForm(std::string formName, std::string target);
};

#endif