/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:11:30 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:11:32 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

# define BLUE	"\e[0;34m"
# define RESET	"\e[0m"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void) {return (_nbAccounts);}
int	Account::getTotalAmount(void) {return (_totalAmount);}
int	Account::getNbDeposits(void) {return (_totalNbDeposits);}
int	Account::getNbWithdrawals(void) {return (_totalNbWithdrawals);}
int	Account::checkAmount(void) const {return (this->_amount);}

Account::Account(int initial_deposit) 
{
	this->_accountIndex += _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += this->_amount;
	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET << ";";
	std::cout << "amount:" << BLUE << this->_amount << RESET << ";";
	std::cout << "created" << std::endl;
	_nbAccounts++;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET << ";";
	std::cout << "amount:" << BLUE << this->_amount << RESET << ";";
	std::cout << "closed" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << BLUE << getNbAccounts() << RESET << ";";
	std::cout << "total:" << BLUE << getTotalAmount() << RESET << ";";
	std::cout << "deposits:" << BLUE << getNbDeposits() << RESET << ";";
	std::cout << "withdrawals:" << BLUE << getNbWithdrawals() << RESET;
	std::cout << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET << ";";
	std::cout << "amount:" << BLUE << this->_amount << RESET << ";";
	std::cout << "deposits:" << BLUE << this->_nbDeposits << RESET << ";";
	std::cout << "withdrawals:" << BLUE << this->_nbWithdrawals << RESET;
	std::cout << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET << ";";
	std::cout << "p_amount:" << BLUE << this->_amount << RESET << ";";
	if (deposit < 0)
	{
		std::cout << "deposit:" << "refused" << std::endl;
		return ;
	}
	std::cout << "deposit:" << BLUE << deposit << RESET << ";";
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "amount:" << BLUE << this->_amount << RESET << ";";
	std::cout << "nb_deposits:" << BLUE << this->_nbDeposits << RESET;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET << ";";
	std::cout << "p_amount:" << BLUE << this->_amount << RESET << ";";
	if (withdrawal < 0 || withdrawal > this->_amount)
	{
		std::cout << "withdrawal:" << "refused" << std::endl;
		return (false);
	}
	std::cout << "withdrawal:" << BLUE << withdrawal << RESET << ";";
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << "amount:" << BLUE << this->_amount << RESET << ";";
	std::cout << "nb_withdrawals:" << BLUE << this->_nbWithdrawals << RESET;
	std::cout << std::endl;
	return (true);
}

void	Account::_displayTimestamp(void)
{
	char		buffer[20];
	std::time_t	elapsed_sec = std::time(NULL);

	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", std::localtime(&elapsed_sec));
	std::cout << buffer;
}
