/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:51:12 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/15 11:03:43 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# ifndef BR_IDEA_NB
#  define BR_IDEA_NB 100
# endif

# ifndef BR_ERR_IDEA
#  define BR_ERR_IDEA "Idea index out of range"
# endif

class Brain
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		Brain( void );
		~Brain( void );

		// OVERLOAD OPERATOR
		// TODO

		// GETTER / SETTER
		// TODO

		// FUNCTIONS
		std::string	getIdea( const int ) const;

	private:
		// ATTRIBUTES
		std::string	_ideas[BR_IDEA_NB];
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, const Brain & );

#endif
