/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <mrosset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:34:44 by marjorie          #+#    #+#             */
/*   Updated: 2026/02/12 11:34:50 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << std::endl;
    
    std::cout << "The memory of the str is: " << &str << std::endl;
    std::cout << "The memory adress in stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory adress in stringREF: " << &stringREF << std::endl;
    
    std::cout << std::endl;

    std::cout << "The value of the string variable is: " << str << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

    std::cout << std::endl;
    
    return 0;
}

/*
** This exercise helps to understand the difference between a variable, a pointer
    and a reference. It shows that all three can refer to the same memory address
    but with different syntaxes.
*/