/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:23:57 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/29 15:32:05 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ConvertScalarTypes.hpp"

#define SEP_P "##############################"
#define SEP_SP "------------------------------"

int	main( int argc, char **argv )
{
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
	}
	std::cout << SEP_P << std::endl;
	return (0);
}
