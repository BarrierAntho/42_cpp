/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:49:51 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/14 21:30:58 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// CONSTRUCTOR / DESTRUCTOR
ScavTrap::ScavTrap( void ): ClapTrap ()
{
	this->setHp(CV_HP);
	this->setMp(CV_MP);
	this->setDps(CV_DPS);
	std::cout << *this << "appears" << std::endl;
}

ScavTrap::ScavTrap( const std::string newName ): ClapTrap( newName )
{
	this->setHp(CV_HP);
	this->setMp(CV_MP);
	this->setDps(CV_DPS);
	std::cout << *this << "appears" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << *this << "has been destroyed" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &scav ): ClapTrap( scav )
{
	std::cout << "ScavTrap copy constructor" << std::endl;
	if (this == (&scav))
		return ;
	*this = scav;
}

// OVERLOAD OPERATOR
ScavTrap	&ScavTrap::operator = ( const ScavTrap &scav )
{
	ClapTrap	*cpThis;
	const ClapTrap	*cpClone;

	std::cout << "ScavTrap overload operator \"=\"" << std::endl;
	if (this == (&scav))
		return (*this);
	cpThis = this;
	cpClone = &scav;
	*cpThis = *cpClone;
	std::cout << *this << "has been created as a clone" << std::endl;
	return (*this);
}

// GETTER / SETTER
std::string	ScavTrap::getName( void ) const
{
	return (this->_name);
}

void	ScavTrap::setName( const std::string &newName )
{
	this->_name = newName;
}

int	ScavTrap::getHp( void ) const
{
	return (this->_hitPoints);
}

void	ScavTrap::setHp( const int newHitPoints )
{
	this->_hitPoints = newHitPoints;
}

int	ScavTrap::getMp( void ) const
{
	return (this->_energyPoints);
}

void	ScavTrap::setMp( const int newEnergyPoints )
{
	this->_energyPoints = newEnergyPoints;
}

int	ScavTrap::getDps( void ) const
{
	return (this->_attackPoints);
}

void	ScavTrap::setDps( const int newAttackPoints )
{
	this->_attackPoints = newAttackPoints;
}

// SUBJECT FUNCTIONS
void	ScavTrap::attack(const std::string& target)
{
	if (this->getHp() <= 0)
		std::cout << *this << " is dead... How is it possible to attack? Indesctructible ScavTrap ?!" << std::endl;
	else if (this->getMp() <= 0)
		std::cout << *this << " does not have electric energy point anymore and can not attack!" << std::endl;
	else
	{
		std::cout << *this << " attacks " << target
			<< ", causing " << this->getDps() << " damage points!" << std::endl;
		this->setMp(this->getMp() - CP_DPS_COST);
	}
}

void	ScavTrap::guardGate( void )
{
	if (this->getHp() <= 0)
		std::cout << *this << " is dead... How is it possible to create a guard gate ?!" << std::endl;
	else if (this->getMp() <= 0)
		std::cout << *this << " does not have electric energy point anymore and can not create guard gate!" << std::endl;
	else
	{
		std::cout << *this << " create a guard gate where it is impossible to get damages!" << std::endl;
		this->setMp(this->getMp() - CP_DPS_COST);
	}

}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, const ScavTrap &scav )
{
	return (out << 	"ScavTrap \""<< (&scav)->getName() << "\" "
		<< "[hp=" << (&scav)->getHp() << ", "
		<< " mp=" << (&scav)->getMp() << ", "
		<< " dps=" << (&scav)->getDps() << "] ");
}
