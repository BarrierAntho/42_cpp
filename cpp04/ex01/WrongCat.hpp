/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:24:07 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 10:37:00 by abarrier         ###   ########.fr       */
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
		WrongCat( void );
		~WrongCat ( void );

		void	makeSound( void ) const;
};

std::ostream	&operator << ( std::ostream &, const WrongCat & );

#endif
