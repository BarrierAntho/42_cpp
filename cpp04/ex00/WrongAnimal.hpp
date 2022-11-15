/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:35:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/15 11:13:56 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# ifndef WRGANI_DEFAULT_TYPE
#  define WRGANI_DEFAULT_TYPE "WrongMammal"
# endif
# ifndef WRGANI_SOUND
#  define WRGANI_SOUND "mammmmmmmmmmmal"
# endif

class WrongAnimal
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		WrongAnimal( void );
		virtual ~WrongAnimal( void );
		WrongAnimal( const WrongAnimal & );

		// OVERLOAD OPERATOR
		WrongAnimal	&operator = (const WrongAnimal & );

		// GETTER / SETTER
		const std::string	getType( void ) const;
		void			setType( const std::string & );

		// SUBJECT FUNCTIONS
		void		makeSound( void ) const;

	protected:
		std::string		_type;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, const WrongAnimal & );

#endif
