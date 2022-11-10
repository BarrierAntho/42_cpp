/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:22:05 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 10:46:32 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal()
{
	std::cout << "WrongCat has been created" << std::endl;
	this->setType("WrongCat");
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat has been destroyed" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << *this << " makes sound: " << WRGCAT_SOUND << std::endl;
}

std::ostream	&operator << ( std::ostream &out, const WrongCat &ref )
{
	return (out << "[WrongCat] Type: " << (&ref)->getType());
}
