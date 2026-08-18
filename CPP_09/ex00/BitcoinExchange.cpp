#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _database() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) : _database(copy._database) {}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	if (this != &copy)
		_database = copy._database;
	return *this;
}
BitcoinExchange::~BitcoinExchange() {}

//This funtion recive a date and must return the corresponding rate
double BitcoinExchange::getExchangeRate(const std::string &date)
{
	std::map<std::string, double>::iterator it;

	it = _database.find(date); //if find() doesn't find the right date I use lower_bound()
	if (it != _database.end())
		return (it->second);
	it = _database.lower_bound(date);
	if (it == _database.begin())
		return -1;
	--it;
	return (it->second);
}
/*
The subject says that if a date doesn't exist, we need to find the lower date.
	I'm using the `lower_bound()` function, which will give us the upper date,
	but I'll then decrement it with `--it` to get the earlier date.
*/

//This function must verify that the date format looks only like this: Year-Month-Day
// It also takes leap years into account.
bool BitcoinExchange::isValidDate(const std::string &date)
{
	if (date.length() != 10)
		return false;
	if (date[4] != '-' || date[7] != '-')
		return false;
	for (size_t i = 0; i < date.length(); i++)
	{
		if (i != 4 && i != 7 && !std::isdigit(date[i]))
			return false;
	}
	int year;
	int month;
	int day;
	//creation of an array to see how many days each month contains
	int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	std::stringstream ssYear(date.substr(0, 4));
	std::stringstream ssMonth(date.substr(5, 2));
	std::stringstream ssDay(date.substr(8, 2));

	ssYear >> year;
	ssMonth >> month;
	ssDay >> day;

	if (month < 1 || month > 12)
		return false;
	//condition for leap years
	if(month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		daysInMonth[1] = 29;
	if (day < 1 || day > daysInMonth[month - 1])
		return false;
	return true;
}

//This function check is the value of the date is correct
bool BitcoinExchange::isValidValue(const std::string &value)
{
	std::stringstream ss(value);
	double number;

	if (!(ss >> number))
		return false;
	if (!ss.eof())
		return false;
	return true;
}

//Read the informations in a file (database) and store it
void BitcoinExchange::loadDatabase(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	std::string line;
	std::string date;
	std::string rate;
	double exchangeRate;
	size_t pos;

	if (!file)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return;
	}
	
	if (!std::getline(file, line))
	{
		std::cerr << "Error: empty database file." << std::endl;
		return;
	}

	while(std::getline(file, line))
	{
		pos = line.find(',');
		if (pos != std::string::npos)
		{
			date = line.substr(0, pos);
			rate = line.substr(pos + 1);
			std::stringstream ss(rate);
			ss >> exchangeRate;
			_database[date] = exchangeRate;
		}
	}
	if (_database.empty())
	{
		std::cerr << "Error: empty database file." << std::endl;
		return;
	}
	file.close();
}

//Read the informations in a file and calculate
void BitcoinExchange::processInputFile(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	std::string line;
	std::string date;
	std::string value;
	size_t pos;
	double number;
	double exchangeRate;

	if(!file)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return;
	}

	if (_database.empty())
		return;

	if (!std::getline(file, line))
	{
    	std::cerr << "Error: empty input file." << std::endl;
    	return;
	}
	
	while(std::getline(file, line))
	{
		pos = line.find(" | ");
		if (pos == std::string::npos)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		date = line.substr(0, pos);
		value = line.substr(pos + 3);

		if (!isValidDate(date))
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		if (!isValidValue(value))
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		std::stringstream ss(value);
		ss >> number;

		if (number < 0)
		{			
			std::cerr << "Error: not a positive number." << std::endl;
			continue;
		}
		if (number > 1000)
		{			
			std::cerr << "Error: too large number." << std::endl;
			continue;
		}

		exchangeRate = getExchangeRate(date);
		if (exchangeRate == -1)
		{			
			std::cerr << "Error: no exchange rate available." << std::endl;
			continue;
		}

		std::cout << date << " => " << number << " = " << number * exchangeRate << std::endl;
	}
	file.close();
}