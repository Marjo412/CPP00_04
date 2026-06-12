#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

//Represents an administrative employee with a name and a rank
class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator=(const Bureaucrat& copy);
        ~Bureaucrat();

        // Getter functions
        std::string getName() const;
        int getGrade() const;

        // Increment or decrement functions
        void incrementGrade();
        void decrementGrade();

        //add member function
        void signForm(Form& form) const;

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

//Overload of the insertion («) operator to print output in the good format
std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif