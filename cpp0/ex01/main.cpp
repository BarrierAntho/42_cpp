/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:33:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/11 17:21:40 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"



int	main(void)
{
	std::string	buff;
	PhoneBook phonebook;

	while (42)
	{
		std::cout << "What do you want to do ? (ADD, SEARCH, EXIT): " << std::endl;
		std::cin >> buff;
		if (buff.compare(USR_A) == 0)
		{
			std::cout << "Mode \"ADD\" selected" << std::endl;;
		}
		else if (buff.compare(USR_E) == 0)
		{
			std::cout << "Mode \"EXIT\" selected" << std::endl;
			return (0);
		}
		else if (buff.compare(USR_S) == 0)
		{
			std::cout << "Mode \"SEARCH\" selected" << std::endl;
		}
		else
		{
			std::cout << "Choice UNKNOWN" << std::endl;
		}

	}
	return (0);
}
