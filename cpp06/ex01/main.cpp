/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:15:46 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/30 08:10:07 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

#define SEP_P "##############################"
#define SEP_SP "------------------------------"

int	main( void )
{
	Data	data1;
	Data	*data2;
	uintptr_t	uit = 0;

	data1._c = 'a';
	data1._i = '1';

	std::cout << "INIT" << std::endl;
	std::cout << "data1 in use" << std::endl;
	dataShow(data1);
	std::cout << "uit: ptr: " << &uit << "\tvalue: " << uit << std::endl;
	std::cout << SEP_P << std::endl;

	std::cout << "USAGE OF SERIALIZE" << std::endl;
	std::cout << "BEFORE" << std::endl;
	std::cout << "data1 in use" << std::endl;
	dataShow(data1);
	std::cout << "uit: ptr: " << &uit << "\tvalue: " << uit << std::endl;
	uit = serialize(&data1);
	std::cout << "AFTER" << std::endl;
	std::cout << "data1 in use" << std::endl;
	dataShow(data1);
	std::cout << "uit: ptr: " << &uit << "\tvalue: " << uit << std::endl;
	std::cout << SEP_P << std::endl;

	std::cout << "USAGE OF DESERIALIZE" << std::endl;
	std::cout << "data2 in use" << std::endl;
	std::cout << "BEFORE" << std::endl;
	std::cout << "data: NULL" << std::endl;
	std::cout << "uit: ptr: " << &uit << "\tvalue: " << uit << std::endl;
	std::cout << "AFTER" << std::endl;
	std::cout << "data2 in use" << std::endl;
	data2 = deserialize(uit);
	dataShow(*data2);
	std::cout << "uit: ptr: " << &uit << "\tvalue: " << uit << std::endl;
	return (0);
}
