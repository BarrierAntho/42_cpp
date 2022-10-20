/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:30:25 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/20 11:59:09 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void): type("")
{
	std::cout << WP_MSG_DEFAULT << std::endl;
}

Weapon::Weapon(std::string newName): type(newName)
{
	std::cout << WP_MSG_CREATED << ": " << newName << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << WP_MSG_DEL << std::endl;
}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
	std::cout << WP_MSG_CHANGE << ": " << newType << std::endl;
}
