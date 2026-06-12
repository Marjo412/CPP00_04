/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:27:56 by marjorie          #+#    #+#             */
/*   Updated: 2026/03/15 11:28:49 by marjorie         ###   ########.fr       */
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