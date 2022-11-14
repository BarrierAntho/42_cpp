/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:35:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 10:22:50 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# ifndef ANI_DEFAULT_TYPE
#  define ANI_DEFAULT_TYPE "mammal"
# endif
# ifndef ANI_SOUND
#  define ANI_SOUND "mammmmmmmmmmmal"
# endif

class Animal
{
	public:
		Animal( void );
		virtual ~Animal( void );
		const std::string	getType( void ) const;
		void			setType( const std::string & );

		virtual void		makeSound( void ) const;

	protected:
		std::string		_type;
};

std::ostream	&operator << ( std::ostream &, const Animal & );

#endif