/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:26:06 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/20 15:16:01 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

# define SEP_P "####################"
# define SEP_SP "--------------------"

int	main(void)
{
	std::cout << "Subject test" << std::endl;
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << SEP_SP << std::endl;
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB	jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	std::cout << SEP_P << std::endl;

	std::cout << "Personnal test" << std::endl;
	Weapon	batWeapon = Weapon("batarang");
	HumanA	batman("Batman", batWeapon);
	batman.attack();
	batWeapon.setType("batgrapping");
	batman.attack();

	std::cout << SEP_SP << std::endl;

	Weapon jokerWeapon = Weapon ("baseball bat");
	HumanB	joker("Joker");
	joker.attack();
	joker.setWeapon(jokerWeapon);
	joker.attack();
	jokerWeapon.setType("gun");
	joker.attack();

	std::cout << SEP_SP << std::endl;

	batman.setWeapon(jokerWeapon);

	return (0);
}
