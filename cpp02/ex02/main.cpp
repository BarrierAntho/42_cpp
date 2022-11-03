/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:58:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/03 11:09:54 by abarrier         ###   ########.fr       */
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

		std::cout << Fixed::max( a, b ) << std::endl;
	}
	std::cout << SEP_P << std::endl;
	// PERSONAL TEST
	{
		std::cout << "PERSONAL TEST - Comparison" << std::endl;
		std::cout << SEP_SP << std::endl;

		Fixed	a;
		Fixed	b;
		bool	cmp = false;

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		a = 1;
		b = 1.1f;
		std::cout << "a = 1: " << a << std::endl;
		std::cout << "b = 1.1f: " << b << std::endl;
		cmp = a < b;
		std::cout << "a < b: " << cmp << std::endl;
		cmp = a > b;
		std::cout << "a > b: " << cmp << std::endl;
		cmp = a <= b;
		std::cout << "a <= b: " << cmp << std::endl;
		cmp = a >= b;
		std::cout << "a >= b: " << cmp << std::endl;
		cmp = a == b;
		std::cout << "a == b: " << cmp << std::endl;
		cmp = a != b;
		std::cout << "a != b: " << cmp << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		a = 1.1f;
		b = 1;
		std::cout << "a = 1.1f: " << a << std::endl;
		std::cout << "b = 1: " << b << std::endl;
		cmp = a < b;
		std::cout << "a < b: " << cmp << std::endl;
		cmp = a > b;
		std::cout << "a > b: " << cmp << std::endl;
		cmp = a <= b;
		std::cout << "a <= b: " << cmp << std::endl;
		cmp = a >= b;
		std::cout << "a >= b: " << cmp << std::endl;
		cmp = a == b;
		std::cout << "a == b: " << cmp << std::endl;
		cmp = a != b;
		std::cout << "a != b: " << cmp << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		a = 1;
		b = 1;
		std::cout << "a = 1: " << a << std::endl;
		std::cout << "b = 1: " << b << std::endl;
		cmp = a < b;
		std::cout << "a < b: " << cmp << std::endl;
		cmp = a > b;
		std::cout << "a > b: " << cmp << std::endl;
		cmp = a <= b;
		std::cout << "a <= b: " << cmp << std::endl;
		cmp = a >= b;
		std::cout << "a >= b: " << cmp << std::endl;
		cmp = a == b;
		std::cout << "a == b: " << cmp << std::endl;
		cmp = a != b;
		std::cout << "a != b: " << cmp << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		a = 1.1f;
		b = 1.1f;
		std::cout << "a = 1.1f: " << a << std::endl;
		std::cout << "b = 1.1f: " << b << std::endl;
		cmp = a < b;
		std::cout << "a < b: " << cmp << std::endl;
		cmp = a > b;
		std::cout << "a > b: " << cmp << std::endl;
		cmp = a <= b;
		std::cout << "a <= b: " << cmp << std::endl;
		cmp = a >= b;
		std::cout << "a >= b: " << cmp << std::endl;
		cmp = a == b;
		std::cout << "a == b: " << cmp << std::endl;
		cmp = a != b;
		std::cout << "a != b: " << cmp << std::endl;
	}
	std::cout << SEP_P << std::endl;
	{
		std::cout << "PERSONAL TEST - Arithmetic" << std::endl;
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
		std::cout << SEP_SP << std::endl;

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		a = a * 2;
		b = b / 2;
		std::cout << "a * 2: " << a << std::endl;
		std::cout << "b / 2: " << b << std::endl;
		std::cout << SEP_SP << std::endl;
	}
	std::cout << SEP_P << std::endl;
	{
		std::cout << "PERSONAL TEST - pre/post increment/decrement" << std::endl;
		std::cout << SEP_SP << std::endl;

		Fixed	a;
		Fixed	b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << "a (default constructor): " << a << std::endl;
		std::cout << "b (5.05f * 2): " << b << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "++a: " << ++a << std::endl;
		std::cout << "++b: " << ++b << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "--a: " << --a << std::endl;
		std::cout << "--b: " << --b << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "a++: " << a++ << std::endl;
		std::cout << "b++: " << b++ << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "a--: " << a-- << std::endl;
		std::cout << "b--: " << b-- << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << SEP_SP << std::endl;
	}
	std::cout << SEP_P << std::endl;
	{
		std::cout << "PERSONAL TEST - min/max" << std::endl;
		std::cout << SEP_SP << std::endl;

		Fixed	a;
		Fixed	b;

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		a = 1;
		b = 1.1f;
		std::cout << "a = 1: " << a << std::endl;
		std::cout << "b = 1.1f: " << b << std::endl;
		std::cout << "min: " << Fixed::min(a, b) << std::endl;
		std::cout << "max: " << Fixed::max(a, b) << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		a = 1.1f;
		b = 1;
		std::cout << "a = 1.1f: " << a << std::endl;
		std::cout << "b = 1: " << b << std::endl;
		std::cout << "min: " << Fixed::min(a, b) << std::endl;
		std::cout << "max: " << Fixed::max(a, b) << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		a = 1;
		b = 1;
		std::cout << "a = 1: " << a << std::endl;
		std::cout << "b = 1: " << b << std::endl;
		std::cout << "min: " << Fixed::min(a, b) << std::endl;
		std::cout << "max: " << Fixed::max(a, b) << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		a = 1.1f;
		b = 1.1f;
		std::cout << "a = 1.1f: " << a << std::endl;
		std::cout << "b = 1.1f: " << b << std::endl;
		std::cout << "min: " << Fixed::min(a, b) << std::endl;
		std::cout << "max: " << Fixed::max(a, b) << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		a = -1;
		b = 1;
		std::cout << "a = -1: " << a << std::endl;
		std::cout << "b = 1: " << b << std::endl;
		std::cout << "min: " << Fixed::min(a, b) << std::endl;
		std::cout << "max: " << Fixed::max(a, b) << std::endl;
		std::cout << SEP_SP << std::endl;
	}
	std::cout << SEP_P << std::endl;
	return (0);
}
