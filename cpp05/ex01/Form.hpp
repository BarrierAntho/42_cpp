/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:14:44 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/17 11:36:15 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <exception>
# include <iostream>

# include "Bureaucrat.hpp"

# ifndef FRM_DFT_NAME
#  define FRM_DFT_NAME "Boring Form"
# endif
# ifndef FRM_DFT_GRADE_TOSIGN
#  define FRM_DFT_GRADE_TOSIGN BR_GRADE_HIGH
# endif
# ifndef FRM_DFT_GRADE_TOEXEC
#  define FRM_DFT_GRADE_TOEXEC BR_GRADE_HIGH
# endif

class Form
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		Form( void );
		~Form( void );
		Form( std::string const &, int const, int const );
		Form( Form const & );

		// OVERLOAD OPERATOR
		Form	&operator = ( Form const & );

		// SUBJECT FUNCTIONS
		std::string const	&getName( void ) const;
		bool			getIsSigned( void ) const;
		int			getGradeToSign( void ) const;
		int			getGradeToExec( void ) const;

		// SUBJECT FUNCTIONS
		void			beSigned( Bureaucrat const & );

		// EXCEPTION FUNCTIONS
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char	*what( void ) const throw();
		};

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char	*what( void ) const throw();
		};

	private:
		// ATTRIBUTES
		const std::string	_name;
		bool			_isSigned;
		const int		_gradeToSign;
		const int		_gradeToExec;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, Form const & );

#endif
