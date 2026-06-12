/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 19:30:31 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/18 19:30:33 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string _ideas[100];
    
    public:
        Brain();
        Brain(const Brain& copy);
        Brain& operator=(const Brain& copy);
        ~Brain();

        std::string getIdea (int index) const;
        void setIdea (int index, const std::string idea);
};

#endif