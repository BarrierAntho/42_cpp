/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:24:39 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/18 16:08:41 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void): name(ZB_DFT_NAME)
{
	return ;
}

Zombie::~Zombie(void)
{

	std::cout << this->name << ": has been destroyed" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": " << ZB_ANNOUNCE << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
