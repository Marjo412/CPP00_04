#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form
{
    private:
        const std::string _formName;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;

    
    public:
        Form();
        Form(std::string formName, int gradeToSign, int gradeToExecute); //allows to create a valid form with constraints
        Form(const Form& copy);
        Form& operator=(const Form& copy);
        ~Form();

        //getters for all attributes
        std::string getFormName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        //member function
        void beSigned(const Bureaucrat& bureaucrat);
    
        // Exception classes
        class GradeTooHighException : public std::exception
        {
            public :
                const char* what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            public :
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif