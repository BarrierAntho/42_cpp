/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:53:35 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/02 11:31:45 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// CONSTRUCTOR / DESTRUCTOR
Span::Span( void ): _vec(0)
{
	std::cout << *this << " has been created" << std::endl;
}

Span::~Span( void )
{
	std::cout << *this << " has been deleted" << std::endl;
}

Span::Span ( unsigned int n ): _vec(std::vector<unsigned int>(n))
{
	std::cout << *this << " has been created" << std::endl;
}

Span::Span( Span const &ref )
{
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVEROLAD OPERATOR
Span	&Span::operator = ( Span const &ref )
{
	if (this == &(ref))
		return (*this);
	return (*this);
}

// GETTER / SETTER
//std::vector<unsigned int>	&Span::getContainer( void ) const
//{
//}
//
//// SUBJECT FUNCTIONS
//void	Span::AddNumber( void )
//{
//}
//
//unsigned int	Span::shortestSpan( void )
//{
//}
//
//unsigned int	Span::longestSpan( void )
//{
//}
//
// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, Span const &ref )
{
	(void)ref;
	return (out << "[Span]");
}
