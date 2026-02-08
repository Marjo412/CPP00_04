/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:45:57 by marjorie          #+#    #+#             */
/*   Updated: 2025/12/27 20:43:56 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

int main()
{
    Phonebook phonebook;
    std::string command;

    while (1)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): "; //display the prompt
        std::getline(std::cin, command); //read the command
        if (!std::cin)
            break;
        if (command == "EXIT")
            break;
        else if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContact();
        else
            std::cout << "Invalid command !" << std::endl;
    }
    return (0);
}
