/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:49:51 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/14 18:07:53 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// CONSTRUCTOR / DESTRUCTOR
FragTrap::FragTrap( void ): ClapTrap ()
{
	this->setHp(CF_HP);
	this->setMp(CF_MP);
	this->setDps(CF_DPS);
	std::cout << *this << "appears" << std::endl;
}

FragTrap::FragTrap( const std::string newName ): ClapTrap( newName )
{
	this->setHp(CF_HP);
	this->setMp(CF_MP);
	this->setDps(CF_DPS);
	std::cout << *this << "appears" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << *this << "has been destroyed" << std::endl;
}

FragTrap::FragTrap( const FragTrap &frag ): ClapTrap( frag )
{
	std::cout << "FragTrap copy constructor" << std::endl;
	if (this == (&frag))
		return ;
	*this = frag;
}

// OVERLOAD OPERATOR
FragTrap	&FragTrap::operator = ( const FragTrap &frag )
{
	ClapTrap	*cpThis;
	const ClapTrap	*cpClone;

	std::cout << "FragTrap overload operator \"=\"" << std::endl;
	if (this == (&frag))
		return (*this);
	cpThis = this;
	cpClone = &frag;
	*cpThis = *cpClone;
	std::cout << *this << "has been created as a clone" << std::endl;
	return (*this);
}

// SUBJECT FUNCTIONS
void	FragTrap::highFivesGuys( void )
{
	if (this->getHp() <= 0)
		std::cout << *this << " is dead... How is it possible to hand's up for an high five?!" << std::endl;
	else if (this->getMp() <= 0)
		std::cout << *this << " does not have oil point anymore and can not do high five!" << std::endl;
	else
	{
		std::cout << *this << " **requireds a L.E.N.D.A.R.Y high five**!" << std::endl;
		this->setMp(this->getMp() - CP_DPS_COST);
	}
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, const FragTrap &frag )
{
	return (out << 	"FragTrap \""<< (&frag)->getName() << "\" "
		<< "[hp=" << (&frag)->getHp() << ", "
		<< " mp=" << (&frag)->getMp() << ", "
		<< " dps=" << (&frag)->getDps() << "] ");
}
