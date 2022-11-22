/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:23:57 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/22 14:46:59 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ConvertScalarTypes.hpp"

int	main( int argc, char **argv )
{
	ConvertScalarTypes	cst;

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

	return (0);
}
