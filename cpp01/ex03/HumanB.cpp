/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:35:52 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/20 12:42:55 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName): name(newName), weapon(NULL)
{
	std::cout << newName << " " << HB_MSG_CREATED
		<< " and " << HB_MSG_WP_NO << std::endl;

}

HumanB::~HumanB(void)
{
	std::cout << this->getName() << " " << HB_MSG_DEL << std::endl;
}

//void	HumanB::attack(void)
//{
//}

const std::string	HumanB::getName(void)
{
	return (this->name);
}

void	HumanB::setName(const std::string newName)
{
	this->name = newName;
}

Weapon	*HumanB::getWeapon(void)
{
	return (this->weapon);
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->weapon = &newWeapon;
	std::cout << this->getName() << " " << HB_MSG_WP_CHOICE << " " << newWeapon.getType() << std::endl;
}

void	HumanB::attack(void)
{
	if (this->getWeapon() == NULL)
		std::cout << this->getName() << " " << HB_MSG_ATTACK_WP_NO << std::endl;
	else
		std::cout << this->getName() << " " << HB_MSG_ATTACK << " " << this->weapon->getType() << std::endl;
}
