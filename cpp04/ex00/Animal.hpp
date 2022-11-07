/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:35:47 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/08 00:08:19 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define ANI_DEFAULT_TYPE "mammal"

class Animal
{
	public:
		Animal( void );
		~Animal( void );
		const std::string	getType( void ) const;
		void			setType( const std::string & );

	private:
		std::string		_type;
};

std::iostream	&operator << ( std::iostream &, const Animal & );

#endif
