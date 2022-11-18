/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:35:09 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/18 17:06:00 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

# define INTERN_ERR_FORM "Impossible to create the form"

class Intern
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		Intern( void );
		~Intern( void );
		Intern( Intern const & );

		// OVERLOAD OPERATOR
		Intern		&operator = ( Intern const & );

		// SUBJECT FUNCTIONS
		Form		*makeForm( std::string const &, std::string const & ) const;

	private:
		// ATTRIBUTES
		std::string	_tab[4];
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, Intern const & );

#endif
