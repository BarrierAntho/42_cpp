/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:14:30 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/08 00:21:48 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): Animal ()
{
	std::cout << "Dog has been created" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog has been destroyed" << std::endl;
}

std::ostream	&operator << ( std::ostream &out, const Dog &ref )
{
	return (out << "[Dog] Type: " << (&ref)->getType());
}
