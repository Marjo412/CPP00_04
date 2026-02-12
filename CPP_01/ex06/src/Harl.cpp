/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 14:44:07 by marjorie          #+#    #+#             */
/*   Updated: 2026/02/01 16:57:26 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Harl.hpp"

// Debug complaint level: contains contextual information
void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
                "pickle-specialketchup burger. I really do!" << std::endl;
}

// Info complaint level: contains extensive information
void Harl::info(void)
{
    std::cout << std::endl;
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. " 
        "You didn’t put enough bacon in my burger! If you did, I wouldn’t " 
        "be asking for more!" << std::endl;
}

// Warning complaint level: indicates a potential issue in the system
void Harl::warning(void)
{
    std::cout << std::endl;
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." 
            "I’ve been coming for years, whereas you started working here "
            "just last month." << std::endl;
}

// Error complaint level: indicates that an unrecoverable error has occurred.
void Harl::error(void)
{
    std::cout << std::endl;
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now."
        << std::endl;
}

void Harl::complain(std::string level)
{
    //array of complaint levels
    std::string levels[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    //array of pointers to member functions
    void (Harl::*functions[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    //find the index corresponding to the level
    int index = -1;
    int i = 0;
    while (i < 4)
    {
        if (levels[i] == level)
        {
            index = i;
            break;
        }
        i++;
    }
    //filter messages using switch and fall-through
    switch (index)
    {
        case 0:
            (this->*functions[0])();
            /* fall through */
        case 1:
            (this->*functions[1])();
            /* fall through */
        case 2:
            (this->*functions[2])();
            /* fall through */
        case 3:
            (this->*functions[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]"
                    << std::endl;
    }
}
