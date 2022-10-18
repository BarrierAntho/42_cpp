/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:33:16 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/18 11:26:41 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <ctime>
# include <iostream>

// GLOBAL VARIABLE
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
		<< ";total:" << _totalAmount << ";deposits:" <<  _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals
		<< std::endl;
}

Account::Account( void)
{
	return ;
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount << ";created"
		<< std::endl;
	_totalAmount += this->_amount;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount << ";closed"
		<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount;

	p_amount = this->_amount;
	this->_nbDeposits++;
	this->_amount = this->_amount + deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << p_amount << ";deposit:" << deposit
		<< ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits
		<< std::endl;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount;

	p_amount = this->_amount;
	if (p_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex
			<< ";p_amount:" << p_amount << ";withdrawal:refused"
			<< std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	this->_amount = this->_amount - withdrawal;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << p_amount << ";withdrawal:" << withdrawal
		<< ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals
		<< std::endl;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}

// help: https://cplusplus.com/reference/ctime/strftime/
void	Account::_displayTimestamp( void )
{
	time_t	current_time;
	struct tm	*time_info;
	char	display_time[100];

	time(&current_time); // get actual time in ms. Example: 1666084448
	time_info = localtime(&current_time); // get structure time with current_time
	strftime(display_time, 100, "[%Y%m%d_%H%M%S] ", time_info);
	std::cout << display_time;
}
