/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:08:40 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/04 13:54:00 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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

	// EX01: SCAVTRAP
	std::cout << "EXERCICE 01" << std::endl;
	std::cout << SEP_P << std::endl;

	// CONSTRUCTOR
	std::cout << "Default constructor with name argument" << std::endl;
	ScavTrap	cv1("Hercule");
	std::cout << "Copy constructor" << std::endl;
	ScavTrap	cv2(cv1);
	std::cout << SEP_P << std::endl;

	// SETTER
	std::cout << "Function \"SETTER\" to change attributes of the copied constructor object" << std::endl;
	std::cout << "Before: " << cv2;
	cv2.setName("Tyron");
	cv2.setHp(5);
	cv2.setMp(20);
	cv2.setDps(200);
	std::cout << " --> After: " << cv2 << std::endl;;
	std::cout << SEP_P << std::endl;

	// SUBJECT FUNCTIONS
	std::cout << "Subject functions" << std::endl;
	cv1.attack(cv2.getName());
	cv1.beRepaired(5);
	cv1.takeDamage(10);
	cv1.guardGate();
	std::cout << "Status of the " << cv1 << std::endl;
	std::cout << SEP_SP << std::endl;

	cv2.attack(cv1.getName());
	cv2.takeDamage(10);
	cv2.beRepaired(5);
	cv2.guardGate();
	std::cout << "Status of the " << cv2 << std::endl;
	std::cout << SEP_P << std::endl;

	// TEST VIRTUAL
	std::cout << "Test virtual" << std::endl;
	std::cout << SEP_SP << std::endl;

	std::cout << "*vcp = &cp1 // ClapTrap" << std::endl;
	ClapTrap	*vcp = &cp1;
	std::cout << "[vcp] Before: " << *vcp << std::endl;
	std::cout << "[cp1] Before: " << cp1 << std::endl;
	vcp->setName("Virtual test");
	vcp->attack("toto");
	std::cout << "[vcp] --> After: " << *vcp << std::endl;;
	std::cout << "[cp1] --> After: " << cp1 << std::endl;;

	std::cout << SEP_SP << std::endl;

	std::cout << "*vcp = &cv1 // ScavTrap" << std::endl;
	vcp = &cv1;
	std::cout << "[vcp] Before: " << *vcp << std::endl;
	std::cout << "[cv1] Before: " << cv1 << std::endl;
	vcp->attack("toto");
	std::cout << "[vcp] --> After: " << *vcp << std::endl;;
	std::cout << "[cv1] --> After: " << cv1 << std::endl;;
	std::cout << SEP_P << std::endl;

	// DESTRUCTOR
	std::cout << "Destructor" << std::endl;
	return (0);
}
