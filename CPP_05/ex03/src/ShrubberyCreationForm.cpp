#include "../include/ShrubberyCreationForm.hpp"
#include "../include/Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("ShrubberyCreationForm", 145, 137), _target("default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
: AForm(copy), _target(copy._target)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	if (this != &copy)
		_target = copy._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::execute(const Bureaucrat& bureaucrat) const
{
	if (!getIsSigned())
		throw GradeTooLowException();
	if (bureaucrat.getGrade() > getGradeToExecute())
		throw GradeTooLowException();

	std::ofstream outfile((_target + "_shrubbery").c_str());
	if (!outfile)
        return;

    outfile << "       _\n";
    outfile << "      / \\\n";
    outfile << "     /   \\\n";
    outfile << "    /     \\\n";
    outfile << "   /       \\\n";
    outfile << "      |\n";

	outfile.close();
}
