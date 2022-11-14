/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:22:05 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/14 09:37:11 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// CONSTRUCTOR / DESTRUCTOR
Cat::Cat( void ): Animal()
{
	this->setType("Cat");
	std::cout << "Cat has been created" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat has been destroyed" << std::endl;
}

Cat::Cat( const Cat &ref ): Animal()
{
	std::cout << "Cat copy constructor" << std::endl;
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVERLOAD OPERATOR
Cat	&Cat::operator = ( const Cat &ref )
{
	Animal	*cpThis;
	const Animal	*cpClone;

	std::cout << "Cat overload operator \"=\"" << std::endl;
	if (this == (&ref))
		return (*this);
	cpThis = this;
	cpClone = &ref;
	*cpThis = *cpClone;
	std::cout << *this << " has been created as a clone" << std::endl;
	return (*this);
}

// SUBJECT FUNCTIONS
void	Cat::makeSound( void ) const
{
	std::cout << *this << " makes sound: " << CAT_SOUND << std::endl;
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, const Cat &ref )
{
	return (out << "[Cat] Type: " << (&ref)->getType());
}
