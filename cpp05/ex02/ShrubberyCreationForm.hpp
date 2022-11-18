/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:00:34 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/18 15:04:05 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>

# include "Form.hpp"

# ifndef FRM_SHRU_DFT_NAME
#  define FRM_SHRU_DFT_NAME "ShrubberyCreationForm"
# endif
# ifndef FRM_SHRU_DFT_GRADE_TOSIGN
#  define FRM_SHRU_DFT_GRADE_TOSIGN 145
# endif
# ifndef FRM_SHRU_DFT_GRADE_TOEXEC
#  define FRM_SHRU_DFT_GRADE_TOEXEC 137
# endif
# ifndef FRM_SHRU_DFT_TARGET
#  define FRM_SHRU_DFT_TARGET "Home"
# endif

class ShrubberyCreationForm: virtual public Form
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		ShrubberyCreationForm( void );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string const & );
		ShrubberyCreationForm( ShrubberyCreationForm const & );

		// OVERLOAD OPERATOR
		ShrubberyCreationForm	&operator = ( ShrubberyCreationForm const & );

		// SUBJECT FUNCTIONS
		void					executeFunction( Bureaucrat const & ) const;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, ShrubberyCreationForm const & );

#endif
