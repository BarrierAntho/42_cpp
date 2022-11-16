/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:11:03 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/16 14:21:04 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"

#define SEP_P "####################"
#define SEP_SP "--------------------"

int	main( void )
{
	std::cout << "Program - Start" << std::endl;
	try
	{
		Bureaucrat	b1("Zeus", 1);
		Bureaucrat	b2("Ares", 150);
//		Bureaucrat	*b3 = new Bureaucrat("Poseidon", 1);
		Bureaucrat	b11("test", 0);
//		Bureaucrat	b12("test", 151);
//		delete(b3);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;;
	}
	std::cout << "Program - End" << std::endl;
	return (0);
}
