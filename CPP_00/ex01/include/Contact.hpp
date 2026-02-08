/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:39:50 by marjorie          #+#    #+#             */
/*   Updated: 2025/12/11 11:14:54 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
    
public:
Contact();
~Contact();
    void setFirstName(const std::string &str);
    void setLastName(const std::string &str);
    void setNickName(const std::string &str);
    void setPhoneNumber(const std::string &str);
    void setDarkestSecret(const std::string &str);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;
};

#endif

/*
set -> use to modify a data
get -> use to read a data
*/