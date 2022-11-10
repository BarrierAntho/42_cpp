/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:24:07 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 10:21:53 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>

# include "Animal.hpp"

# ifndef CAT_SOUND
#  define CAT_SOUND "Miaouuuhhh"
# endif

class Cat: virtual public Animal
{
	public:
		Cat( void );
		~Cat ( void );

		void	makeSound( void ) const;
};

std::ostream	&operator << ( std::ostream &, const Cat & );

#endif
