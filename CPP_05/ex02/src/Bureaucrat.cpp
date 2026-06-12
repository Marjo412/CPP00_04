# include "../include/Bureaucrat.hpp"
# include "../include/AForm.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade)
: _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
: _name(copy._name), _grade(copy._grade)
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this != &copy)
    {
         _grade = copy._grade;
    }
	return *this;
}

Bureaucrat::~Bureaucrat()
{}

std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void Bureaucrat::incrementGrade()
{
    if (_grade <= 1)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (_grade >= 150)
        throw GradeTooLowException();
    _grade++;
}

void Bureaucrat::signForm(AForm& form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getFormName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << _name << " couldn't sign " << form.getFormName()
         << " because: " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
        form.execute(*this);
        std::cout << _name << " executed " << form.getFormName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " couldn't execute " << form.getFormName()
            << " because: " << e.what() << std::endl;
    }
    
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
    out << bureaucrat.getName()
        << ", bureaucrat grade: "
        << bureaucrat.getGrade()
        << ".";
    return out;
}
