/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:20:38 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/30 08:08:34 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize( Data *ptr )
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize( uintptr_t raw )
{
	return (reinterpret_cast<Data *>(raw));
}

void	dataShow( Data data )
{
	std::cout << "[Data]: "
		<< "ptr = " << &data
		<< "\t_c = " << data._c
		<< "\t_i = " << data._i
		<< std::endl;
}
