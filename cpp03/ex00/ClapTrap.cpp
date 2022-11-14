/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:49:06 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/14 12:41:42 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// CONSTRUCTOR / DESTRUCTOR
ClapTrap::ClapTrap( void ): _name(CP_DEFAULT_NAME), _hitPoints(CP_HP), _energyPoints(CP_MP), _attackPoints(CP_DPS)
{
	std::cout << *this << "appears" << std::endl;
}

ClapTrap::ClapTrap( const std::string newName ): _name(newName), _hitPoints(CP_HP), _energyPoints(CP_MP), _attackPoints(CP_DPS)
{
	std::cout << *this << "appears" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << *this << "has been destroyed" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &clap )
{
//	std::cout << "Copy constructor" << std::endl;
	if (this == (&clap))
		return ;
	*this = clap;
}

// OVERLOAD OPERATOR
ClapTrap	&ClapTrap::operator = ( const ClapTrap &clap )
{
//	std::cout << "Overload operator \"=\"" << std::endl;
	if (this == (&clap))
		return (*this);
	this->setName((&clap)->getName());
	this->setHp((&clap)->getHp());
	this->setMp((&clap)->getMp());
	this->setDps((&clap)->getDps());
	std::cout << *this << "has been created as a clone" << std::endl;
	return (*this);
}

// GETTER / SETTER
std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}

void	ClapTrap::setName( const std::string &newName )
{
	this->_name = newName;
}

int	ClapTrap::getHp( void ) const
{
	return (this->_hitPoints);
}

void	ClapTrap::setHp( const int newHitPoints )
{
	this->_hitPoints = newHitPoints;
}

int	ClapTrap::getMp( void ) const
{
	return (this->_energyPoints);
}

void	ClapTrap::setMp( const int newEnergyPoints )
{
	this->_energyPoints = newEnergyPoints;
}

int	ClapTrap::getDps( void ) const
{
	return (this->_attackPoints);
}

void	ClapTrap::setDps( const int newAttackPoints )
{
	this->_attackPoints = newAttackPoints;
}

// SUBJECT FUNCTIONS
void	ClapTrap::attack(const std::string& target)
{
	if (this->getHp() <= 0)
		std::cout << *this << " is dead... How is it possible to attack? Zombie ClapTrap ?!" << std::endl;
	else if (this->getMp() <= 0)
		std::cout << *this << " does not have energy point anymore and can not attack!" << std::endl;
	else
	{
		std::cout << *this << " attacks " << target
			<< ", causing " << this->getDps() << " damage points!" << std::endl;
		this->setMp(this->getMp() - CP_DPS_COST);
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHp() <= 0)
		std::cout << *this << " is already dead... RIP." << std::endl;
	else
	{
		std::cout << *this << " receives " << amount << " damage points!" << std::endl;
		this->setHp(this->getHp() - amount);
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHp() <= 0)
		std::cout << *this << " is already dead... It is not an immortal ClapTrap." << std::endl;
	else if (this->getMp() <= 0)
		std::cout << *this << " does not have energy point anymore and can not repair itself!" << std::endl;
	else
	{
		std::cout << *this << " revives " << amount << " points of health point!" << std::endl;
		this->setHp(this->getHp() + amount);
		this->setMp(this->getMp() - CP_MP_COST);
	}
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, const ClapTrap &clap )
{
	return (out << 	"ClapTrap \""<< (&clap)->getName() << "\" "
		<< "[hp=" << (&clap)->getHp() << ", "
		<< " mp=" << (&clap)->getMp() << ", "
		<< " dps=" << (&clap)->getDps() << "] ");
}
