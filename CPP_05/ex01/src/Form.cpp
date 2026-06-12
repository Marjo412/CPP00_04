# include "../include/Form.hpp"
# include "../include/Bureaucrat.hpp"

Form::Form()
: _formName("default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{}

Form::Form(std::string formName, int gradeToSign, int gradeToExecute)
: _formName(formName), _isSigned(false),
    _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (_gradeToSign < 1 || _gradeToExecute < 1)
        throw GradeTooHighException();
    if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& copy)
: _formName(copy._formName), _isSigned(copy._isSigned),
    _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{}

Form& Form::operator=(const Form& copy)
{
    if (this != &copy)
     {
        _isSigned = copy._isSigned;
        //The other attributes are const so we can't modify them
     }
     return *this;
}

Form::~Form()
{}

std::string Form::getFormName() const
{
    return _formName;
}

bool Form::getIsSigned() const
{
    return _isSigned;
}

int Form::getGradeToSign() const
{
    return _gradeToSign;
}

int Form::getGradeToExecute() const
{
    return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _isSigned = true;
}
    
const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}

std::ostream& operator<<(std::ostream& out, const Form& form)
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