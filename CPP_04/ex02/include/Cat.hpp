/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:53:35 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/20 20:43:02 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain* _brain;
        
    public:
        Cat();
        Cat(const Cat& copy);
        Cat& operator=(const Cat& copy);
        ~Cat();

        void makeSound() const;
        Brain* getBrain() const;
};

#endif