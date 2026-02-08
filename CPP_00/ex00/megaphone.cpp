/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:41:20 by marjorie          #+#    #+#             */
/*   Updated: 2025/12/28 13:13:17 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream> //standard library
# include <cctype> //toupper

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 1;
        while (i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                std::cout << (char)std::toupper(argv[i][j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}

/*
** <iostream> -> standard input/output streams library
** <cctype> -> library for toupper
** std::cout -> write in the standard output
** << -> operator, use between each object to do actions
** std::endl -> display a new line
*/