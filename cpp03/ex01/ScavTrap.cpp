/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:49:51 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/03 19:05:12 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// CONSTRUCTOR / DESTRUCTOR
ScavTrap::ScavTrap( void ) // Private constructor to respect Canonix form
{
}

ScavTrap::ScavTrap( const std::string newName ): _name(newName), _hp( CV_HP ), _mp (CV_MP ), _dps ( CV_DPS )
{
	std::cout << *this << "appears" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << *this << "has been destroyed" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &scav )
{
//	std::cout << "Copy constructor" << std::endl;
	if (this == (&scav))
		return ;
	*this = scav;
}

// OVERLOAD OPERATOR
ScavTrap	&ScavTrap::operator = ( const ScavTrap &scav )
{
//	std::cout << "Overload operator \"=\"" << std::endl;
	if (this == (&scav))
		return (*this);
	this->setName((&scav)->getName());
	this->setHp((&scav)->getHp());
	this->setMp((&scav)->getMp());
	this->setDps((&scav)->getDps());
	std::cout << *this << "has been created as a clone" << std::endl;
	return (*this);
}

// GETTER / SETTER

// SUBJECT FUNCTIONS
void	ScavTrap::attack(const std::string& target)
{
	if (this->getHp() <= 0)
		std::cout << *this << " is dead... How is it possible to attack? Zombie ScavTrap ?!" << std::endl;
	else if (this->getMp() <= 0)
		std::cout << *this << " does not have energy point anymore and can not attack!" << std::endl;
	else
	{
		std::cout << *this << " attacks " << target
			<< ", causing " << this->getDps() << " damage points!" << std::endl;
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
