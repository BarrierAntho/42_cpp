/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:22:05 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/15 11:57:23 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// CONSTRUCTOR / DESTRUCTOR
Cat::Cat( void ): Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << *this << " has been created" << std::endl;
}

Cat::~Cat( void )
{
	delete(this->_brain);
	std::cout << *this << " has been destroyed" << std::endl;
}

Cat::Cat( const Cat &ref ): Animal()
{
	std::cout << *this << " copy constructor" << std::endl;
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVERLOAD OPERATOR
Cat	&Cat::operator = ( const Cat &ref )
{
	Animal	*cpThis;
	const Animal	*cpClone;

	std::cout << *this << " overload operator \"=\"" << std::endl;
	if (this == (&ref))
		return (*this);
	cpThis = this;
	cpClone = &ref;
	*cpThis = *cpClone;
	this->_brain = new Brain();
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
