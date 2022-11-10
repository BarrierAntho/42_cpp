/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:35:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 10:46:41 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# ifndef WRGANI_DEFAULT_TYPE
#  define WRGANI_DEFAULT_TYPE "wrong mammal"
# endif
# ifndef WRGANI_SOUND
#  define WRGANI_SOUND "mammmmmmmmmmmal"
# endif

class WrongAnimal
{
	public:
		WrongAnimal( void );
		virtual ~WrongAnimal( void );
		const std::string	getType( void ) const;
		void			setType( const std::string & );

		void		makeSound( void ) const;

	protected:
		std::string		_type;
};

std::ostream	&operator << ( std::ostream &, const WrongAnimal & );

#endif
