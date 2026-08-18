#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>
#include <stack>

class RPN
{
	private:
		std::stack<int> _stack;

	public:
		RPN();
		RPN(const RPN &copy);
		RPN& operator=(const RPN &copy);
		~RPN();

		void calculate(const std::string &expression);
		bool isOperator(char c);
		void operation(char op);
};

#endif

//RPN -> Reverse Polish Notation