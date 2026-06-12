#include "Identify.hpp"

int main()
{
    std::cout << "===== RANDOM TESTS =====" << std::endl;

    for (int i = 0; i < 10; i++)
    {
        Base* p = generate();

        std::cout << "\nTest " << i + 1 << ":" << std::endl;

        std::cout << "identify(pointer): ";
        identify(p);

        std::cout << "identify(reference): ";
        identify(*p);

        delete p;
    }

    std::cout << "\n===== MANUAL TESTS =====" << std::endl;

    Base* a = new A();
    Base* b = new B();
    Base* c = new C();

    std::cout << "\nTesting A:" << std::endl;
    identify(a);
    identify(*a);

    std::cout << "\nTesting B:" << std::endl;
    identify(b);
    identify(*b);

    std::cout << "\nTesting C:" << std::endl;
    identify(c);
    identify(*c);

    delete a;
    delete b;
    delete c;

    return 0;
}
