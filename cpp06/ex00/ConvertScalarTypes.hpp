/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScalarTypes.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:21:48 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/22 14:30:20 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTSCALARTYPES_HPP
# define CONVERTSCALARTYPES_HPP

# include <exception>
# include <iostream>

class ConvertScalarTypes
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		ConvertScalarTypes( void );
		~ConvertScalarTypes( void );
		ConvertScalarTypes( ConvertScalarTypes const & );

		// OVERLOAD OPERATOR
		ConvertScalarTypes	&operator = ( ConvertScalarTypes const & );

		class NullInputException: public std::exception
		{
			public:
				virtual const char	*what( void ) const throw();
		};
};

std::ostream	&operator << ( std::ostream &, ConvertScalarTypes const & );

#endif
