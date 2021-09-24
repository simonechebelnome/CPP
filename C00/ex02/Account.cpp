/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenna <smenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:08:38 by smenna            #+#    #+#             */
/*   Updated: 2021/09/24 14:08:39 by smenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void) {

}

Account::Account( int initial_deposit ) {
	t::_nbAccounts++;
	t::_totalAmount += initial_deposit;
	this->_accountIndex = t::_nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "create" << std::endl;
}

Account::~Account( void ) {
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "closed" << std::endl;
}

void	Account::displayAccountsInfos( void ) {
	t::_displayTimestamp();
	std::cout << "accounts:" << t::getNbAccounts() << ";"
		<< "total:" << t::getTotalAmount() << ";"
		<< "deposit:" << t::getNbDeposits() << ";"
		<< "withdrawals:" << t::getNbWithdrawals() << std::endl;
}

int	Account::getNbAccounts( void ) {
	return t::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return t::_totalAmount;
}

int	Account::getNbDeposits( void ) {
	return t::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return t::_totalNbWithdrawals;
}

void	Account::makeDeposit( int deposit ) {
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";"
		<< "deposit:" << deposit << ";"
		<< "amount:" << this->_amount + deposit << ";"
		<< "nb_deposits:" << this->_nbDeposits + 1 << std::endl;
	this->_amount += deposit;
	this->_nbDeposits++;
	t::_totalAmount += deposit;
	t::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";";
	if (withdrawal <= this->_amount)
		std::cout << "withdrawal:" << withdrawal << ";";
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "amount:" << this->_amount - withdrawal << ";"
		<< "nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	t::_totalAmount -= withdrawal;
	t::_totalNbWithdrawals++;
	return (true);
}

void	Account::displayStatus( void ) const {
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "deposits:" << this->_nbDeposits << ";"
		<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::time_t rawtime;
    std::tm *timeinfo;
    char buffer [80];

    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);

    std::strftime(buffer,80,"%Y%m%d_%H%M%S",timeinfo);
    std::cout << "[" << buffer << "] ";
}