/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:35:52 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/20 12:42:39 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon): name(newName), weapon(newWeapon)
{
	std::cout << newName << " " << HA_MSG_CREATED
		<< " and " << HA_MSG_WP_CHOICE << " " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << this->getName() << " " << HA_MSG_DEL << std::endl;
}
const std::string	HumanA::getName(void)
{
	return (this->name);
}

void	HumanA::setName(const std::string newName)
{
	this->name = newName;
}

Weapon	HumanA::getWeapon(void)
{
	return (this->weapon);
}

void	HumanA::setWeapon(Weapon &newWeapon)
{
	this->weapon = newWeapon;
	std::cout << this->getName() << " " << HA_MSG_WP_CHOICE << " " << newWeapon.getType() << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->getName() << " " << HA_MSG_ATTACK << " " << this->weapon.getType() << std::endl;
}
