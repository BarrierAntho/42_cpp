/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:53:48 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/22 17:20:47 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->tab[0] = HARL_DBG;
	this->tab[1] = HARL_INFO;
	this->tab[2] = HARL_WARN;
	this->tab[3] = HARL_ERR;
	this->tab[4] = "";
	this->tabf[0] = &Harl::debug;
	this->tabf[1] = &Harl::info;
	this->tabf[2] = &Harl::warning;
	this->tabf[3] = &Harl::error;
	this->tabf[4] = NULL;
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << HARL_MSG_DEBUG << std::endl;
}

void	Harl::info(void)
{
	std::cout << HARL_MSG_INFO << std::endl;
}

void	Harl::warning(void)
{
	std::cout << HARL_MSG_WARNING << std::endl;
}

void	Harl::error(void)
{
	std::cout << HARL_MSG_ERROR << std::endl;
}

void	Harl::complain(std::string level)
{
	(void)level;
	int	i;

	i = 0;
	while (this->tab[i].empty() == false)
	{
		if (this->tab[i].compare(level) == 0)
		{
			(this->*tabf[i])();
			std::cout << HARL_SEP_P << std::endl;
			return ;
		}
		i++;
	}
	std::cout << HARL_ERR_UNKNOW << std::endl;
}
