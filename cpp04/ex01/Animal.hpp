/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:35:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/14 09:34:40 by abarrier         ###   ########.fr       */
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
		// CONSTRUCTOR / DESTRUCTOR
		Animal( void );
		virtual ~Animal( void );
		Animal( const Animal & );
		
		// OVERLOAD OPERATOR
		Animal	&operator = ( const Animal & );
		
		// GETTER / SETTER
		const std::string	getType( void ) const;
		void			setType( const std::string & );
		
		// SUBJECT FUNCTIONS
		virtual void		makeSound( void ) const;
	
	protected:
		// ATTRIBUTES
		std::string		_type;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, const Animal & );

#endif
