/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:21:06 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/02 14:36:28 by abarrier         ###   ########.fr       */
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
	////////////////////
	std::cout << SEP_P << std::endl;
	std::cout << "TEST - PERSONNAL" << std::endl;
	std::cout << SEP_P << std::endl;
	{
		Span sp = Span(5);

		sp.show();
		generateData(sp);
		sp.show();
	}
	return (0);
}
