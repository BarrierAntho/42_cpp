/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:46:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 22:29:46 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << *this << " has been created" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << *this << " has been destroyed" << std::endl;

}

//TODO: Copy constructor

std::string	Brain::getIdea( const int i ) const
{
	if (i < 0 || i > 100)
		return (BR_ERR_IDEA);
	else
		return (this->_ideas[i]);
}

std::ostream	&operator << ( std::ostream &out, const Brain &ref )
{
	int	i;

	out << "[Brain] ideas:" << std::endl;
	for (i = 0; i < 10; i++)
		out << "ideas[" << i << "] = " << (&ref)->getIdea(i) << std::endl;
	return (out);
}
