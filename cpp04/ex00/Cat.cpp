/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:22:05 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/08 00:24:00 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): Animal()
{
	std::cout << "Cat has been created" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat has been destroyed" << std::endl;
}

std::ostream	&operator << ( std::ostream &out, const Cat &ref )
{
	return (out << "[Cat] Type: " << (&ref)->getType());
}
