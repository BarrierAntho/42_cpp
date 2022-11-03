/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:11:49 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/03 15:41:13 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// CONSTRUCTOR / DESTRUCTOR
ClapTrap::ClapTrap( void ) // Private constructor to respect Canonix form
{
}

ClapTrap::ClapTrap( std::string newName ): _name(newName), _hp( CP_HP ), _mp (CP_MP ), _dps ( CP_DPS )
{
	std::cout << *this << "appears" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << *this << "has been destroyed" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &clap )
{
	std::cout << "Copy constructor" << std::endl;
	if (this == (&clap))
		return ;
	*this = clap;
}

// OVERLOAD OPERATOR
ClapTrap	&ClapTrap::operator = ( const ClapTrap &clap )
{
	std::cout << "Overload operator \"=\"" << std:endl;
	if (this == (&clap))
		return (*this);
	this->setName((&clap)->getName());
	this->setHp((&clap)->getHp());
	this->setMp((&clap)->getMp());
	this->setDps((&clap)->getDps());
	return (*this);
}

// GETTER / SETTER
std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}

void	ClapTrap::setName( const std::string newName )
{
	this->_name = newName;
}

int	ClapTrap::getHp( void ) const
{
	return (this->_hp);
}

void	ClapTrap::setHp( const int newHp )
{
	this->_hp = newHp;
}

int	ClapTrap::getMp( void ) const
{
	return (this->_mp);
}

void	ClapTrap::setMp( const int newMp )
{
	this->_mp = newMp;
}

int	ClapTrap::getDps( void ) const
{
	return (this->_dps);
}

void	ClapTrap::setDps( const int newDps )
{
	this->_dps = newDps;
}

// MISCELLANEOUS
void	ClapTrap::show( void )
{
	std::cout << "ClapTrap [" << this->getName() << "]: "
		<< " hp(" <<this->getHp() << ") "
		<< " mp(" <<this->getMp() << ") "
		<< " dps(" << this->getDps() << ") ";
}

// SUBJECT FUNCTIONS

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, const ClapTrap &clap )
{
	return (out << 	"ClapTrap [" << (&clap)->getName() << "]: "
		<< " hp(" << (&clap)->getHp() << ") "
		<< " mp(" << (&clap)->getMp() << ") "
		<< " dps(" << (&clap)->getDps() << ") ");
}
