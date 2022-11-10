/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:22:05 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 22:29:11 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): Animal()
{
	this->setType("Cat");
	this->_brain = new Brain();
	std::cout << "Cat has been created" << std::endl;
}

Cat::~Cat( void )
{
	if (this->_brain)
		delete(this->_brain);
	std::cout << "Cat has been destroyed" << std::endl;
}

//TODO: Copy constructor

void	Cat::makeSound( void ) const
{
	std::cout << *this << " makes sound: " << CAT_SOUND << std::endl;
}

std::ostream	&operator << ( std::ostream &out, const Cat &ref )
{
	return (out << "[Cat] Type: " << (&ref)->getType());
}
