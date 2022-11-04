/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:08:40 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/04 10:01:51 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

#define SEP_P "####################"
#define SEP_SP "--------------------"

int	main( void )
{
	// EXERCICE 00
	std::cout << "EXERCICE 00" << std::endl;
	std::cout << SEP_P << std::endl;

	// CONSTRUCTOR
	std::cout << "Default constructor with name argument" << std::endl;
	ClapTrap	cp1("Zeus");
	std::cout << "Copy constructor" << std::endl;
	ClapTrap	cp2(cp1);
	std::cout << SEP_P << std::endl;

	// SETTER
	std::cout << "Function \"SETTER\" to change attributes of the copied constructor object" << std::endl;
	std::cout << "Before: " << cp2;
	cp2.setName("Hades");
	cp2.setHp(5);
	cp2.setMp(20);
	cp2.setDps(200);
	std::cout << " --> After: " << cp2 << std::endl;;
	std::cout << SEP_P << std::endl;

	// SUBJECT FUNCTIONS
	std::cout << "Subject functions" << std::endl;
	cp1.attack(cp2.getName());
	cp1.beRepaired(5);
	cp1.takeDamage(10);
	std::cout << "Status of the " << cp1 << std::endl;
	std::cout << SEP_SP << std::endl;

	cp2.attack(cp1.getName());
	cp2.takeDamage(10);
	cp2.beRepaired(5);
	std::cout << "Status of the " << cp2 << std::endl;
	std::cout << SEP_P << std::endl;

	// DESTRUCTOR
	std::cout << "Destructor" << std::endl;
	return (0);
}
