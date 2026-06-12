# include "../include/AForm.hpp"
# include "../include/Bureaucrat.hpp"

AForm::AForm()
: _formName("default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{}

AForm::AForm(std::string formName, int gradeToSign, int gradeToExecute)
: _formName(formName), _isSigned(false),
    _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (_gradeToSign < 1 || _gradeToExecute < 1)
        throw GradeTooHighException();
    if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& copy)
: _formName(copy._formName), _isSigned(copy._isSigned),
    _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{}

AForm& AForm::operator=(const AForm& copy)
{
    if (this != &copy)
     {
        _isSigned = copy._isSigned;
        //The other attributes are const so we can't modify them
     }
     return *this;
}

AForm::~AForm()
{}

std::string AForm::getFormName() const
{
    return _formName;
}

bool AForm::getIsSigned() const
{
    return _isSigned;
}

int AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return _gradeToExecute;
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _isSigned = true;
}
    
const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}

std::ostream& operator<<(std::ostream& out, const AForm& form)
{
    out << form.getFormName()
        << ", is signed: "
        << (form.getIsSigned() ? "true" : "false")
        << ", grade to sign: "
        << form.getGradeToSign()
        << ", grade to execute: "
        << form.getGradeToExecute()
        << ".";
    return out;
}

/*
** ? : conditional operator -> condition ? value_if_true : value_if_false;
*/