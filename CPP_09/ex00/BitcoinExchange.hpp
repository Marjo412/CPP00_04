#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
#include <sstream>
#include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, double> _database;
    
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange& operator=(const BitcoinExchange &copy);
		~BitcoinExchange();

		double getExchangeRate(const std::string &date);
		bool isValidDate(const std::string &date);
		bool isValidValue(const std::string &value);
		void loadDatabase(const std::string &filename);
		void processInputFile(const std::string &filename);
};

#endif

/*
** Une map est un tableau associatif implémenté à l'aide d'un arbre binaire
	de recherche équilibré de type rouge-noir.

**          value
            ↓
      stringstream
            ↓
   Peut-on lire un double ?
       /          \
     non           oui
      ↓             ↓
   invalide     Reste-t-il
                quelque chose ?
                 /       \
               oui       non
                ↓         ↓
            invalide    valide
*/