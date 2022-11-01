/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:58:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/01 10:49:20 by abarrier         ###   ########.fr       */
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
		Fixed a;
		Fixed const b( 10 );
		Fixed const c( 42.42f );
		Fixed const d( b );

		a = Fixed( 1234.4321f );
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;

		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;

		std::cout << "a is " << a.toFloat() << " as float" << std::endl;
		std::cout << "b is " << b.toFloat() << " as float" << std::endl;
		std::cout << "c is " << c.toFloat() << " as float" << std::endl;
		std::cout << "d is " << d.toFloat() << " as float" << std::endl;
	}
	std::cout << SEP_P << std::endl;
	// PERSONAL TEST
	{
		std::cout << "PERSONAL TEST" << std::endl;
		std::cout << SEP_SP << std::endl;

		Fixed f1;
		std::cout << "f1 (original value): " << f1 << std::endl;
		std::cout << "f1 (fixed point): ";
		f1.show();
		std::cout << "f1 (int): " << f1.toInt() << std::endl;
		std::cout << "f1 (float): " << f1.toFloat() << std::endl;

		Fixed f2(1);
		std::cout << "f2 (original value): " << f2 << std::endl;
		std::cout << "f2 (fixed point): ";
		f2.show();
		std::cout << "f2 (int): " << f2.toInt() << std::endl;
		std::cout << "f2 (float): " << f2.toFloat() << std::endl;

		Fixed f3(1.0f);
		std::cout << "f3 (original value): " << f3 << std::endl;
		std::cout << "f3 (fixed point): ";
		f3.show();
		std::cout << "f3 (int): " << f3.toInt() << std::endl;
		std::cout << "f3 (float): " << f3.toFloat() << std::endl;

		//Fixed f4( 1.123456f );
		Fixed const f4( 1.1f );
		std::cout << "f4 (original value): " << f4 << std::endl;
		std::cout << "f4 (fixed point): ";
		f4.show();
		std::cout << "f4 (int): " << f4.toInt() << std::endl;
		std::cout << "f4 (float): " << f4.toFloat() << std::endl;
	}
	return (0);
}
