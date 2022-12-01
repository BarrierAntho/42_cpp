/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:52:42 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/01 14:23:52 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <class T>
void	show( T const &obj )
{
	std::cout << "obj: " << obj << std::endl;
}

template <class T>
void	addone( T const &obj )
{
	std::cout << "obj: " << obj + 1 << std::endl;
}

template <class T>
void	iter( T *array, size_t size, void (*f)(T const &obj) )
{
	size_t	i;

	for (i = 0; i < size; i++)
	{
		if (f)
			(f)(array[i]);
	}
}

#endif
