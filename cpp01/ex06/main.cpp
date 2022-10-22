/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:22:41 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/22 17:44:23 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <Harl.hpp>

#define ERR_ARG "Wrong argument definition. Expected: DEBUG, INFO, WARNING, ERROR"

int	main(int argc, char **argv)
{
	Harl		harl;

	if (argc != 2)
	{
		std::cerr << ERR_ARG << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return(0);
}
