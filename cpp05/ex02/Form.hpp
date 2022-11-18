/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:14:44 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/18 14:16:31 by abarrier         ###   ########.fr       */
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
# ifndef FRM_DFT_TARGET
#  define FRM_DFT_TARGET "Everyone"
# endif

class Bureaucrat;

class Form
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		Form( void );
		virtual ~Form( void );
		Form( std::string const &, int const, int const );
		Form( std::string const &, int const, int const, std::string const & );
		Form( Form const & );

		// OVERLOAD OPERATOR
		Form						&operator = ( Form const & );

		// GETTER / SETTER
		std::string const			&getName( void ) const;
		bool						getIsSigned( void ) const;
		int							getGradeToSign( void ) const;
		int							getGradeToExec( void ) const;
		std::string const			&getTarget( void ) const;

		// SUBJECT FUNCTIONS
		void						beSigned( Bureaucrat const & );
		void						execute( Bureaucrat const & ) const;
		virtual void				executeFunction( Bureaucrat const & ) const = 0;

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

		class IsNotSignedException: public std::exception
		{
			public:
				virtual const char	*what( void ) const throw();
		};

	private:
		// ATTRIBUTES
		const std::string			_name;
		bool						_isSigned;
		const int					_gradeToSign;
		const int					_gradeToExec;
		std::string					_target;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, Form const & );

#endif
