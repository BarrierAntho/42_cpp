/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:11:03 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/17 12:31:07 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"

#define SEP_P "####################"
#define SEP_SP "--------------------"
#define SEP_SSP "...................."

int	main( void )
{
	std::cout << "Program - Start" << std::endl;
	std::cout << SEP_P << std::endl;
	// TEST - BUREAUCRAT
	std::cout << "TEST - BUREAUCRAT" << std::endl;
	std::cout << SEP_P << std::endl;
	{
		// TEST - CONSTRUCTOR / DESTRUCTOR / OVERLOAD OPERATOR
		std::cout << "TEST - CONSTRUCTOR / DESTRUCTOR / OVERLOAD OPERATOR" << std::endl;
		std::cout << SEP_SP << std::endl;
		try
		{
			std::cout << "CONSTRUCTOR - DEFAULT" << std::endl;
			std::cout << "b0" << std::endl;
			Bureaucrat	b0;
			std::cout << SEP_SP << std::endl;

			std::cout << "CONSTRUCTOR - WITH ARGUMENT" << std::endl;
			std::cout << "b1(\"Zeus\", 150)" << std::endl;
			Bureaucrat	b1("Zeus", 150);
			std::cout << SEP_SP << std::endl;

			std::cout << "CONSTRUCTOR - COPY" << std::endl;
			std::cout << "b2(b1)" << std::endl;
			Bureaucrat	b2(b1);
			std::cout << SEP_SP << std::endl;

			std::cout << "OVERLOAD OPERATOR" << std::endl;
			std::cout << "b3 = b0" << std::endl;
			Bureaucrat	b3 = b0;
			std::cout << "b0 = b1" << std::endl;
			b0 = b1;
			std::cout << SEP_SP << std::endl;

			std::cout << "SHOW" << std::endl;
			std::cout << "b0: " << b0 << std::endl;
			std::cout << "b1: " << b1 << std::endl;
			std::cout << "b2: " << b2 << std::endl;
			std::cout << "b3: " << b3 << std::endl;
			std::cout << SEP_SP << std::endl;

			std::cout << "DESTRUCTOR" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << SEP_P << std::endl;
	{
		// TEST - GETTER
		std::cout << "TEST - GETTER" << std::endl;
		std::cout << SEP_SP << std::endl;
		try
		{
			std::cout << "CONSTRUCTOR - DEFAULT" << std::endl;
			std::cout << "b0" << std::endl;
			Bureaucrat	b0;
			std::cout << SEP_SP << std::endl;

			std::cout << "GETTER" << std::endl;
			std::cout << "b0 Name: " << b0.getName() << std::endl;
			std::cout << "b0 Grade: " << b0.getGrade() << std::endl;
			std::cout << SEP_SP << std::endl;

			std::cout << "SHOW" << std::endl;
			std::cout << "b0: " << b0 << std::endl;
			std::cout << SEP_SP << std::endl;

			std::cout << "DESTRUCTOR" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << SEP_P << std::endl;
	{
		// TEST - SUBJECT FUNCTIONS
		std::cout << "TEST - SUBJECT FUNCTIONS" << std::endl;
		std::cout << SEP_SP << std::endl;
		try
		{
			std::cout << "CONSTRUCTOR - DEFAULT" << std::endl;
			std::cout << "b0" << std::endl;
			Bureaucrat	b0;
			std::cout << SEP_SP << std::endl;

			std::cout << "DECREMENT" << std::endl;
			std::cout << "BEFORE b0: " << b0 << std::endl;
			b0.decrementGrade();
			std::cout << "AFTER b0: " << b0 << std::endl;
			std::cout << SEP_SP << std::endl;

			std::cout << "INCREMENT" << std::endl;
			std::cout << "BEFORE b0: " << b0 << std::endl;
			b0.incrementGrade();
			std::cout << "AFTER b0: " << b0 << std::endl;
			std::cout << SEP_SP << std::endl;

			std::cout << "SHOW" << std::endl;
			std::cout << "b0: " << b0 << std::endl;
			std::cout << SEP_SP << std::endl;

			std::cout << "DESTRUCTOR" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << SEP_P << std::endl;
	{
		// TEST - ERROR
		// CREATE GRADE < 1
		std::cout << "TEST - ERROR" << std::endl;
		std::cout << SEP_SP << std::endl;
		std::cout << "CREATE GRADE < 1" << std::endl;
		try
		{
			std::cout << "b1(\"Zeus\", 0)" << std::endl;
			Bureaucrat	b1("Zeus", 0);
			std::cout << "If this line appears, error is not catch" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;;
		}
		std::cout << SEP_SP << std::endl;

		// CREATE GRADE > 150
		std::cout << "CREATE GRADE > 150" << std::endl;
		try
		{
			std::cout << "b1(\"Zeus\", 151)" << std::endl;
			Bureaucrat	b1("Zeus", 151);
			std::cout << "If this line appears, error is not catch" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;;
		}
		std::cout << SEP_SP << std::endl;

		// CREATE GRADE = 1 THEN INCREMENT
		std::cout << "CREATE GRADE = 1 THEN INCREMENT" << std::endl;
		try
		{
			std::cout << "b1(\"Zeus\", 1)" << std::endl;
			Bureaucrat	b1("Zeus", 1);
			b1.incrementGrade();
			std::cout << "If this line appears, error is not catch" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;;
		}
		std::cout << SEP_SP << std::endl;

		// CREATE GRADE = 151 THEN DECREMENT
		std::cout << "CREATE GRADE = 151 THEN DECREMENT" << std::endl;
		try
		{
			std::cout << "b1(\"Zeus\", 150)" << std::endl;
			Bureaucrat	b1("Zeus", 150);
			b1.decrementGrade();
			std::cout << "If this line appears, error is not catch" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;;
		}
	}
	std::cout << SEP_P << std::endl;
	std::cout << "Program - End" << std::endl;
	return (0);
}
