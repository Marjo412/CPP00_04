#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception> //what()

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

/*
try -> executes the code
throw() -> reports the error and the program stops
catch -> catchs the error
what() -> returns the message and helps understand the error
*/