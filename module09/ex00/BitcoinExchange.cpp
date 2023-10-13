#include "bitcoinExchange.hpp"

void	prtData(data_base_t data)
{
	std::cout << std::setprecision(2) << std::fixed;
	for (data_base_t::iterator it = data.begin(); it != data.end(); it++)
		std::cout << it->first << " => " << it->second << std::endl;
}

bool	getDataBase(data_base_t& dataBase)
{
	std::ifstream	csv;

	csv.open("data.csv");
	if (!csv.is_open()) {
		std::cerr << RED << "Error: there aren't data base csv." << RESET << std::endl;
		return false;
	}
	char	tmpDate[256];
	char	tmpPrice[256];

	csv.getline(tmpDate, 256);
	while (!csv.eof()) {
		csv.getline(tmpDate, 256, ',');
		if (!tmpDate || *tmpDate == '\n')
			break ;
		csv.getline(tmpPrice, 256);
		dataBase.insert(std::pair<std::string, float>(tmpDate, atof(tmpPrice)));
	}
	csv.close();
	return true;
}
