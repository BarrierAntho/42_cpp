/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:17:52 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/15 13:40:10 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>

# include "Animal.hpp"
# include "Brain.hpp"

# ifndef DOG_SOUND
#  define DOG_SOUND "Ouafff"
# endif

class Dog: virtual public Animal
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		Dog( void );
		~Dog( void );
		Dog( const Dog & );
		
		// OVERLOAD OPERATOR
		Dog	&operator = ( const Dog & );

		// GETTER / SETTER
		Brain	&getBrain( void ) const;

		// SUBJECT FUNCTIONS
		void	makeSound( void ) const;
		
	private:
		// ATTRIBUTES
		Brain	*_brain;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, const Dog & );

#endif
