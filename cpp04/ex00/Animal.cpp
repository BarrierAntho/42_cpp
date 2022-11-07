/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:32:34 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/08 00:10:07 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): _type(ANI_DEFAULT_TYPE)
{
	std::cout << "Animal has been created" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal has been destroyed" << std::endl;
}

const std::string	Animal::getType( void ) const
{
	return (this->_type);
}

void	Animal::setType( const std::string &newType )
{
	this->_type = newType;
}

std::ostream	&operator << ( std::ostream &out, const Animal &ref )
{
	return (out << "[Animal] Type: " << (&ref)->getType());
}
