/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:53:17 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/02 11:27:49 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

class Span
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		Span( void );
		~Span( void );
		Span( unsigned int );
		Span( Span const & );

		// OVERLOAD OPERATOR
		Span	&operator = ( Span const & );

		// GETTER / SETTER
//		std::vector<unsigned int>	&getContainer( void ) const;
//
//		// SUBJECT FUNCTIONS
//		void		addNumber( void );
//		unsigned int	shortestSpan( void );
//		unsigned int	longestSpan( void );

	private:
		std::vector<unsigned int>	_vec;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, Span const & );

#endif
