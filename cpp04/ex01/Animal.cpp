/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:32:34 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/14 09:37:47 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// CONSTRUCTOR / DESTRUCTOR
Animal::Animal( void ): _type(ANI_DEFAULT_TYPE)
{
	std::cout << "Animal has been created" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal has been destroyed" << std::endl;
}

Animal::Animal( const Animal &ref )
{
	std::cout << "Animal copy constructor" << std::endl;
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVERLOAD OPERATOR
Animal	&Animal::operator = ( const Animal &ref )
{
	std::cout << "Animal overload operator \"=\"" << std::endl;
	if (this == (&ref))
		return (*this);
	this->setType((&ref)->getType());
	std::cout << *this << " has been created as a clone" << std::endl;
	return (*this);
}

// GETTER / SETTER
const std::string	Animal::getType( void ) const
{
	return (this->_type);
}

void	Animal::setType( const std::string &newType )
{
	this->_type = newType;
}

// SUBJECT FUNCTIONS
void	Animal::makeSound( void ) const
{
	std::cout << *this << " makes sound: " << ANI_SOUND << std::endl;
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, const Animal &ref )
{
	return (out << "[Animal] Type: " << (&ref)->getType());
}
