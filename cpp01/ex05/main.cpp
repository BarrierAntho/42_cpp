/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:22:41 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/22 17:24:15 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <Harl.hpp>

int	main(void)
{
	Harl		harl;
	std::string	buff;

	while (42)
	{
		std::cout << HARL_COMPLAIN;
		if (std::getline(std::cin, buff).good() == false)
			break ;
		harl.complain(buff);
	}
	return(0);
}
