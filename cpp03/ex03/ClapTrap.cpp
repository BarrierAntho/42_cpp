/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:49:51 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/04 16:40:23 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// CONSTRUCTOR / DESTRUCTOR
//ClapTrap::ClapTrap( void ) // Private constructor to respect Canonix form
//{
//}

ClapTrap::ClapTrap( const std::string newName ): _name(newName), _hp( CP_HP ), _mp ( CP_MP ), _dps ( CP_DPS )
{
	std::cout << *this << "appears" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << *this << "has been destroyed" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &clap )
{
	std::cout << "ClapTrap copy constructor" << std::endl;
	if (this == (&clap))
		return ;
	*this = clap;
}

// OVERLOAD OPERATOR
ClapTrap	&ClapTrap::operator = ( const ClapTrap &clap )
{
	std::cout << "ClapTrap overload operator \"=\"" << std::endl;
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
