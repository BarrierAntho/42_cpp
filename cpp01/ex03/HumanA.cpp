/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:35:52 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/19 13:58:11 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void)
{
	std::cout << HA_MSG_CREATED << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << HA_MSG_DEL << std::endl;
}
