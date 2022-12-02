/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:53:17 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/02 15:14:46 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <climits>
# include <ctime>
# include <iostream>

// CONTAINERS
# include <vector>

#ifndef MY_RAND_RANGE
# define MY_RAND_RANGE 20
#endif

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
		std::vector<int>	getContainer( void ) const;

		// SUBJECT FUNCTIONS
		void			addNumber( int );
		int			shortestSpan( void );
		int			longestSpan( void );

		// UTILS FUNCTIONS
		void			show( void );
		void			generateData( int );

		// EXCEPTION FUNCTIONS
		class CapacityException: std::exception
		{
			virtual const char	*what( void ) const throw();
		};

		class SizeException: std::exception
		{
			virtual const char	*what( void ) const throw();
		};

	private:
		unsigned int		_size;
		std::vector<int>	_container;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, Span const & );
int	myRandValue( void );

#endif
