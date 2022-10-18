/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:23:24 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/18 16:32:18 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include <iostream>
#include "Zombie.hpp"

#define SEP_P "####################"

int	main(void)
{
	int	N;
	int	i;

//	N = SHRT_MAX;
	N = 5;
	std::cout << "Function \"zombieHorde\" outside of the Zombie's class "
		"(must create an array of Zombie on the heap)" << std::endl;
	Zombie *horde = zombieHorde(N, "Hades");
	std::cout << SEP_P << std::endl;
	std::cout << "Test to call \"announce\"" << std::endl;
	if (horde != NULL)
	{
		for (i = 0; i < N; i++)
			horde[i].announce();
	}
	std::cout << SEP_P << std::endl;
	std::cout << "Destructor" << std::endl;
	delete[] horde;
	return (0);
}
