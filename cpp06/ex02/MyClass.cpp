/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyClass.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:05:59 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/29 17:46:55 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyClass.hpp"

Base::~Base( void ) {};

Base	*generate(void)
{
	int	a;

	srand(time(NULL));
	a = rand()%(3-1+1) + 1;
//	if (a == 1)
//		return (reinterpret_cast<Base *>(new A));
//	else if (a == 2)
//		return (reinterpret_cast<Base *>(new B));
//	else
//		return (reinterpret_cast<Base *>(new C));
	if (a == 1)
		return (static_cast<Base *>(new A));
	else if (a == 2)
		return (static_cast<Base *>(new B));
	else
		return (static_cast<Base *>(new C));
}
void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "That is A class object" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "That is B class object" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "That is C class object" << std::endl;
	else
		std::cout << "What is this class object ??" << std::endl;
}

void	identify(Base &p)
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
