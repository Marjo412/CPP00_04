/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marjorie <marjorie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:36:33 by marjorie          #+#    #+#             */
/*   Updated: 2026/01/29 17:33:53 by marjorie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

//replace s1 with s2
std::string replaceLine(std::string line, std::string s1, std::string s2)
{
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = line.find(s1, pos)) != std::string::npos) //search the next occurence
    {
        result += line.substr(pos, found - pos); //copy what it is before s1
        result += s2; // add the replace string
        pos = found + s1.length(); //skip s1 to continue after
    }
    result += line.substr(pos); //add the leftover after the last occurence
    return result;
}

int main(int argc, char **argv)
{
    //check the number of args
    if (argc != 4)
    {
        std::cerr << "Error: wrong number of arguments" << std::endl;
        return 1;
    }
    
    //retrieve args
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    //check is s1 is empty
    if (s1.empty())
    {
        std::cerr << "Error: s1 can't be empty" << std::endl;
        return 1;
    }
    
    //open the filename and check if the opening is successful
    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cerr << "Error: can't open file" << std::endl;
        return 1;
    }

    //create output file
    std::string outFilename = filename + ".replace";
    std::ofstream outfile(outFilename.c_str());
    if (!outfile)
    {
        std::cerr << "Error: can't create output file" << std::endl;
        return 1;
    }

    //read input file line by line and write replaced content
    std::string line;
    while (std::getline(infile, line))
    {
        outfile << replaceLine(line, s1, s2);
        if (!infile.eof())
            outfile << std::endl;
    }
    
    return 0;
}

/*
** Sed = Steam Editor, a Unix tool for automatically modifying text.

** std::cerr is a standard output stream for error messages. Unlike a message
    displayed with `std::cout`, it isn't stored before being displayed, so if
    the program crashes, the error message will be displayed immediately after
    the error. There is much less risk of it being lost.

** ifstream : input file stream -> open a file and read it's contents.
    Returned type : const char *:
    std::string s = "test.txt";
    const char *c = s.c_str();

** infile : the name of the variable -> it represents the file read stream.

** ofstream : output file stream -> create a file and write inside
*/