/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:27:07 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/21 18:40:56 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "MySed.hpp"

#define ERR_ARG "Wrong argument definition. Expected: <filename> <s1> <s2>"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << ERR_ARG << std::endl;
		return (1);
	}
	MySed mySed(argv[1], argv[2], argv[3]);
	return (mySed.exec());
	return (0);
}
