/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:35:52 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/19 13:58:32 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
	std::cout << HB_MSG_CREATED << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << HB_MSG_DEL << std::endl;
}
