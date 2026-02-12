/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 10:40:44 by marjorie          #+#    #+#             */
/*   Updated: 2026/01/29 10:57:34 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
    private:
        std::string _type;
    
    public:
        Weapon(std::string type); // constructor
        ~Weapon(void); // destructor

        const std::string& getType(void) const;
        void setType(std::string type);
};

#endif