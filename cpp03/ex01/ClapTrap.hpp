/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:48:35 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/04 13:37:09 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define CP_HP 10
# define CP_MP 10
# define CP_MP_COST 1
# define CP_DPS 0
# define CP_DPS_COST 1

class ClapTrap
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		ClapTrap( const std::string );
		virtual ~ClapTrap( void );
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
		virtual void		attack( const std::string & );
		void			takeDamage( unsigned int );
		void			beRepaired( unsigned int );

	private:
		// CONSTRUCTOR / DESTRUCTOR
		ClapTrap( void ); // PRIVATE DEFAULT CONSTRUCTOR TO RESPECT CANNONIX FORM
	
	protected:
		// ATTRIBUTES
		std::string	_name;
		int		_hp;
		int		_mp;
		int		_dps;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, const ClapTrap & );

#endif
