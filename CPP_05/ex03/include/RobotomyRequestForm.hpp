#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
        ~RobotomyRequestForm();

        void execute(const Bureaucrat& bureaucrat) const;
};

#endif