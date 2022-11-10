/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:48:38 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 10:09:40 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define SEP_P "####################"
#define SEP_SP "--------------------"

int	main( void )
{
	std::cout << SEP_P << std::endl;
	// SUBJECT TEST
	{
		std::cout << "SUBJECT TEST" << std::endl;
		std::cout << SEP_SP << std::endl;

		const Animal	*meta = new Animal();
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
	//	i->makeSound(); //will output the cat sound!
	//	j->makeSound();
	//	meta->makeSound();
		delete(meta);
		delete(j);
		delete(i);
	}
	std::cout << SEP_P << std::endl;
	// PERSONAL TEST
	{
		std::cout << "PERSONAL TEST - Comparison" << std::endl;
		std::cout << SEP_SP << std::endl;
	}
	return (0);
}
