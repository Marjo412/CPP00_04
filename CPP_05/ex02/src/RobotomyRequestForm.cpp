#include "../include/RobotomyRequestForm.hpp"
#include "../include/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: AForm("RobotomyRequestForm", 72, 45), _target("default")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
: AForm(copy), _target(copy._target)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	if (this != &copy)
		_target = copy._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(const Bureaucrat& bureaucrat) const
{
	if (!getIsSigned())
		throw GradeTooLowException();
	if (bureaucrat.getGrade() > getGradeToExecute())
		throw GradeTooLowException();

	std::cout << " **Drilling noise** " << std::endl;

	if (std::rand() % 2) // 50% success rate / 50% failure rate
		std::cout << _target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomy failed on " << _target << std::endl;
}

/*
**rand() : It is used to generate a pseudo-random number
*/