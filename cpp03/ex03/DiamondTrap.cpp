/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:49:51 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/14 22:07:27 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// CONSTRUCTOR / DESTRUCTOR
DiamondTrap::DiamondTrap( void ): ClapTrap(), ScavTrap(), FragTrap(), _name(CD_DEFAULT_NAME)
{
	ClapTrap::setName(CD_DEFAULT_NAME + (const std::string)"_clap_name");
	this->setHp(CF_HP);
	this->setMp(CV_MP);
	this->setDps(CF_DPS);
	std::cout << *this << "appears" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string newName ): ClapTrap ( newName + "_clap_name" ), ScavTrap( newName ), FragTrap( newName ), _name(newName)
{
	this->setHp(CF_HP);
	this->setMp(CV_MP);
	this->setDps(CF_DPS);
	std::cout << *this << "appears" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << *this << "has been destroyed" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &diamond ): ClapTrap ( diamond ), ScavTrap ( diamond ), FragTrap( diamond )
{
	std::cout << "DiamondTrap copy constructor" << std::endl;
	if (this == (&diamond))
		return ;
	*this = diamond;
}

// OVERLOAD OPERATOR
DiamondTrap	&DiamondTrap::operator = ( const DiamondTrap &diamond )
{
	ClapTrap	*cpThis;
	const ClapTrap	*cpClone;

	std::cout << "DiamondTrap overload operator \"=\"" << std::endl;
	if (this == (&diamond))
		return (*this);
	cpThis = this;
	cpClone = &diamond;
	*cpThis = *cpClone;
	this->setName((&diamond)->getName());
	std::cout << *this << "has been created as a clone" << std::endl;
	return (*this);
}

// GETTER / SETTER
std::string	DiamondTrap::getName( void ) const
{
	return (this->_name);
}

void	DiamondTrap::setName( const std::string &newName )
{
	this->_name = newName;
}

int	DiamondTrap::getHp( void ) const
{
	return (this->_hitPoints);
}

void	DiamondTrap::setHp( const int newHitPoints )
{
	this->_hitPoints = newHitPoints;
}

int	DiamondTrap::getMp( void ) const
{
	return (this->_energyPoints);
}

void	DiamondTrap::setMp( const int newEnergyPoints )
{
	this->_energyPoints = newEnergyPoints;
}

int	DiamondTrap::getDps( void ) const
{
	return (this->_attackPoints);
}

void	DiamondTrap::setDps( const int newAttackPoints )
{
	this->_attackPoints = newAttackPoints;
}

// SUBJECT FUNCTIONS
void	DiamondTrap::attack( const std::string &target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "Who am I: " << std::endl;
	std::cout << *this << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::getName() << std::endl;
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, const DiamondTrap &diamond )
{
	return (out << 	"DiamondTrap \""<< (&diamond)->getName() << "\" "
		<< "[hp=" << (&diamond)->getHp() << ", "
		<< " mp=" << (&diamond)->getMp() << ", "
		<< " dps=" << (&diamond)->getDps() << "] ");
}
