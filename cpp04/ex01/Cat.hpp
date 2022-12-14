/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:24:07 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/15 13:36:51 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>

# include "Animal.hpp"
# include "Brain.hpp"

# ifndef CAT_SOUND
#  define CAT_SOUND "Miaouuuhhh"
# endif

class Cat: virtual public Animal
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		Cat( void );
		~Cat ( void );
		Cat( const Cat & );
		
		// OVERLOAD OPERATOR
		Cat	&operator = ( const Cat & );	
		
		// GETTER / SETTER
		Brain	&getBrain( void ) const;

		// SUBJECT FUNCTIONS
		void	makeSound( void ) const;
		
	private:
		// ATTRIBUTES
		Brain	*_brain;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, const Cat & );

#endif
