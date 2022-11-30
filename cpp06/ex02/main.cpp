/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:33:06 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/30 08:29:02 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyClass.hpp"

int	main ( void )
{
	Base	*zeus = generate();
	Base	&poseidon = *zeus;
	Base	parent;

	std::cout << "Test with pointer : ";
	identify(zeus);
	std::cout << std::endl;
	std::cout << "Test with reference : ";
	identify(poseidon);
	std::cout << std::endl;
	std::cout << "Test with parent class: ";
	identify(&parent);
	std::cout << std::endl;
	delete (zeus);
	return (0);
}
