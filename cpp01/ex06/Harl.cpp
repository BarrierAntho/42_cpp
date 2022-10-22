/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:53:48 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/22 18:05:11 by abarrier         ###   ########.fr       */
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
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << HARL_MSG_DEBUG << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << HARL_MSG_INFO << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << HARL_MSG_WARNING << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
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
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
			this->debug();
			this->info();
			this->warning();
			this->error();
			break ;
		case 1:
			this->info();
			this->warning();
			this->error();
			break ;
		case 2:
			this->warning();
			this->error();
			break ;
		case 3:
			this->error();
			break ;
		default:
			std::cout << "[UNKNOW]" << std::endl;
			std::cout << HARL_ERR_UNKNOW << std::endl;
			break;
	}
}
