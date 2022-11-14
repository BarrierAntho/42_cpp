/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:50:15 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/14 17:46:31 by abarrier         ###   ########.fr       */
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
