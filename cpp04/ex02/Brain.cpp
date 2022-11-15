/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:46:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/15 14:11:00 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// CONSTRUCTOR / DESTRUCTOR
Brain::Brain( void )
{
	int	i;

	for (i = 0; i < BR_IDEA_NB; i++)
		this->_ideas[i] = BR_IDEA_DEFAULT;
	std::cout << *this << " has been created" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << *this << " has been destroyed" << std::endl;

}

Brain::Brain( const Brain &ref )
{
	std::cout << *this << " copy constructor" << std::endl;
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVERLOAD OPERATOR
Brain	&Brain::operator = ( const Brain &ref )
{
	int	i;

        std::cout << *this << " overload operator \"=\"" << std::endl;
        if (this == (&ref))
                return (*this);
	for (i = 0; i < BR_IDEA_NB; i++)
		this->_ideas[i] = (&ref)->getIdea(i);
        std::cout << *this << " has been created as a clone" << std::endl;
        return (*this);
}

// GETTER / SETTER
std::string	Brain::getIdea( const int i ) const
{
	if (i < 0 || i > BR_IDEA_NB)
		return (BR_ERR_IDEA);
	else
		return (this->_ideas[i]);
}

void	Brain::setIdea( const int i, const std::string &idea )
{
	if (i < 0 || i > BR_IDEA_NB)
	{
		std::cout << BR_ERR_IDEA << std::endl;
		return ;
	}
	this->_ideas[i] = idea;
}

// FUNCTIONS

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, const Brain &ref )
{
	int	i;

	out << "[Brain] ideas:" << std::endl;
	for (i = 0; i < (BR_IDEA_NB / 20); i++)
		out << "ideas[" << i << "] = " << (&ref)->getIdea(i) << std::endl;
	return (out);
}
