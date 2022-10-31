/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:58:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/31 13:31:32 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

# define SEP_P "####################"
# define SEP_SP "--------------------"

int	main(void)
{
	// SUBJECT TEST
	{
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

		std::cout << "a is " << a.toFloat() << " as integer" << std::endl;
		std::cout << "b is " << b.toFloat() << " as integer" << std::endl;
		std::cout << "c is " << c.toFloat() << " as integer" << std::endl;
		std::cout << "d is " << d.toFloat() << " as integer" << std::endl;
	}
	std::cout << SEP_P << std::endl;
	// PERSONAL TEST
	{
		std::cout << "PERSONAL TEST" << std::endl;
		std::cout << SEP_SP << std::endl;

		Fixed f1;
		f1.show();

		Fixed f2(1);
		f2.show();
		Fixed f3(1.0f);
		f3.show();

		Fixed f4(1.123456f);
		std::cout << "f4 (original value): " << f4 << std::endl;
		std::cout << "f4 (fixed point): ";
		f4.show();
		std::cout << "f4 (int): " << f4.toInt() << std::endl;
		std::cout << "f4 (float): " << f4.toFloat() << std::endl;
	}
	return (0);
}
