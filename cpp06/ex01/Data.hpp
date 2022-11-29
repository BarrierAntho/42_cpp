/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:16:17 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/29 16:35:55 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <stdint.h>
# include <iostream>

# ifndef DATA_DFT_CHAR
#  define DATA_DFT_CHAR 'a'
# endif
# ifndef DATA_DFT_INT
#  define DATA_DFT_INT 'a'
# endif

class Data
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		Data( void );
		~Data( void );
		Data( Data const & );

		// OVERLOAD OPERATOR
		Data	&operator = ( Data const & );

		// GETTER / SETTER
		char	getChar( void ) const;
		int	getInt( void ) const;

	private:
			char	_c;
			int	_i;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, Data const & );
uintptr_t	serialize(Data* ptr);
Data*	deserialize(uintptr_t raw);

#endif
