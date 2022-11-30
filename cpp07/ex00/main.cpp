/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 08:51:12 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/30 09:10:54 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "whatever.hpp"

#define SEP_P "##############################"
#define SEP_SP "------------------------------"

int	main( void )
{
	std::cout << "TEST - SUBJECT" << std::endl;
	std::cout << SEP_P << std::endl;
	{
		int	a = 2;
		int	b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	std::cout << SEP_P << std::endl;
	std::cout << "TEST - PERSONNAL" << std::endl;
	std::cout << SEP_P << std::endl;
	{
		std::cout << "TEST - CHAR" << std::endl;
		char	a = 'z';
		char	b = 's';

		std::cout << "INIT VARIABLE a = " << a << ", b = " << b << std::endl;
		::swap( a, b );
		std::cout << "AFTER SWAP a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}
	std::cout << SEP_SP << std::endl;
	{
		std::cout << "TEST - BOOL" << std::endl;
		bool	a = true;
		bool	b = false;

		std::cout << "INIT VARIABLE a = " << a << ", b = " << b << std::endl;
		::swap( a, b );
		std::cout << "AFTER SWAP a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}
	std::cout << SEP_SP << std::endl;

	return (0);
}
