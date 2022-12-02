/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:21:06 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/02 16:22:44 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Span.hpp"

#define SEP_P "##############################"
#define SEP_SP "------------------------------"

int	main( void )
{
	std::cout << SEP_P << std::endl;
	std::cout << "TEST - SUBJECT" << std::endl;
	std::cout << SEP_P << std::endl;
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		////////////////////
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	////////////////////
	std::cout << SEP_P << std::endl;
	std::cout << "TEST - SPAN WITH CONSTRUCTOR AND ARGUMENT BUT NOT AUTOMATIC FILLED" << std::endl;
	std::cout << SEP_SP << std::endl;
	////////////////////
	{
		std::cout << "DEFAULT CONSTRUCTOR" << std::endl;
		std::cout << "Span a(3)" << std::endl;
		Span a(3);

		std::cout << "Span [a] show in progress..." << std::endl;
		a.show();
		std::cout << "Span [a] show ended" << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "COPY CONSTRUCTOR" << std::endl;
		std::cout << "Span b(a)" << std::endl;
		Span b(a);

		std::cout << "Span [b] show in progress..." << std::endl;
		b.show();
		std::cout << "Span [b] show ended" << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "OVERLOAD OPERATOR" << std::endl;
		std::cout << "Span c = a" << std::endl;
		Span c = a;

		std::cout << "Span [c] show in progress..." << std::endl;
		c.show();
		std::cout << "Span [c] show ended" << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "MODIFICATION OF VALUE" << std::endl;
		std::cout << "a.addNumber(1)" << std::endl;
		std::cout << "a.addNumber(2)" << std::endl;
		std::cout << "a.addNumber(3)" << std::endl;
		a.addNumber(1);
		a.addNumber(2);
		a.addNumber(3);
		std::cout << "b.addNumber(1)" << std::endl;
		std::cout << "b.addNumber(50)" << std::endl;
		std::cout << "b.addNumber(100)" << std::endl;
		b.addNumber(1);
		b.addNumber(50);
		b.addNumber(100);
		std::cout << "c.addNumber(1)" << std::endl;
		std::cout << "c.addNumber(100)" << std::endl;
		std::cout << "c.addNumber(1000)" << std::endl;
		c.addNumber(1);
		c.addNumber(100);
		c.addNumber(1000);
		std::cout << "Span [a] show in progress..." << std::endl;
		a.show();
		std::cout << "Span [a] show ended" << std::endl;
		std::cout << SEP_SP << std::endl;
		std::cout << "Span [b] show in progress..." << std::endl;
		b.show();
		std::cout << "Span [b] show ended" << std::endl;
		std::cout << SEP_SP << std::endl;
		std::cout << "Span [c] show in progress..." << std::endl;
		c.show();
		std::cout << "Span [c] show ended" << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "SHORTEST VALUE" << std::endl;
		std::cout << "Span [a] : " << a.shortestSpan() << std::endl;
		std::cout << "Span [b] : " << b.shortestSpan() << std::endl;
		std::cout << "Span [c] : " << c.shortestSpan() << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "LONGEST VALUE" << std::endl;
		std::cout << "Span [a] : " << a.longestSpan() << std::endl;
		std::cout << "Span [b] : " << b.longestSpan() << std::endl;
		std::cout << "Span [c] : " << c.longestSpan() << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "ERROR" << std::endl;
		std::cout << "a.addNumber(4)" << std::endl;
		try
		{
			a.addNumber(4);
			std::cout << "Span [a] show in progress..." << std::endl;
			a.show();
			std::cout << "Span [a] show ended" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		std::cout << SEP_SP << std::endl;
		std::cout << "b.addNumber(150)" << std::endl;
		try
		{
			b.addNumber(150);
			std::cout << "Span [b] show in progress..." << std::endl;
			b.show();
			std::cout << "Span [b] show ended" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		std::cout << SEP_SP << std::endl;
		std::cout << "b.addNumber(10000)" << std::endl;
		try
		{
			c.addNumber(1000);
			std::cout << "Span [c] show in progress..." << std::endl;
			c.show();
			std::cout << "Span [c] show ended" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "DESTRUCTOR" << std::endl;
	}
	////////////////////
	std::cout << SEP_P << std::endl;
	std::cout << "TEST - SPAN WITH CONSTRUCTOR AND ARGUMENT AND AUTOMATIC FILLED" << std::endl;
	std::cout << SEP_SP << std::endl;
	////////////////////
	{
		try
		{
			std::cout << "DEFAULT CONSTRUCTOR" << std::endl;
			std::cout << "Span a(6)" << std::endl;
			Span a(6);

			std::cout << "Span [a] automatic filling in progress..." << std::endl;
			a.generateData(3);
			std::cout << "Span [a] automatic filling ended" << std::endl;
			std::cout << "Span [a] show in progress..." << std::endl;
			a.show();
			std::cout << "Span [a] show ended" << std::endl;
			std::cout << SEP_SP << std::endl;

			////////////////////////////////////////
			std::cout << "COPY CONSTRUCTOR" << std::endl;
			std::cout << "Span b(a)" << std::endl;
			Span b(a);

			std::cout << "Span [b] show in progress..." << std::endl;
			b.show();
			std::cout << "Span [b] show ended" << std::endl;
			std::cout << SEP_SP << std::endl;

			////////////////////////////////////////
			std::cout << "OVERLOAD OPERATOR" << std::endl;
			std::cout << "Span c = a" << std::endl;
			Span c = a;

			std::cout << "Span [c] show in progress..." << std::endl;
			c.show();
			std::cout << "Span [c] show ended" << std::endl;
			std::cout << SEP_SP << std::endl;

			////////////////////////////////////////
			std::cout << "MODIFICATION OF VALUE" << std::endl;
			std::cout << "a.addNumber(1)" << std::endl;
			std::cout << "a.addNumber(2)" << std::endl;
			std::cout << "a.addNumber(3)" << std::endl;
			a.addNumber(1);
			a.addNumber(2);
			a.addNumber(3);
			std::cout << "b.addNumber(1)" << std::endl;
			std::cout << "b.addNumber(50)" << std::endl;
			std::cout << "b.addNumber(100)" << std::endl;
			b.addNumber(1);
			b.addNumber(50);
			b.addNumber(100);
			std::cout << "c.addNumber(1)" << std::endl;
			std::cout << "c.addNumber(100)" << std::endl;
			std::cout << "c.addNumber(1000)" << std::endl;
			c.addNumber(1);
			c.addNumber(100);
			c.addNumber(1000);
			std::cout << "Span [a] show in progress..." << std::endl;
			a.show();
			std::cout << "Span [a] show ended" << std::endl;
			std::cout << SEP_SP << std::endl;
			std::cout << "Span [b] show in progress..." << std::endl;
			b.show();
			std::cout << "Span [b] show ended" << std::endl;
			std::cout << SEP_SP << std::endl;
			std::cout << "Span [c] show in progress..." << std::endl;
			c.show();
			std::cout << "Span [c] show ended" << std::endl;
			std::cout << SEP_SP << std::endl;

			////////////////////////////////////////
			std::cout << "SHORTEST VALUE" << std::endl;
			std::cout << "Span [a] : " << a.shortestSpan() << std::endl;
			std::cout << "Span [b] : " << b.shortestSpan() << std::endl;
			std::cout << "Span [c] : " << c.shortestSpan() << std::endl;
			std::cout << SEP_SP << std::endl;

			////////////////////////////////////////
			std::cout << "LONGEST VALUE" << std::endl;
			std::cout << "Span [a] : " << a.longestSpan() << std::endl;
			std::cout << "Span [b] : " << b.longestSpan() << std::endl;
			std::cout << "Span [c] : " << c.longestSpan() << std::endl;
			std::cout << SEP_SP << std::endl;

			////////////////////////////////////////
			std::cout << "ERROR" << std::endl;
			std::cout << "a.addNumber(4)" << std::endl;
			try
			{
				a.addNumber(4);
				std::cout << "Span [a] show in progress..." << std::endl;
				a.show();
				std::cout << "Span [a] show ended" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cerr << "Error: " << e.what() << std::endl;
			}
			std::cout << SEP_SP << std::endl;
			std::cout << "b.addNumber(150)" << std::endl;
			try
			{
				b.addNumber(150);
				std::cout << "Span [b] show in progress..." << std::endl;
				b.show();
				std::cout << "Span [b] show ended" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cerr << "Error: " << e.what() << std::endl;
			}
			std::cout << SEP_SP << std::endl;
			std::cout << "b.addNumber(10000)" << std::endl;
			try
			{
				c.addNumber(1000);
				std::cout << "Span [c] show in progress..." << std::endl;
				c.show();
				std::cout << "Span [c] show ended" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cerr << "Error: " << e.what() << std::endl;
			}
			std::cout << SEP_SP << std::endl;

			////////////////////////////////////////
			std::cout << "DESTRUCTOR" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	return (0);
}
