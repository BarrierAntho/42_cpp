/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:24:39 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/18 15:58:33 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void): name(ZB_DFT_NAME)
{
	announce();
}

Zombie::Zombie(std::string name): name(name)
{
	announce();
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
