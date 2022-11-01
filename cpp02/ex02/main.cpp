/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:58:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/01 12:19:11 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

# define SEP_P "####################"
# define SEP_SP "--------------------"

int	main(void)
{
	std::cout << SEP_P << std::endl;
	// SUBJECT TEST
	{
		std::cout << "SUBJECT TEST" << std::endl;
		std::cout << SEP_SP << std::endl;

		Fixed		a;
		Fixed		b;
//		Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
//		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
//		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

//		std::cout << Fixed::max( a, b ) << std::endl;
	}
	std::cout << SEP_P << std::endl;
	// PERSONAL TEST
	{
		std::cout << "PERSONAL TEST" << std::endl;
		std::cout << SEP_SP << std::endl;

		int	a = 1, b = 1;
		bool	test = false;
		test = a > b;
		std::cout << "test: " << test << std::endl;
		test = a < b;
		std::cout << "test: " << test << std::endl;
		test = a <= b;
		std::cout << "test: " << test << std::endl;
		test = a >= b;
		std::cout << "test: " << test << std::endl;
	}
	return (0);
}
