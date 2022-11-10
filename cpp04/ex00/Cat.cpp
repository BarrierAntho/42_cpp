/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:22:05 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 10:21:18 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): Animal()
{
	std::cout << "Cat has been created" << std::endl;
	this->setType("Cat");
}

Cat::~Cat( void )
{
	std::cout << "Cat has been destroyed" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << *this << " makes sound: " << CAT_SOUND << std::endl;
}

std::ostream	&operator << ( std::ostream &out, const Cat &ref )
{
	return (out << "[Cat] Type: " << (&ref)->getType());
}
