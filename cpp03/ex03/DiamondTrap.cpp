/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:49:51 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/04 17:20:26 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// CONSTRUCTOR / DESTRUCTOR
//DiamondTrap::DiamondTrap( void ): ClapTrap () // Private constructor to respect Canonix form
//{
//}

DiamondTrap::DiamondTrap( const std::string newName ): ClapTrap ( newName + "_clap_name" ), FragTrap( newName ), ScavTrap( newName ) 
{
	this->setName(newName);
	this->setHp(FragTrap::getHp());
	this->setMp(ScavTrap::getMp());
	this->setDps(FragTrap::getDps());
	std::cout << *this << "appears" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << *this << "has been destroyed" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &diamond ): ClapTrap ( diamond ), FragTrap( diamond ), ScavTrap ( diamond )
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
	std::cout << *this << "has been created as a clone" << std::endl;
	return (*this);
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, const DiamondTrap &diamond )
{
	return (out << 	"DiamondTrap \""<< (&diamond)->getName() << "\" "
		<< "[hp=" << (&diamond)->getHp() << ", "
		<< " mp=" << (&diamond)->getMp() << ", "
		<< " dps=" << (&diamond)->getDps() << "] ");
}
