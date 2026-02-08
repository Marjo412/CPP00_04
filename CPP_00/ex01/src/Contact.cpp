/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:45:53 by marjorie          #+#    #+#             */
/*   Updated: 2025/12/27 19:53:16 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::setFirstName(const std::string &str)
{
    this->FirstName = str;
}

void Contact::setLastName(const std::string &str)
{
    this->LastName = str;
}

void Contact::setNickName(const std::string &str)
{
    this->NickName = str;
}

void Contact::setPhoneNumber(const std::string &str)
{
    this->PhoneNumber = str;
}

void Contact::setDarkestSecret(const std::string &str)
{
    this->DarkestSecret = str;
}

std::string Contact::getFirstName() const
{
    return this->FirstName;
}

std::string Contact::getLastName() const
{
    return this->LastName;
}

std::string Contact::getNickName() const
{
    return this->NickName;
}

std::string Contact::getPhoneNumber() const
{
    return this->PhoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return this->DarkestSecret;
}
