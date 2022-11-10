/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:24:07 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 22:14:03 by abarrier         ###   ########.fr       */
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
		Cat( void );
		~Cat ( void );

		void	makeSound( void ) const;

	private:
		Brain	*_brain;
};

std::ostream	&operator << ( std::ostream &, const Cat & );

#endif
