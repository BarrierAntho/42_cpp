/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:50:15 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/14 21:55:54 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

# include "ClapTrap.hpp"

# define CF_HP 100
# define CF_MP 100
# define CF_DPS 30

class FragTrap: virtual public ClapTrap
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		FragTrap( void );
		FragTrap( const std::string );
		virtual ~FragTrap( void );
		FragTrap ( const FragTrap & ); // COPY CONSTRUCTOR

		// OVERLOAD OPERATOR
		FragTrap	&operator = ( const FragTrap & );

		// GETTER / SETTER
		std::string		getName( void ) const;
		void			setName ( const std::string & );
		int			getHp( void ) const;
		void			setHp( const int );
		int			getMp( void ) const;
		void			setMp( const int );
		int			getDps( void ) const;
		void			setDps( const int );

		// SUBJECT FUNCTIONS
		void	highFivesGuys( void );
};

std::ostream	&operator << ( std::ostream &, const FragTrap & );

#endif
