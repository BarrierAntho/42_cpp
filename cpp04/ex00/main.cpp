/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:48:38 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 10:48:51 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define SEP_P "####################"
#define SEP_SP "--------------------"

int	main( void )
{
	std::cout << SEP_P << std::endl;
	// SUBJECT TEST - MAIN
	{
		std::cout << "SUBJECT TEST - MAIN" << std::endl;
		std::cout << SEP_SP << std::endl;

		const Animal	*meta = new Animal();
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete(meta);
		delete(j);
		delete(i);
	}
	std::cout << SEP_P << std::endl;
	// SUBJECT TEST - WRONG CLASS
	{
		std::cout << "SUBJECT TEST - WRONG CLASS" << std::endl;
		std::cout << SEP_SP << std::endl;

		const WrongAnimal	*wrganimal = new WrongAnimal();
		const WrongAnimal	*wrgcat = new WrongCat();

		std::cout << wrgcat->getType() << " " << std::endl;
		wrgcat->makeSound(); //will output the cat sound!
		wrganimal->makeSound();
		delete(wrganimal);
		delete(wrgcat);
	}
	std::cout << SEP_P << std::endl;
	// PERSONAL TEST
	{
		std::cout << "PERSONAL TEST" << std::endl;
		std::cout << SEP_SP << std::endl;
	}
	return (0);
}
