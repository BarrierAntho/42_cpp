/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:32:34 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 10:31:55 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): _type(WRGANI_DEFAULT_TYPE)
{
	std::cout << "WrongAnimal has been created" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal has been destroyed" << std::endl;
}

const std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}

void	WrongAnimal::setType( const std::string &newType )
{
	this->_type = newType;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << *this << " makes sound: " << WRGANI_SOUND << std::endl;
}

std::ostream	&operator << ( std::ostream &out, const WrongAnimal &ref )
{
	return (out << "[WrongAnimal] Type: " << (&ref)->getType());
}
