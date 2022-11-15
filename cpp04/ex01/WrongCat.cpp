/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:22:05 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/15 11:11:56 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// CONSTRUCTOR / DESTRUCTOR
WrongCat::WrongCat( void ): WrongAnimal()
{
	this->setType("WrongCat");
	std::cout << *this << " has been created" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << *this << " has been destroyed" << std::endl;
}

WrongCat::WrongCat( const WrongCat &ref ): WrongAnimal()
{
	std::cout << *this << " copy constructor" << std::endl;
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVERLOAD OPERATOR
WrongCat	&WrongCat::operator = ( const WrongCat &ref )
{
	WrongAnimal	*cpThis;
	const WrongAnimal	*cpClone;

	std::cout << *this << " overload operator \"=\"" << std::endl;
	if (this == (&ref))
		return (*this);
	cpThis = this;
	cpClone = &ref;
	*cpThis = *cpClone;
	std::cout << *this << " has been created as a clone" << std::endl;
	return (*this);
}

// SUBJECT FUNCTIONS
void	WrongCat::makeSound( void ) const
{
	std::cout << *this << " makes sound: " << WRGCAT_SOUND << std::endl;
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, const WrongCat &ref )
{
	return (out << "[WrongCat] Type: " << (&ref)->getType());
}
