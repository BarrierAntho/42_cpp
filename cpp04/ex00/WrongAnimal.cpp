/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:32:34 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/14 09:00:12 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// CONSTRUCTOR / DESTRUCTOR
WrongAnimal::WrongAnimal( void ): _type(WRGANI_DEFAULT_TYPE)
{
	std::cout << "WrongAnimal has been created" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal has been destroyed" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &ref )
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVERLOAD OPERATOR
WrongAnimal	&WrongAnimal::operator = ( const WrongAnimal &ref )
{
	std::cout << "WrongAnimal overload operator \"=\"" << std::endl;
	if (this == (&ref))
		return (*this);
	this->setType((&ref)->getType());
	std::cout << *this << "has been created as a clone" << std::endl;
	return (*this);
}

// GETTER / SETTER
const std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}

void	WrongAnimal::setType( const std::string &newType )
{
	this->_type = newType;
}

// SUBJECT FUNCTIONS
void	WrongAnimal::makeSound( void ) const
{
	std::cout << *this << " makes sound: " << WRGANI_SOUND << std::endl;
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, const WrongAnimal &ref )
{
	return (out << "[WrongAnimal] Type: " << (&ref)->getType());
}
