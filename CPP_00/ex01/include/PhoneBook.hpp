/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:40:04 by marjorie          #+#    #+#             */
/*   Updated: 2025/12/28 14:04:14 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream> //standard library
# include <string>
# include <cctype> //isdigit
# include <iomanip> //setw
# include <cstdlib> //atoi
# include "../include/Contact.hpp"

class Phonebook
{
    private:
        Contact contacts[8];
        int contactCount;
        int nextIndex;

    public:
        Phonebook(void);
        ~Phonebook(void);

        void addContact(void);
        void searchContact(void) const;
};
/*
** searchContact is a const function because it displays information and read an
    index. It doesn't modify Contact or contactCount
*/

#endif