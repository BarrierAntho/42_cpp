/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:16:17 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/30 08:08:35 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <stdint.h>
# include <iostream>

typedef struct Data
{
	char	_c;
	int	_i;
}	t_data;

uintptr_t	serialize( Data * );
Data*	deserialize( uintptr_t );

void	dataShow( t_data data );

#endif
