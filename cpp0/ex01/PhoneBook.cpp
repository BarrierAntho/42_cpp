/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:33:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/15 15:45:23 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook has been instantied" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook has been deleted" << std::endl;
	return ;
}

void	PhoneBook::add(void)
{
//	if (contacts[0].create() == 1)
//		std::cout << ERR_CT_EMPTY_FD << std::endl;
	search();
}

void	PhoneBook::search(void)
{
	int		i;
	std::string	buff;
	int		index;

	search_header();
	for (i = 0; i < 8; i++)
		contacts[i].search(i);
	std::cout << "Which contact do you want to show ?" << std::endl;
	std::getline (std::cin, buff);
	index = atoi(buff.c_str());
	if (buff.size() == 1 && index >= 1 && index <= 7)
		contacts[index].show();
	else
		std::cerr << "ERROR" << std::endl;
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
