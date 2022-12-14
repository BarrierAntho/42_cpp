/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:14:30 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/15 17:17:47 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// CONSTRUCTOR / DESTRUCTOR
Dog::Dog( void ): Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << *this << " has been created" << std::endl;
}

Dog::~Dog( void )
{
	delete(this->_brain);
	std::cout << *this << " has been destroyed" << std::endl;
}

Dog::Dog( const Dog &ref ): Animal()
{
	std::cout << *this << " copy constructor" << std::endl;
	if (this == (&ref))
		return ;
	this->_brain = new Brain();
	*this = ref;
}

// OVERLOAD OPERATOR
Dog	&Dog::operator = ( const Dog &ref )
{
	Animal	*cpThis;
	const Animal	*cpClone;

	std::cout << *this << " overload operator \"=\"" << std::endl;
	if (this == (&ref))
		return (*this);
	cpThis = this;
	cpClone = &ref;
	*cpThis = *cpClone;
	*this->_brain = (&ref)->getBrain();
	std::cout << *this << " has been created as a clone" << std::endl;
	return (*this);
}

// GETTER / SETTER
Brain	&Dog::getBrain( void ) const
{
	return (*this->_brain);
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
