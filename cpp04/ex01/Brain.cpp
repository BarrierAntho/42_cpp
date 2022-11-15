/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:46:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/15 11:02:39 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// CONSTRUCTOR / DESTRUCTOR
Brain::Brain( void )
{
	std::cout << *this << " has been created" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << *this << " has been destroyed" << std::endl;

}

Brain::Brain( const Brain &brain )
{

}

// OVERLOAD OPERATOR
// TODO

// GETTER / SETTER
// TODO

// FUNCTIONS
std::string	Brain::getIdea( const int i ) const
{
	if (i < 0 || i > BR_IDEA_NB)
		return (BR_ERR_IDEA);
	else
		return (this->_ideas[i]);
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, const Brain &ref )
{
	int	i;

	out << "[Brain] ideas:" << std::endl;
	for (i = 0; i < (BR_IDEA_NB / 20); i++)
		out << "ideas[" << i << "] = " << (&ref)->getIdea(i) << std::endl;
	return (out);
}
