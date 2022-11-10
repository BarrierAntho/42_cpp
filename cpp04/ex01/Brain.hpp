/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:51:12 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/10 22:08:32 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# ifndef BR_ERR_IDEA
#  define BR_ERR_IDEA "Idea index out of range"
# endif

class Brain
{
	public:
		Brain( void );
		~Brain( void );

		std::string	getIdea( const int ) const;

	private:
		std::string	_ideas[100];
};

std::ostream	&operator << ( std::ostream &, const Brain & );

#endif
