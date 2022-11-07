/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:48:38 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/08 00:13:51 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"

int	main( void )
{
	const Animal	*meta = new Animal();

	std::cout << "meta: " << meta << std::endl;
	delete(meta);
//	const Animal* j = new Dog();
//	const Animal* i = new Cat();

//	std::cout << j->getType() << " " << std::endl;
//	std::cout << i->getType() << " " << std::endl;
//	i->makeSound(); //will output the cat sound!
//	j->makeSound();
//	meta->makeSound();
	
	return (0);
}
