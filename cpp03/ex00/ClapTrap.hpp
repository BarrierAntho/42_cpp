/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:48:51 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/14 12:41:12 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define CP_DEFAULT_NAME "Default_Name"

# define CP_HP 10
# define CP_MP 10
# define CP_MP_COST 1
# define CP_DPS 0
# define CP_DPS_COST 1

class ClapTrap
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		ClapTrap( void );
		ClapTrap( const std::string );
		~ClapTrap( void );
		ClapTrap( const ClapTrap & ); // COPY CONSTRUCTOR

		// OVERLOAD OPERATOR
		ClapTrap	&operator = ( const ClapTrap & );

		// GETTER / SETTER
		std::string	getName( void ) const;
		void			setName ( const std::string & );
		int			getHp( void ) const;
		void			setHp( const int );
		int			getMp( void ) const;
		void			setMp( const int );
		int			getDps( void ) const;
		void			setDps( const int );

		// SUBJECT FUNCTIONS
		void			attack( const std::string & );
		void			takeDamage( unsigned int );
		void			beRepaired( unsigned int );

	private:
		// ATTRIBUTES
		std::string	_name;
		int		_hitPoints;
		int		_energyPoints;
		int		_attackPoints;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, const ClapTrap & );

#endif
