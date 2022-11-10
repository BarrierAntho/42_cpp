/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:17:52 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 10:22:03 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>

# include "Animal.hpp"

# ifndef DOG_SOUND
#  define DOG_SOUND "Ouafff"
# endif

class Dog: virtual public Animal
{
	public:
		Dog( void );
		~Dog( void );

		void	makeSound( void ) const;
};

std::ostream	&operator << ( std::ostream &, const Dog & );

#endif
