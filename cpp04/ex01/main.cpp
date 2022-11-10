/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:48:38 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 21:55:06 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define SEP_P "####################"
#define SEP_SP "--------------------"

int	main( void )
{
	std::cout << SEP_P << std::endl;
	// SUBJECT TEST - MAIN
	{
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		delete(j);//should not create a leak
		delete(i);
	}
	std::cout << SEP_P << std::endl;
	// PERSONAL TEST
	{
		std::cout << "PERSONAL TEST" << std::endl;
		std::cout << SEP_SP << std::endl;
	}
	return (0);
}
