/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:23:57 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/28 13:18:36 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ConvertScalarTypes.hpp"

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
	std::cout << "CONVERT TO INT" << std::endl;
	{
		ConvertScalarTypes	cst;
		int			a;

		a = 10;
		std::cout << cst << std::endl;
		std::cout << "a: " << a << std::endl;
		a = static_cast<char>(cst);
		std::cout << "a: " << a << std::endl;
	}
	return (0);
}
