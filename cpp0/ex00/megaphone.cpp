/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:59:30 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/11 08:27:49 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

int	main(int argc, char **argv)
{
	size_t	i;
	size_t	j;

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < (size_t)argc)
		{
			std::string str(argv[i]);
			for (j = 0; j < str.length(); j++)
				std::cout << (char)std::toupper((unsigned char)str[j]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
