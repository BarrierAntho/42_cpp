/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:57:59 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/30 13:26:57 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>

#include "iter.hpp"

#define SEP_P "##############################"
#define SEP_SP "------------------------------"

int	main( void )
{
	{
		std::cout << "TEST - CHAR" << std::endl;
		std::cout << SEP_SP << std::endl;
		char	a[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g'};
		size_t	size;

		size = 7;
		std::cout << "BEFORE ADD" << std::endl;
		iter(a, size, (&show));
		iter(a, size, (&addone));
		std::cout << "AFTER ADD" << std::endl;
		iter(a, size, (&show));
	}
	std::cout << SEP_P << std::endl;
	{
		std::cout << "TEST - INT" << std::endl;
		std::cout << SEP_SP << std::endl;
		int	a[] = { 0, 1, 10, -1, -10, INT_MIN, INT_MAX };
		size_t	size;

		size = 7;
		std::cout << "BEFORE ADD" << std::endl;
		iter(a, size, (&show));
		iter(a, size, (&addone));
		std::cout << "AFTER ADD" << std::endl;
		iter(a, size, (&show));
	}
	std::cout << SEP_P << std::endl;
	{
		std::cout << "TEST - STRING" << std::endl;
		std::cout << SEP_SP << std::endl;
		std::string	a[] = { "Hello", " ", "the", " ", "world", " ", "!" };
		size_t	size;

		size = 7;
		//std::cout << "BEFORE ADD" << std::endl;
		//iter(a, size, (&show));
		//iter(a, size, (&addone)); // IMPOSSIBLE ON STRING
		//std::cout << "AFTER ADD" << std::endl;
		//iter(a, size, (&show));
		std::cout << "IMPOSSIBLE TO ADD ON STRING" << std::endl;
		iter(a, size, (&show));
	}
	std::cout << SEP_P << std::endl;
	return (0);
}

