/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:33:16 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/17 18:17:59 by abarrier         ###   ########.fr       */
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
	std::cout << "[timestamp] " << "accounts:" << Account::getNbAccounts()
		<< ";total:" << Account::getTotalAmount() << ";deposits:"
		<< Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals()
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
	std::cout << "[timestamp] " << "index:" << this->_accountIndex
		<< ";amount:" << checkAmount() << ";created"
		<< std::endl;
	_totalAmount += checkAmount();
}

Account::~Account( void )
{
	std::cout << "[timestamp] " << "index:" << this->_accountIndex
		<< ";amount:" << checkAmount() << ";closed"
		<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount;

	p_amount = checkAmount();
	this->_nbDeposits++;
	this->_amount = checkAmount() + deposit;
	std::cout << "[timestamp] " << "index:" << this->_accountIndex
		<< ";p_amount:" << p_amount << ";deposit:" << deposit
		<< ";amount:" << checkAmount() << ";nb_deposits:" << this->_nbDeposits
		<< std::endl;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount;

	p_amount = checkAmount();
	if (p_amount < withdrawal)
	{
		std::cout << "[timestamp] " << "index:" << this->_accountIndex
			<< ";p_amount:" << p_amount << ";withdrawal:refused"
			<< std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	this->_amount = checkAmount() - withdrawal;
	std::cout << "[timestamp] " << "index:" << this->_accountIndex
		<< ";p_amount:" << p_amount << ";withdrawal:" << withdrawal
		<< ";amount:" << checkAmount() << ";nb_withdrawals:" << this->_nbWithdrawals
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
	std::cout << "[timestamp] " << "index:" << this->_accountIndex
		<< ";amount:" << checkAmount() << ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}
