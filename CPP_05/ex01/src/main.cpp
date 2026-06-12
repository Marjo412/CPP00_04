# include "../include/Bureaucrat.hpp"
# include "../include/Form.hpp"

int main()
{
    std::cout << "\n----- Valid test -----" << std::endl;
    try
    {
        Bureaucrat a("Marjorie", 1);
        Form f("Request Form", 50, 30);

        std::cout << f << std::endl;
        a.signForm(f);
        std::cout << f << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n----- Invalid sign test -----" << std::endl;
    try
    {
        Bureaucrat b("Loren", 100);
        Form f2("Application Form", 50, 30);

        std::cout << f2 << std::endl;
        b.signForm(f2);
        std::cout << f2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    std::cout << "\n----- Too hight test -----" << std::endl;
    try
    {
        Bureaucrat c("Stephan", 100);
        Form f3("Registration Form", 0, 30);

        std::cout << f3 << std::endl;
        c.signForm(f3);
        std::cout << f3 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    std::cout << "\n----- Too low test -----" << std::endl;
    try
    {
        Bureaucrat d("Emma", 100);
        Form f4("Registration Form", 200, 30);

        std::cout << f4 << std::endl;
        d.signForm(f4);
        std::cout << f4 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    return 0;
}
/*
**e.what(): This shows that exceptions are correctly implemented.
*/