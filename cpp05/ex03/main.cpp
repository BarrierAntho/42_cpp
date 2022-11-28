/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:11:03 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/28 09:12:06 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#define SEP_P "####################"
#define SEP_SP "--------------------"
#define SEP_SSP "...................."

int	main( void )
{
	std::cout << "Program - Start" << std::endl;
	std::cout << SEP_P << std::endl;
	// TEST - BUREAUCRAT
//	std::cout << "TEST - BUREAUCRAT" << std::endl;
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - CONSTRUCTOR / DESTRUCTOR / OVERLOAD OPERATOR
//		std::cout << "TEST - CONSTRUCTOR / DESTRUCTOR / OVERLOAD OPERATOR" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		try
//		{
//			std::cout << "CONSTRUCTOR - DEFAULT" << std::endl;
//			std::cout << "b0" << std::endl;
//			Bureaucrat	b0;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "CONSTRUCTOR - WITH ARGUMENT" << std::endl;
//			std::cout << "b1(\"Zeus\", 150)" << std::endl;
//			Bureaucrat	b1("Zeus", 150);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "CONSTRUCTOR - COPY" << std::endl;
//			std::cout << "b2(b1)" << std::endl;
//			Bureaucrat	b2(b1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "OVERLOAD OPERATOR" << std::endl;
//			std::cout << "b3 = b0" << std::endl;
//			Bureaucrat	b3 = b0;
//			std::cout << "b0 = b1" << std::endl;
//			b0 = b1;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "b0: " << b0 << std::endl;
//			std::cout << "b1: " << b1 << std::endl;
//			std::cout << "b2: " << b2 << std::endl;
//			std::cout << "b3: " << b3 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//	}
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - GETTER
//		std::cout << "TEST - GETTER" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		try
//		{
//			std::cout << "CONSTRUCTOR - DEFAULT" << std::endl;
//			std::cout << "b0" << std::endl;
//			Bureaucrat	b0;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "GETTER" << std::endl;
//			std::cout << "b0 Name: " << b0.getName() << std::endl;
//			std::cout << "b0 Grade: " << b0.getGrade() << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "b0: " << b0 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//	}
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - SUBJECT FUNCTIONS
//		std::cout << "TEST - SUBJECT FUNCTIONS" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		try
//		{
//			std::cout << "CONSTRUCTOR - DEFAULT" << std::endl;
//			std::cout << "b0" << std::endl;
//			Bureaucrat	b0;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DECREMENT" << std::endl;
//			std::cout << "BEFORE b0: " << b0 << std::endl;
//			b0.decrementGrade();
//			std::cout << "AFTER b0: " << b0 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "INCREMENT" << std::endl;
//			std::cout << "BEFORE b0: " << b0 << std::endl;
//			b0.incrementGrade();
//			std::cout << "AFTER b0: " << b0 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "b0: " << b0 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//	}
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - ERROR
//		// CREATE GRADE < 1
//		std::cout << "TEST - ERROR" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		std::cout << "CREATE GRADE < 1" << std::endl;
//		try
//		{
//			std::cout << "b1(\"Zeus\", 0)" << std::endl;
//			Bureaucrat	b1("Zeus", 0);
//			std::cout << "If this line appears, error is not catch" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;;
//		}
//		std::cout << SEP_SP << std::endl;
//
//		// CREATE GRADE > 150
//		std::cout << "CREATE GRADE > 150" << std::endl;
//		try
//		{
//			std::cout << "b1(\"Zeus\", 151)" << std::endl;
//			Bureaucrat	b1("Zeus", 151);
//			std::cout << "If this line appears, error is not catch" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;;
//		}
//		std::cout << SEP_SP << std::endl;
//
//		// CREATE GRADE = 1 THEN INCREMENT
//		std::cout << "CREATE GRADE = 1 THEN INCREMENT" << std::endl;
//		try
//		{
//			std::cout << "b1(\"Zeus\", 1)" << std::endl;
//			Bureaucrat	b1("Zeus", 1);
//			b1.incrementGrade();
//			std::cout << "If this line appears, error is not catch" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;;
//		}
//		std::cout << SEP_SP << std::endl;
//
//		// CREATE GRADE = 151 THEN DECREMENT
//		std::cout << "CREATE GRADE = 151 THEN DECREMENT" << std::endl;
//		try
//		{
//			std::cout << "b1(\"Zeus\", 150)" << std::endl;
//			Bureaucrat	b1("Zeus", 150);
//			b1.decrementGrade();
//			std::cout << "If this line appears, error is not catch" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;;
//		}
//	}
//	std::cout << SEP_P << std::endl;
	// TEST - FORM
//	std::cout << "TEST - FORM" << std::endl;
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - CONSTRUCTOR / DESTRUCTOR / OVERLOAD OPERATOR
//		std::cout << "TEST - CONSTRUCTOR / DESTRUCTOR / OVERLOAD OPERATOR" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		try
//		{
//			std::cout << "CONSTRUCTOR - DEFAULT" << std::endl;
//			std::cout << "f0" << std::endl;
//			Form	f0;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "CONSTRUCTOR - WITH ARGUMENT" << std::endl;
//			std::cout << "f1(\"Music staff\", 150, 150)" << std::endl;
//			Form	f1("Music staff", 150, 150);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "CONSTRUCTOR - COPY" << std::endl;
//			std::cout << "f2(f1)" << std::endl;
//			Form	f2(f1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "OVERLOAD OPERATOR" << std::endl;
//			std::cout << "f3 = f0" << std::endl;
//			Form	f3 = f0;
//			std::cout << "f0 = f1" << std::endl;
//			f0 = f1;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f0: " << f0 << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << "f2: " << f2 << std::endl;
//			std::cout << "f3: " << f3 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//	}
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - GETTER
//		std::cout << "TEST - GETTER" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		try
//		{
//			std::cout << "CONSTRUCTOR - DEFAULT" << std::endl;
//			std::cout << "f0" << std::endl;
//			Form	f0;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "GETTER" << std::endl;
//			std::cout << "f0 Name: " << f0.getName() << std::endl;
//			std::cout << "f0 status \"isSigned\": " << f0.getIsSigned() << std::endl;
//			std::cout << "f0 grade to sign: " << f0.getGradeToSign() << std::endl;
//			std::cout << "f0 grade to exec: " << f0.getGradeToExec() << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f0: " << f0 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//	}
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - SUBJECT FUNCTIONS
//		std::cout << "TEST - SUBJECT FUNCTIONS" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		try
//		{
//			std::cout << "BUREAUCRAT CONSTRUCTOR" << std::endl;
//			std::cout << "b1(\"Zeus\", 150)" << std::endl;
//			Bureaucrat	b1("Zeus", 150);
//			std::cout << "b2(\"Ares\", 1)" << std::endl;
//			Bureaucrat	b2("Ares", 1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM CONSTRUCTOR" << std::endl;
//			std::cout << "f1(\"Music staff\", 150, 150)" << std::endl;
//			Form	f1("Music staff", 150, 150);
//			std::cout << "f2(\"Music staff\", 150, 150)" << std::endl;
//			Form	f2("Music staff", 150, 150);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM BESIGNED" << std::endl;
//			std::cout << "BEFORE f1: " << f1 << std::endl;
//			f1.beSigned(b1);
//			std::cout << "AFTER f1: " << f1 << std::endl;
//			std::cout << "BEFORE f2: " << f2 << std::endl;
//			f2.beSigned(b2);
//			std::cout << "AFTER f2: " << f2 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//	}
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - ERROR
//		// CREATE FORM GRADE TO SIGN < 1
//		std::cout << "TEST - ERROR" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		std::cout << "CREATE GRADE TO SIGN < 1" << std::endl;
//		try
//		{
//			std::cout << "f1(\"Music staff\", 0, 150)" << std::endl;
//			Form	f1("Music staff", 0, 150);
//			std::cout << "If this line appears, error is not catch" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;;
//		}
//		std::cout << SEP_SP << std::endl;
//
//		// CREATE FORM GRADE TO SIGN > 150
//		std::cout << "CREATE GRADE TO SIGN > 150" << std::endl;
//		try
//		{
//			std::cout << "f1(\"Music staff\", 151, 150)" << std::endl;
//			Form	f1("Music staff", 151, 150);
//			std::cout << "If this line appears, error is not catch" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;;
//		}
//		std::cout << SEP_SP << std::endl;
//
//		std::cout << "CREATE GRADE TO EXEC < 1" << std::endl;
//		try
//		{
//			std::cout << "f1(\"Music staff\", 150, 0)" << std::endl;
//			Form	f1("Music staff", 150, 0);
//			std::cout << "If this line appears, error is not catch" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;;
//		}
//		std::cout << SEP_SP << std::endl;
//
//		// CREATE FORM GRADE TO EXEC > 150
//		std::cout << "CREATE GRADE TO EXCEC > 150" << std::endl;
//		try
//		{
//			std::cout << "f1(\"Music staff\", 150, 151)" << std::endl;
//			Form	f1("Music staff", 150, 151);
//			std::cout << "If this line appears, error is not catch" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;;
//		}
//		std::cout << SEP_SP << std::endl;
//
//		// BESIGNED FORM WITH GRADE TO SIGN > BUREAUCRATE GRADE
//		std::cout << "BESIGNED FORM WITH GRADE TO SIGN > BUREAUCRATE GRADE" << std::endl;
//		try
//		{
//			std::cout << "BUREAUCRAT CONSTRUCTOR" << std::endl;
//			std::cout << "b1(\"Zeus\", 150)" << std::endl;
//			Bureaucrat	b1("Zeus", 150);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM CONSTRUCTOR" << std::endl;
//			std::cout << "f1(\"Music staff\", 1, 1)" << std::endl;
//			Form	f1("Music staff", 1, 1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "BESIGNED" << std::endl;
//			std::cout << "BEFORE f1: " << f1 << std::endl;
//			f1.beSigned(b1);
//			std::cout << "AFTER f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//		std::cout << SEP_SP << std::endl;
//	}
//	std::cout << SEP_P << std::endl;
//	std::cout << "TEST - SHRUBBERY FORM" << std::endl;
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - CONSTRUCTOR / DESTRUCTOR / OVERLOAD OPERATOR
//		std::cout << "TEST - CONSTRUCTOR / DESTRUCTOR / OVERLOAD OPERATOR" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		try
//		{
//			std::cout << "CONSTRUCTOR - DEFAULT" << std::endl;
//			std::cout << "f0" << std::endl;
//			ShrubberyCreationForm	f0;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "CONSTRUCTOR - WITH ARGUMENT" << std::endl;
//			std::cout << "f1(\"Poseidon\")" << std::endl;
//			ShrubberyCreationForm	f1("Poseidon");
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "CONSTRUCTOR - COPY" << std::endl;
//			std::cout << "f2(f1)" << std::endl;
//			ShrubberyCreationForm	f2(f1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "OVERLOAD OPERATOR" << std::endl;
//			std::cout << "f3 = f0" << std::endl;
//			ShrubberyCreationForm	f3 = f0;
//			std::cout << "f0 = f1" << std::endl;
//			f0 = f1;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f0: " << f0 << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << "f2: " << f2 << std::endl;
//			std::cout << "f3: " << f3 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//	}
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - GETTER
//		std::cout << "TEST - GETTER" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		try
//		{
//			std::cout << "CONSTRUCTOR - DEFAULT" << std::endl;
//			std::cout << "f0" << std::endl;
//			ShrubberyCreationForm	f0;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "GETTER" << std::endl;
//			std::cout << "f0 Name: " << f0.getName() << std::endl;
//			std::cout << "f0 status \"isSigned\": " << f0.getIsSigned() << std::endl;
//			std::cout << "f0 grade to sign: " << f0.getGradeToSign() << std::endl;
//			std::cout << "f0 grade to exec: " << f0.getGradeToExec() << std::endl;
//			std::cout << "f0 target: " << f0.getTarget() << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f0: " << f0 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//	}
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - SUBJECT FUNCTIONS
//		std::cout << "TEST - SUBJECT FUNCTIONS" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		try
//		{
//			std::cout << "BUREAUCRAT CONSTRUCTOR" << std::endl;
//			std::cout << "b1(\"Zeus\", 1)" << std::endl;
//			Bureaucrat	b1("Zeus", 1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM CONSTRUCTOR" << std::endl;
//			std::cout << "f1(\"Poseidon\")" << std::endl;
//			ShrubberyCreationForm	f1("Poseidon");
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM BESIGNED" << std::endl;
//			std::cout << "BEFORE f1: " << f1 << std::endl;
//			f1.beSigned(b1);
//			std::cout << "AFTER f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "BUREAUCRAT EXECUTE" << std::endl;
//			std::cout << "b1.executeForm(f1)" << std::endl;
//			b1.executeForm(f1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//	}
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - ERROR
//		// FORM NOT SIGNED
//		std::cout << "TEST - ERROR" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		std::cout << "TEST - FORM NOT SIGNED" << std::endl;
//		try
//		{
//			std::cout << "BUREAUCRAT CONSTRUCTOR" << std::endl;
//			std::cout << "b1(\"Zeus\", 1)" << std::endl;
//			Bureaucrat	b1("Zeus", 1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM CONSTRUCTOR" << std::endl;
//			std::cout << "f1(\"Poseidon\")" << std::endl;
//			ShrubberyCreationForm	f1("Poseidon");
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM EXECUTE" << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << "b1.executeForm(11)" << std::endl;
//			b1.executeForm(f1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//		std::cout << SEP_SP << std::endl;
//
//		// BUREAUCRAT WITH LOWER GRADE THAN FORM
//		std::cout << "TEST - BUREAUCRAT WITH LOWER GRADE THAN FORM" << std::endl;
//		try
//		{
//			std::cout << "BUREAUCRAT CONSTRUCTOR" << std::endl;
//			std::cout << "b1(\"Zeus\", 1)" << std::endl;
//			Bureaucrat	b1("Zeus", 1);
//			std::cout << "b2(\"Ares\", 150)" << std::endl;
//			Bureaucrat	b2("Ares", 150);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM CONSTRUCTOR" << std::endl;
//			std::cout << "f1(\"Poseidon\")" << std::endl;
//			ShrubberyCreationForm	f1("Poseidon");
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM BESIGNED" << std::endl;
//			std::cout << "BEFORE f1: " << f1 << std::endl;
//			f1.beSigned(b1);
//			std::cout << "AFTER f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "BUREAUCRAT EXECUTE" << std::endl;
//			std::cout << "b2.executeForm(f1)" << std::endl;
//			b2.executeForm(f1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//		std::cout << SEP_SP << std::endl;
//	}
//	std::cout << SEP_P << std::endl;
//	std::cout << "TEST - ROBOTOMY FORM" << std::endl;
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - CONSTRUCTOR / DESTRUCTOR / OVERLOAD OPERATOR
//		std::cout << "TEST - CONSTRUCTOR / DESTRUCTOR / OVERLOAD OPERATOR" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		try
//		{
//			std::cout << "CONSTRUCTOR - DEFAULT" << std::endl;
//			std::cout << "f0" << std::endl;
//			RobotomyRequestForm	f0;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "CONSTRUCTOR - WITH ARGUMENT" << std::endl;
//			std::cout << "f1(\"Poseidon\")" << std::endl;
//			RobotomyRequestForm	f1("Poseidon");
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "CONSTRUCTOR - COPY" << std::endl;
//			std::cout << "f2(f1)" << std::endl;
//			RobotomyRequestForm	f2(f1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "OVERLOAD OPERATOR" << std::endl;
//			std::cout << "f3 = f0" << std::endl;
//			RobotomyRequestForm	f3 = f0;
//			std::cout << "f0 = f1" << std::endl;
//			f0 = f1;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f0: " << f0 << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << "f2: " << f2 << std::endl;
//			std::cout << "f3: " << f3 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//	}
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - GETTER
//		std::cout << "TEST - GETTER" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		try
//		{
//			std::cout << "CONSTRUCTOR - DEFAULT" << std::endl;
//			std::cout << "f0" << std::endl;
//			RobotomyRequestForm	f0;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "GETTER" << std::endl;
//			std::cout << "f0 Name: " << f0.getName() << std::endl;
//			std::cout << "f0 status \"isSigned\": " << f0.getIsSigned() << std::endl;
//			std::cout << "f0 grade to sign: " << f0.getGradeToSign() << std::endl;
//			std::cout << "f0 grade to exec: " << f0.getGradeToExec() << std::endl;
//			std::cout << "f0 target: " << f0.getTarget() << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f0: " << f0 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//	}
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - SUBJECT FUNCTIONS
//		std::cout << "TEST - SUBJECT FUNCTIONS" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		try
//		{
//			std::cout << "BUREAUCRAT CONSTRUCTOR" << std::endl;
//			std::cout << "b1(\"Zeus\", 1)" << std::endl;
//			Bureaucrat	b1("Zeus", 1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM CONSTRUCTOR" << std::endl;
//			std::cout << "f1(\"Poseidon\")" << std::endl;
//			RobotomyRequestForm	f1("Poseidon");
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM BESIGNED" << std::endl;
//			std::cout << "BEFORE f1: " << f1 << std::endl;
//			f1.beSigned(b1);
//			std::cout << "AFTER f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "BUREAUCRAT EXECUTE" << std::endl;
//			std::cout << "b1.executeForm(f1)" << std::endl;
//			b1.executeForm(f1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//	}
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - ERROR
//		// FORM NOT SIGNED
//		std::cout << "TEST - ERROR" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		std::cout << "TEST - FORM NOT SIGNED" << std::endl;
//		try
//		{
//			std::cout << "BUREAUCRAT CONSTRUCTOR" << std::endl;
//			std::cout << "b1(\"Zeus\", 1)" << std::endl;
//			Bureaucrat	b1("Zeus", 1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM CONSTRUCTOR" << std::endl;
//			std::cout << "f1(\"Poseidon\")" << std::endl;
//			RobotomyRequestForm	f1("Poseidon");
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM EXECUTE" << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << "b1.executeForm(11)" << std::endl;
//			b1.executeForm(f1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//		std::cout << SEP_SP << std::endl;
//
//		// BUREAUCRAT WITH LOWER GRADE THAN FORM
//		std::cout << "TEST - BUREAUCRAT WITH LOWER GRADE THAN FORM" << std::endl;
//		try
//		{
//			std::cout << "BUREAUCRAT CONSTRUCTOR" << std::endl;
//			std::cout << "b1(\"Zeus\", 1)" << std::endl;
//			Bureaucrat	b1("Zeus", 1);
//			std::cout << "b2(\"Ares\", 150)" << std::endl;
//			Bureaucrat	b2("Ares", 150);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM CONSTRUCTOR" << std::endl;
//			std::cout << "f1(\"Poseidon\")" << std::endl;
//			RobotomyRequestForm	f1("Poseidon");
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM BESIGNED" << std::endl;
//			std::cout << "BEFORE f1: " << f1 << std::endl;
//			f1.beSigned(b1);
//			std::cout << "AFTER f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "BUREAUCRAT EXECUTE" << std::endl;
//			std::cout << "b2.executeForm(f1)" << std::endl;
//			b2.executeForm(f1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//		std::cout << SEP_SP << std::endl;
//	}
//	std::cout << SEP_P << std::endl;
//	std::cout << "TEST - PRESIDENTIAL PARDON FORM" << std::endl;
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - CONSTRUCTOR / DESTRUCTOR / OVERLOAD OPERATOR
//		std::cout << "TEST - CONSTRUCTOR / DESTRUCTOR / OVERLOAD OPERATOR" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		try
//		{
//			std::cout << "CONSTRUCTOR - DEFAULT" << std::endl;
//			std::cout << "f0" << std::endl;
//			PresidentialPardonForm	f0;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "CONSTRUCTOR - WITH ARGUMENT" << std::endl;
//			std::cout << "f1(\"Poseidon\")" << std::endl;
//			PresidentialPardonForm	f1("Poseidon");
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "CONSTRUCTOR - COPY" << std::endl;
//			std::cout << "f2(f1)" << std::endl;
//			PresidentialPardonForm	f2(f1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "OVERLOAD OPERATOR" << std::endl;
//			std::cout << "f3 = f0" << std::endl;
//			PresidentialPardonForm	f3 = f0;
//			std::cout << "f0 = f1" << std::endl;
//			f0 = f1;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f0: " << f0 << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << "f2: " << f2 << std::endl;
//			std::cout << "f3: " << f3 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//	}
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - GETTER
//		std::cout << "TEST - GETTER" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		try
//		{
//			std::cout << "CONSTRUCTOR - DEFAULT" << std::endl;
//			std::cout << "f0" << std::endl;
//			PresidentialPardonForm	f0;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "GETTER" << std::endl;
//			std::cout << "f0 Name: " << f0.getName() << std::endl;
//			std::cout << "f0 status \"isSigned\": " << f0.getIsSigned() << std::endl;
//			std::cout << "f0 grade to sign: " << f0.getGradeToSign() << std::endl;
//			std::cout << "f0 grade to exec: " << f0.getGradeToExec() << std::endl;
//			std::cout << "f0 target: " << f0.getTarget() << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f0: " << f0 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//	}
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - SUBJECT FUNCTIONS
//		std::cout << "TEST - SUBJECT FUNCTIONS" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		try
//		{
//			std::cout << "BUREAUCRAT CONSTRUCTOR" << std::endl;
//			std::cout << "b1(\"Zeus\", 1)" << std::endl;
//			Bureaucrat	b1("Zeus", 1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM CONSTRUCTOR" << std::endl;
//			std::cout << "f1(\"Poseidon\")" << std::endl;
//			PresidentialPardonForm	f1("Poseidon");
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM BESIGNED" << std::endl;
//			std::cout << "BEFORE f1: " << f1 << std::endl;
//			f1.beSigned(b1);
//			std::cout << "AFTER f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "BUREAUCRAT EXECUTE" << std::endl;
//			std::cout << "b1.executeForm(f1)" << std::endl;
//			b1.executeForm(f1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//	}
//	std::cout << SEP_P << std::endl;
//	{
//		// TEST - ERROR
//		// FORM NOT SIGNED
//		std::cout << "TEST - ERROR" << std::endl;
//		std::cout << SEP_SP << std::endl;
//		std::cout << "TEST - FORM NOT SIGNED" << std::endl;
//		try
//		{
//			std::cout << "BUREAUCRAT CONSTRUCTOR" << std::endl;
//			std::cout << "b1(\"Zeus\", 1)" << std::endl;
//			Bureaucrat	b1("Zeus", 1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM CONSTRUCTOR" << std::endl;
//			std::cout << "f1(\"Poseidon\")" << std::endl;
//			PresidentialPardonForm	f1("Poseidon");
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM EXECUTE" << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << "b1.executeForm(11)" << std::endl;
//			b1.executeForm(f1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//		std::cout << SEP_SP << std::endl;
//
//		// BUREAUCRAT WITH LOWER GRADE THAN FORM
//		std::cout << "TEST - BUREAUCRAT WITH LOWER GRADE THAN FORM" << std::endl;
//		try
//		{
//			std::cout << "BUREAUCRAT CONSTRUCTOR" << std::endl;
//			std::cout << "b1(\"Zeus\", 1)" << std::endl;
//			Bureaucrat	b1("Zeus", 1);
//			std::cout << "b2(\"Ares\", 150)" << std::endl;
//			Bureaucrat	b2("Ares", 150);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM CONSTRUCTOR" << std::endl;
//			std::cout << "f1(\"Poseidon\")" << std::endl;
//			PresidentialPardonForm	f1("Poseidon");
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "FORM BESIGNED" << std::endl;
//			std::cout << "BEFORE f1: " << f1 << std::endl;
//			f1.beSigned(b1);
//			std::cout << "AFTER f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "BUREAUCRAT EXECUTE" << std::endl;
//			std::cout << "b2.executeForm(f1)" << std::endl;
//			b2.executeForm(f1);
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "SHOW" << std::endl;
//			std::cout << "f1: " << f1 << std::endl;
//			std::cout << SEP_SP << std::endl;
//
//			std::cout << "DESTRUCTOR" << std::endl;
//		}
//		catch (std::exception &e)
//		{
//			std::cerr << e.what() << std::endl;
//		}
//		std::cout << SEP_SP << std::endl;
//	}
	// TEST - INTERN
	std::cout << "TEST - INTERN" << std::endl;
	std::cout << SEP_P << std::endl;
	{
		// TEST - CONSTRUCTOR / DESTRUCTOR / OVERLOAD OPERATOR
		std::cout << "TEST - CONSTRUCTOR / DESTRUCTOR / OVERLOAD OPERATOR" << std::endl;
		std::cout << SEP_SP << std::endl;
		try
		{
			std::cout << "CONSTRUCTOR - DEFAULT" << std::endl;
			std::cout << "i0" << std::endl;
			Intern	i0;
			std::cout << SEP_SP << std::endl;

			std::cout << "CONSTRUCTOR - COPY" << std::endl;
			std::cout << "i1(i0)" << std::endl;
			Intern	i1(i0);
			std::cout << SEP_SP << std::endl;

			std::cout << "OVERLOAD OPERATOR" << std::endl;
			std::cout << "i2 = i0" << std::endl;
			Intern	i2 = i0;
			std::cout << SEP_SP << std::endl;

			std::cout << "SHOW" << std::endl;
			std::cout << "i0: " << i0 << std::endl;
			std::cout << "i1: " << i1 << std::endl;
			std::cout << "i2: " << i2 << std::endl;
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
			Form	*f1;
			f1 = NULL;
			Form	*f2;
			f2 = NULL;
			Form	*f3;
			f3 = NULL;

			std::cout << "INTERN CONSTRUCTOR" << std::endl;
			std::cout << "i0" << std::endl;
			Intern	i0;
			std::cout << SEP_SP << std::endl;

			std::cout << "ADRESS OF FORM" << std::endl;
			std::cout << "f1: " << (void *)f1 << std::endl;
			std::cout << "f2: " << (void *)f2 << std::endl;
			std::cout << "f3: " << (void *)f3 << std::endl;
			std::cout << SEP_SP << std::endl;

			std::cout << "INTERN FORM: SHRUBBERY" << std::endl;
			std::cout << "i0.makeform(FRM_SHRU_DFT_NAME, \"Test1\")" << std::endl;
			f1 = i0.makeForm(FRM_SHRU_DFT_NAME, "Test1");
			std::cout << SEP_SP << std::endl;

			std::cout << "INTERN FORM: ROBOTOMY" << std::endl;
			std::cout << "i0.makeform(FRM_ROBOT_DFT_NAME, \"Test2\")" << std::endl;
			f2 = i0.makeForm(FRM_ROBOT_DFT_NAME, "Test2");
			std::cout << SEP_SP << std::endl;

			std::cout << "INTERN FORM: PRESIDENTIAL" << std::endl;
			std::cout << "i0.makeform(FRM_PRE_DFT_NAME, \"Test3\")" << std::endl;
			f3 = i0.makeForm(FRM_PRES_DFT_NAME, "Test3");
			std::cout << SEP_SP << std::endl;

			std::cout << "ADRESS OF FORM" << std::endl;
			std::cout << "f1: " << (void *)f1 << std::endl;
			std::cout << "f2: " << (void *)f2 << std::endl;
			std::cout << "f3: " << (void *)f3 << std::endl;
			std::cout << SEP_SP << std::endl;

			std::cout << "SHOW FORM" << std::endl;
			std::cout << "f1: " << *f1 << std::endl;
			std::cout << "f1 target: " << f1->getTarget() << std::endl;
			std::cout << "f2: " << *f2 << std::endl;
			std::cout << "f2 target: " << f2->getTarget() << std::endl;
			std::cout << "f3: " << *f3 << std::endl;
			std::cout << "f3 target: " << f3->getTarget() << std::endl;
			std::cout << SEP_SP << std::endl;

			std::cout << "DESTRUCTOR" << std::endl;
			delete(f1);
			delete(f2);
			delete(f3);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << SEP_P << std::endl;
	{
		// TEST - ERROR
		// FORM DOES NOT EXIST
		std::cout << "TEST - ERROR" << std::endl;
		std::cout << SEP_SP << std::endl;
		std::cout << "TEST - FORM DOES NOT EXIST" << std::endl;
		try
		{
			Form	*f1;
			f1 = NULL;

			std::cout << "INTERN CONSTRUCTOR" << std::endl;
			std::cout << "i0" << std::endl;
			Intern	i0;
			std::cout << SEP_SP << std::endl;

			std::cout << "ADRESS OF FORM" << std::endl;
			std::cout << "f1: " << (void *)f1 << std::endl;
			std::cout << SEP_SP << std::endl;

			std::cout << "i0.makeform(\"Not_Exists\", \"Test1\")" << std::endl;
			f1 = i0.makeForm("Not_Exists", "Test1");
			std::cout << SEP_SP << std::endl;

			std::cout << "DESTRUCTOR" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << SEP_SP << std::endl;
	}
	std::cout << SEP_P << std::endl;

	std::cout << SEP_P << std::endl;
	std::cout << "Program - End" << std::endl;
	return (0);
}
