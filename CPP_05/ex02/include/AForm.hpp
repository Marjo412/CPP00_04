#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class AForm
{
    private:
        const std::string _formName;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;

    
    public:
        AForm();
        AForm(std::string formName, int gradeToSign, int gradeToExecute); //allows to create a valid form with constraints
        AForm(const AForm& copy);
        AForm& operator=(const AForm& copy);
        virtual ~AForm();

        //getters for all attributes
        std::string getFormName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        //member function
        void beSigned(const Bureaucrat& bureaucrat);
        virtual void execute(const Bureaucrat& bureaucrat) const = 0;// abstract class
        //enables polymorphism: ensures the derived class implementation is called
    
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

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif

/*
We use abstract class in this case because all forms share a structure
but perform different actions.
AForm defines the framework; child classes define the behavior.
*/