/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:24:44 by marjorie          #+#    #+#             */
/*   Updated: 2026/02/12 11:25:05 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream> //standard library
#include <string>
class Zombie
{
    private:
        std::string _name;

    public:
        Zombie(void); //default contructor
        Zombie(std::string name); // contructor with name
        ~Zombie(void);

        void announce(void);
        void setName(std::string name); //setter
};

Zombie* zombieHorde(int N, std::string name);

#endif
/*
** The default constructor is important to create N zombies so N default
    constructors are called.
*/