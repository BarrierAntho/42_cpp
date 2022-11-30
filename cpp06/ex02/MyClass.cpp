/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyClass.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:05:59 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/30 08:29:53 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyClass.hpp"

Base::~Base( void ) {};

Base	*generate( void )
{
	int	a;

	srand(time(NULL));
	a = rand()%(3-1+1) + 1;
	if (a == 1)
		return (static_cast<Base *>(new A)); // upcast derived class to parent class
	else if (a == 2)
		return (static_cast<Base *>(new B)); // upcast derived class to parent class
	else
		return (static_cast<Base *>(new C)); // upcast derived class to parent class
}

void	identify( Base *p )
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "That is A class object" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "That is B class object" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "That is C class object" << std::endl;
}

void	identify( Base &p )
{
	try
	{
		(void) dynamic_cast<A &>(p);
		std::cout << "That is A class object" << std::endl;
	}
	catch (std::exception &e){}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "That is B class object" << std::endl;
	}
	catch (std::exception &e){}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "That is C class object" << std::endl;
	}
	catch (std::exception &e){}
}
