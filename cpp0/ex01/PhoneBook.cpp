/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:33:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/17 12:02:37 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook(void)
{
	//amount = 8;
	amount = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add(void)
{
	Contact contact;

	if (contact.create() == 1)
	{
		std::cerr << ERR_CT_EMPTY_FD << std::endl;
		return ;
	}
	if (amount >= 8)
		amount = 0;
	contacts[amount].copy(&contact);
	amount++;
}

void	PhoneBook::search(void)
{
	int		i;
	std::string	buff;
	int		index;

	search_header();
	for (i = 0; i < 8; i++)
		contacts[i].search(i);
	std::cout << MSG_PB_ID_QUEST;
	std::getline (std::cin, buff);
	index = atoi(buff.c_str());
	if (buff.size() == 1 && index >= 1 && index <= 8)
		contacts[index - 1].show();
	else
		std::cout << MSG_PB_ID_CANCEL << std::endl;
	main_wellcome_back();
}

void	PhoneBook::search_header(void)
{
	std::cout << std::right << std::setw(FD_WIDTH) << HD_INDEX;
	std::cout << FD_SEP;
	std::cout << std::right << std::setw(FD_WIDTH) << HD_FT_NAME;
	std::cout << FD_SEP;
	std::cout << std::right << std::setw(FD_WIDTH) << HD_LT_NAME;
	std::cout << FD_SEP;
	std::cout << std::right << std::setw(FD_WIDTH) << HD_NCKNAME;
	std::cout << std::endl;
}
