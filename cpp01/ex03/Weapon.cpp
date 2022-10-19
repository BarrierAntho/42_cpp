/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:30:25 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/19 13:53:24 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->type = "";
	std::cout << WP_MSG_CREATED << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << WP_MSG_DEL << std::endl;
}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string newWeapon)
{
	this->type = newWeapon;
}
