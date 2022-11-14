/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:50:15 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/14 21:27:26 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

# define CD_DEFAULT_NAME "Prince"

class DiamondTrap: public ScavTrap, public FragTrap 
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		DiamondTrap( void );
		DiamondTrap( const std::string );
		~DiamondTrap( void );
		DiamondTrap ( const DiamondTrap & ); // COPY CONSTRUCTOR

		// GETTER / SETTER
		std::string	getName( void ) const;
		void			setName ( const std::string & );
		int			getHp( void ) const;
		void			setHp( const int );
		int			getMp( void ) const;
		void			setMp( const int );
		int			getDps( void ) const;
		void			setDps( const int );

		// OVERLOAD OPERATOR
		DiamondTrap	&operator = ( const DiamondTrap & );

		// SUBJECT FUNCTIONS
		void	attack( const std::string & );
		void	whoAmI( void );

	private:
		// ATTRIBUTES
		std::string	_name;
};

std::ostream	&operator << ( std::ostream &, const DiamondTrap & );

#endif
