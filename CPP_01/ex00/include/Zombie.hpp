/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:02:15 by marjorie          #+#    #+#             */
/*   Updated: 2026/01/04 17:19:29 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream> //standard library
# include <string>

class Zombie
{
    private:
        std::string _name;
    
    public:
        Zombie(std::string zombieName);
        ~Zombie(void);

        void announce(void);
};

/*
** The names of the classes in C++ begin with an upper letter
    and the name of the attributs with an lower letter of a '_'
*/

#endif