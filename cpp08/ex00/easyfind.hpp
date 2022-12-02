/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 08:31:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/02 10:50:30 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>

template <typename T>
typename T::iterator	easyfind( T &ct, int toFind )
{
	typename T::iterator	it;

	it = std::find(ct.begin(), ct.end(), toFind);
	if (it == ct.end())
		throw (std::out_of_range("Impossible to find the container"));
	else
		std::cout << "Object found: " << *it << std::endl;
	return (it);
}

#endif
