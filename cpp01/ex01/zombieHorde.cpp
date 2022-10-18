/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:40:04 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/18 16:28:27 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *horde;
	int	i;

	if (N <= 0 || N > SHRT_MAX)
	{
		std::cerr << ZB_ERR_N << std::endl;
		return (NULL);
	}
	horde = new Zombie[N];
	for (i = 0; i < N; i++)
	{
		horde[i].setName(name);
		horde[i].announce();
	}
	return (horde);
}
