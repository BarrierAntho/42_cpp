/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:50:15 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/14 14:05:26 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

# include "ClapTrap.hpp"

# define CV_HP 100
# define CV_MP 50
# define CV_DPS 20

class ScavTrap: virtual public ClapTrap
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		ScavTrap( void );
		ScavTrap( const std::string );
		virtual ~ScavTrap( void );
		ScavTrap ( const ScavTrap & ); // COPY CONSTRUCTOR

		// OVERLOAD OPERATOR
		ScavTrap	&operator = ( const ScavTrap & );

		// SUBJECT FUNCTIONS
		virtual void	attack( const std::string &target );
		void	guardGate( void );
};

std::ostream	&operator << ( std::ostream &, const ScavTrap & );

#endif