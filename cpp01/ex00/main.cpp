/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:23:24 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/18 15:27:47 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

#define SEP_P "####################"

int	main(void)
{
	std::cout << "Default constructor" << std::endl;
	Zombie z1;
	std::cout << SEP_P << std::endl;
	std::cout << "Constructor with argument \"name\"" << std::endl;
	Zombie z2("Poseidon");
	std::cout << SEP_P << std::endl;
	std::cout << "Function \"newZombie\" outside of the Zombie's class "
		"(must create a Zombie on the heap)" << std::endl;
	Zombie *z3 = newZombie("Hades");
	std::cout << SEP_P << std::endl;
	std::cout << "Function \"randomChump\" outside of the Zombie's class "
		"(must create a Zombie in the function only)" << std::endl;
	randomChump("Hercule");
	std::cout << SEP_P << std::endl;
	std::cout << "Test to call \"announce\"" << std::endl;
	z1.announce();
	z2.announce();
	z3->announce();
	std::cout << SEP_P << std::endl;
	std::cout << "Destructor" << std::endl;
	delete z3;
	return (0);
}
