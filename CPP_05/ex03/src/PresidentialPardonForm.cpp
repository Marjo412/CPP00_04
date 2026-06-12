#include "../include/PresidentialPardonForm.hpp"
#include "../include/Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm("PresidentialPardonForm", 25, 5), _target("default")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("PresidentialPardonForm", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
: AForm(copy), _target(copy._target)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	if (this != &copy)
		_target = copy._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(const Bureaucrat& bureaucrat) const
{
	if (!getIsSigned())
		throw GradeTooLowException();
	if (bureaucrat.getGrade() > getGradeToExecute())
		throw GradeTooLowException();

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox. " << std::endl;
}
