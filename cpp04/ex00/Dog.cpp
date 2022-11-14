/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:14:30 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 10:21:46 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// CONSTRUCTOR / DESTRUCTOR
Dog::Dog( void ): Animal ()
{
	std::cout << "Dog has been created" << std::endl;
	this->setType("Dog");
}

Dog::~Dog( void )
{
	std::cout << "Dog has been destroyed" << std::endl;
}

Cat::Cat( const Cat &ref )
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

	std::cout << "Animal overload operator \"=\"" << std::endl;
	if (this == (&ref))
		return (*this);
	cpThis = this;
	cpClone = &ref;
	*cpThis = *cpClone;
	std::cout << *this << "has been created as a clone" << std::endl;
	return (*this);
}

// SUBJECT FUNCTIONS
void	Dog::makeSound( void ) const
{
	std::cout << *this << " makes sound: " << DOG_SOUND << std::endl;
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, const Dog &ref )
{
	return (out << "[Dog] Type: " << (&ref)->getType());
}
