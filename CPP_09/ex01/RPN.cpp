#include "RPN.hpp"

RPN::RPN() : _stack() {}
RPN::RPN( const RPN &copy) : _stack(copy._stack) {}
RPN& RPN::operator=(const RPN &copy)
{
    if (this != &copy)
        _stack = copy._stack;
    return *this;
}
RPN::~RPN() {}

//The main function: it scans "8 9 * 9 -", recognizes digits and operators, then fills/uses _stack
void RPN::calculate(const std::string &expression)
{
    for (size_t i = 0; i < expression.size(); i++)
    {
        if (expression[i] == ' ')
            continue;
        if (i + 1 < expression.size() && expression[i + 1] != ' ')
			throw std::runtime_error("Error : invalid token");
        if (std::isdigit(expression[i]))
            _stack.push(expression[i] - '0'); //convert a char in an int
        else if (isOperator(expression[i]))
            operation(expression[i]);
        else
            throw std::runtime_error("Error: invalid character");
    }
    if(_stack.size() != 1)
        throw std::runtime_error("Error: invalid expression");

    std::cout << _stack.top() << std::endl;
}

//Is one of these char : +, -, *, /
bool RPN::isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

//Make an operation on the two numbers at the top of the _stack
void RPN::operation(char op)
{
    int right;
    int left;
    int result;

    if (_stack.size() < 2)
        throw std::runtime_error("Error: not enough operands");

    right = _stack.top(); //save the value in the variable
    _stack.pop(); //delete the top value
    left = _stack.top();
    _stack.pop();

    if (op == '+')
        result = left + right;
    else if (op == '-')
        result = left - right;
    else if (op == '*')
        result = left * right;
    else if (op == '/')
    {
        if (right == 0)
            throw std::runtime_error("Error: division by zero impossible");
        result = left / right;
    }
    _stack.push(result);
}