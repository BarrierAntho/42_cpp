/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:33:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/17 14:10:49 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	main_wellcome_back(void)
{
	std::cout << SEP_SP << std::endl;
	std::cout << MSG_PB_MENU_BACK << std::endl;
	std::cout << SEP_SP << std::endl;
}

void	main_wellcome(void)
{
	std::cout << SEP_P << std::endl;
	std::cout << MSG_PB_MENU << std::endl;
	std::cout << SEP_P << std::endl;
}

int	main(void)
{
	std::string	buff;
	PhoneBook phonebook;

	main_wellcome();
	while (42)
	{
		if (std::cin.eof() == 0)
			std::cout << MSG_PB_SELEC;
		if (std::getline(std::cin, buff).good() == false)
		{
			std::cout << std::endl;
			break;
		}
		if (buff.compare(USR_A) == 0)
		{
			std::cout << "Mode \"ADD\" selected" << std::endl;
			std::cout << SEP_SP << std::endl;
			phonebook.add();
		}
		else if (buff.compare(USR_E) == 0)
		{
			std::cout << "Mode \"EXIT\" selected" << std::endl;
			std::cout << SEP_SP << std::endl;
			return (0);
		}
		else if (buff.compare(USR_S) == 0)
		{
			std::cout << "Mode \"SEARCH\" selected" << std::endl;
			std::cout << SEP_SP << std::endl;
			phonebook.search();
		}
		else
		{
			std::cout << "UNKNOWN mode" << std::endl;
			std::cout << SEP_SP << std::endl;
		}
	}
	return (0);
}
