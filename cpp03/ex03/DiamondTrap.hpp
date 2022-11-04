/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:50:15 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/04 16:43:24 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		DiamondTrap( const std::string );
		~DiamondTrap( void );
		DiamondTrap ( const DiamondTrap & ); // COPY CONSTRUCTOR

		// OVERLOAD OPERATOR
		DiamondTrap	&operator = ( const DiamondTrap & );

	private:
		// CONSTRUCTOR / DESTRUCTOR
//		DiamondTrap( void ); // PRIVATE DEFAULT CONSTRUCTOR TO REPSECT CANNONIX FORM

		// ATTRIBUTES
		std::string	_name;
};

std::ostream	&operator << ( std::ostream &, const DiamondTrap & );

#endif
