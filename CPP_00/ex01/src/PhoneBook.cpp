/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <mrosset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:46:01 by marjorie          #+#    #+#             */
/*   Updated: 2026/02/05 14:18:33 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PhoneBook.hpp"

/*
Constructor -> automatically called when an object is created, used to
    initialize the object's attributes and prepare the object before its use.
*/
Phonebook::Phonebook(void)
{
    contactCount = 0;
    nextIndex = 0; // is for replace every contacts when there is a new one
}

/*
Destructor -> automatically called when an object is destroyed, is used to free
    resources, close files or free before destruction.

**The destructor is empty because the Phonebook class does not manage any
    dynamically allocated resources. Contact objects and primitive types are
    automatically destroyed by C++."
*/
Phonebook::~Phonebook(void)
{}

//This function is to check the phone number is only digits
static bool isOnlyDigit(const std::string &str)
{
    if (str.empty())
        return false;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(static_cast<unsigned char>(str[i])))
            return false;
    }
    return true;
}

void Phonebook::addContact(void)
{
    Contact newContact; //create a new contact
    std::string input;

    while (true) // the loop will stop only when the field is filled
    {
        std::cout << "First name: "; // display the message
        std::getline(std::cin, input); // read the entire line
        if (!std::cin)
            return;
        if (input.empty()) // the fields cannot be empty
            std::cout << "You have to tell me your name!" << std::endl;
        else
        {
            newContact.setFirstName(input);
            break;
        }
    }
    
    while (true)
    {
        std::cout << "Last name: ";
        std::getline(std::cin, input);
        if (!std::cin)
            return;
        if (input.empty())
            std::cout << "You have to tell me your name!" << std::endl;
        else
        {
            newContact.setLastName(input);
            break;
        }
    }

    while (true)
    {
        std::cout << "Nick name: ";
        std::getline(std::cin, input);
        if (!std::cin)
            return;
        if (input.empty())
            std::cout << "Tell me your funniest nickname!" << std::endl;
        else
        {
            newContact.setNickName(input);
            break;
        }
    }
    
    while (true)
    {
        std::cout << "Phone number: ";
        std::getline(std::cin, input);
        if (!std::cin)
            return;
        if (input.empty())
            std::cout << "You have to tell me your phone number!" << std::endl;
        else if (!isOnlyDigit(input))
            std::cout << "Phone number must contain digits only!" << std::endl;
        else
        {
            newContact.setPhoneNumber(input);
            break;
        }
    }
    
    while (true)
    {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, input);
        if (!std::cin)
            return;
        if (input.empty())
            std::cout << "You can't escape... I want to know your secret!" << std::endl;
        else
        {
            newContact.setDarkestSecret(input);
            break;
        }
    }

    contacts[nextIndex] = newContact; //store the new contact
    nextIndex = (nextIndex + 1) % 8;
    if (contactCount < 8)
        contactCount++;
}
/*
**int index = contactCount % 8 -> is for calculate a position between 0 to 7 to
    store contacts in a loop and replace old ones when the array is full.
*/

/*
This function is used to truncate the string if it's longger than 10 chars
**lenght -> calculate the lenght of the string, like strlen in C.
**substr -> display a new string with only the number of chars chosen
*/
static std::string truncatString(const std::string &str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Phonebook::searchContact(void) const
{
    if (contactCount == 0)
    {
        std::cout << "You don't have any friends !" << std::endl;
        return; // if there is no contact the programme stops here
    }
    
    std::cout << std::endl;
    std::cout << "|" << std::setw(10) << "Index";
    std::cout << "|" << std::setw(10) << "First Name";
    std::cout << "|" << std::setw(10) << "Last Name";
    std::cout << "|" << std::setw(10) << "Nickname";
    std::cout << "|" << std::endl;

    // a check to be sure that contactCount will not be > than 8
    int maxCount;
    if (contactCount < 8)
        maxCount = contactCount;
    else
        maxCount = 8;
    
    for (int i = 0; i < maxCount; i++)
    {
        std::cout << "|" << std::setw(10) << i;
        std::cout << "|" << std::setw(10) << truncatString(contacts[i].getFirstName());
        std::cout << "|" << std::setw(10) << truncatString(contacts[i].getLastName());
        std::cout << "|" << std::setw(10) << truncatString(contacts[i].getNickName());
        std::cout << "|" << std::endl;
    }
    
    std::string input;
    int index;
    // this part is for prompt the user again for the index of the entry to display
    while (true)
    {
        std::cout << "Enter index: ";
        std::getline(std::cin, input);
        if (!std::cin)
            return;
        
        //index can only a number
        if (input.empty() || !isOnlyDigit(input))
        {
            std::cout << "Invalid index" << std::endl;
            continue;
        }
        index = std::atoi(input.c_str());

        //check if the index is valid
        if (index < 0 || index >= maxCount)
            std::cout << "Invalid index" << std::endl;
        else
            break;
    }

    // displays the complete contact's informations
    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}

/*
** for (int i = 0; i < contactCount; i++)
{
    ...
}
 == 
 int i = 0;
 while (i < contactCount)
 {
    ...
    i++;
 }
*/