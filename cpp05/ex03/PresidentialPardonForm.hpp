/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:56:44 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/18 13:38:21 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define  PRESIDENTIALPARDONFORM_HPP

# include <iostream>

# include "Form.hpp"

# ifndef FRM_PRES_DFT_NAME
#  define FRM_PRES_DFT_NAME "PresidentialPardonForm"
# endif
# ifndef FRM_PRES_DFT_GRADE_TOSIGN
#  define FRM_PRES_DFT_GRADE_TOSIGN 25
# endif
# ifndef FRM_PRES_DFT_GRADE_TOEXEC
#  define FRM_PRES_DFT_GRADE_TOEXEC 5
# endif
# ifndef FRM_PRES_DFT_TARGET
#  define FRM_PRES_DFT_TARGET "Boss"
# endif

// CONSTRUCTOR / DESTRUCTOR
class PresidentialPardonForm: virtual public Form
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		PresidentialPardonForm( void );
		virtual ~PresidentialPardonForm( void );
		PresidentialPardonForm( std::string const & );
		PresidentialPardonForm( PresidentialPardonForm const & );

		// OVERLOAD OPERATOR
		PresidentialPardonForm	&operator = ( PresidentialPardonForm const & );

		// SUBJECT FUNCTIONS
		void					executeFunction( Bureaucrat const & ) const;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, PresidentialPardonForm const & );

#endif
