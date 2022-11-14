/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:50:15 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/14 12:54:17 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

# include "ClapTrap.hpp"

# define CF_HP 100
# define CF_MP 100
# define CF_DPS 30

class FragTrap: public ClapTrap
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		FragTrap( void );
		FragTrap( const std::string );
		~FragTrap( void );
		FragTrap ( const FragTrap & ); // COPY CONSTRUCTOR

		// OVERLOAD OPERATOR
		FragTrap	&operator = ( const FragTrap & );

		// SUBJECT FUNCTIONS
		void	highFivesGuys( void );
};

std::ostream	&operator << ( std::ostream &, const FragTrap & );

#endif
