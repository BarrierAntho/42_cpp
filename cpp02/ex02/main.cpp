/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:58:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/01 16:46:16 by abarrier         ###   ########.fr       */
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
		Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

//		std::cout << Fixed::max( a, b ) << std::endl;
	}
	std::cout << SEP_P << std::endl;
	// PERSONAL TEST
	{
		std::cout << "PERSONAL TEST" << std::endl;
		std::cout << SEP_SP << std::endl;

		Fixed	a;
		Fixed	b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << "a (default constructor): " << a << std::endl;
		std::cout << "b (5.05f * 2): " << b << std::endl;

		std::cout << SEP_SP << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		a = a + 1;
		b = b + 1;
		std::cout << "a + 1: " << a << std::endl;
		std::cout << "b + 1: " << b << std::endl;

		std::cout << SEP_SP << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		a = a - 1;
		b = b - 1;
		std::cout << "a - 1: " << a << std::endl;
		std::cout << "b - 1: " << b << std::endl;

		std::cout << SEP_SP << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		a = a + 1.1f;
		b = b - 2;
		std::cout << "a + 1.1f: " << a << std::endl;
		std::cout << "b - 2: " << b << std::endl;
	}
	return (0);
}
