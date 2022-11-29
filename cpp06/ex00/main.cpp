/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:23:57 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/29 13:57:08 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ConvertScalarTypes.hpp"

#define SEP_P "##############################"
#define SEP_SP "------------------------------"

int	main( int argc, char **argv )
{
	std::string	tab[4] = { "CHAR", "INT", "FLOAT", "DOUBLE" };

	try
	{
		if (argc == 1)
			throw (ConvertScalarTypes::NullInputException());
		std::cout << "argv[1]: " << argv[1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	std::cout << SEP_P << std::endl;
	{
		std::string		arg(argv[1]);
		ConvertScalarTypes	cst(arg);
		int	i;

		for (i = 0; i < 4; i++)
		{
			std::cout << "CHECK INPUT AS " << tab[i] << std::endl;
			std::cout << cst << std::endl;
			cst.show();
		}
	}
	std::cout << SEP_P << std::endl;
	return (0);
}
