/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:15:46 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/29 16:57:49 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

#define SEP_P "##############################"
#define SEP_SP "------------------------------"

int	main( void )
{
	Data	*data = new Data();
	uintptr_t	uit = 0;

	std::cout << "INIT" << std::endl;
	std::cout << *data << std::endl;
	std::cout << "uit: ptr: " << &uit << "\tvalue: " << uit << std::endl;
	std::cout << SEP_P << std::endl;

	std::cout << "USAGE OF SERIALIZE" << std::endl;
	std::cout << "BEFORE" << std::endl;
	std::cout << *data << std::endl;
	std::cout << "uit: ptr: " << &uit << "\tvalue: " << uit << std::endl;
	uit = serialize(data);
	std::cout << "AFTER" << std::endl;
	std::cout << *data << std::endl;
	std::cout << "uit: ptr: " << &uit << "\tvalue: " << uit << std::endl;
	std::cout << SEP_P << std::endl;

	std::cout << "USAGE OF DESERIALIZE" << std::endl;
	std::cout << "BEFORE" << std::endl;
	std::cout << "data: NULL" << std::endl;
	std::cout << "uit: ptr: " << &uit << "\tvalue: " << uit << std::endl;
	std::cout << "AFTER" << std::endl;
	std::cout << deserialize(uit) << std::endl;
	std::cout << "uit: ptr: " << &uit << "\tvalue: " << uit << std::endl;
	delete (data);
	return (0);
}
