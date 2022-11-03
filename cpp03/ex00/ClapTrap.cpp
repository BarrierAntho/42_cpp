/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:11:49 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/03 12:52:22 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) // Private constructor to respect Canonix form
{
}

ClapTrap::ClapTrap( std::string newName ): _name(newName), _hp( CP_HP ), _mp (CP_MP ), _dps ( CP_DPS )
{
	std::cout << this->show() << "appears" << std::endl;
}

ClapTrap::~ClapTrap ( void )
{
	std::cout << this->show() << "has been destroyed" << std::endl;
}

std::string	ClapTrap::getName( void )
{
	return (this->_name);
}

int	ClapTrap::getHp( void )
{
	return (this->_hp);
}

void	ClapTrap::setHp( int newHp )
{
	this->_hp = newHp;
}

int	ClapTrap::getMp( void )
{
	return (this->_mp);
}

void	ClapTrap::setMp( int newMp )
{
	this->_mp = newMp;
}

int	ClapTrap::getDps( void )
{
	return (this->_dps);
}

void	ClapTrap::setDps( int newDps )
{
	this->_dps = newDps;
}

std::ostream	ClapTrap::show( std::ostream &out )
{
	return (out << "ClapTrap [" << this->getName() << "]: "
		<< " hp(" << this->getHp() << ") "
		<< " mp(" << this->getMp() << ") "
		<< " dps(" << this->getDps() << ") ");
}
