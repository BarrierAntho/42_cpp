/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:24:07 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/14 09:05:43 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>

# include "WrongAnimal.hpp"

# ifndef WRGCAT_SOUND
#  define WRGCAT_SOUND "Miaouuuhhh"
# endif

class WrongCat: virtual public WrongAnimal
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		WrongCat( void );
		~WrongCat ( void );
		WrongCat( const WrongCat & );
		
		// OVERLOAD OPERATOR
		WrongCat	&operator = ( const WrongCat & );	
		
		// SUBJECT FUNCTIONS
void	makeSound( void ) const;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, const WrongCat & );

#endif
