/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 08:52:22 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/30 09:01:40 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class T>
void	swap( T &a, T &b )
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <class T>
T	min( T a, T b )
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <class T>
T	max( T a, T b )
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
