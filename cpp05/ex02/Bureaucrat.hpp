/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:38:50 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/18 13:44:19 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>

# include "Form.hpp"

# ifndef BR_FT_NAME
#  define BR_DFT_NAME "Jean Marc THIBAULT"
# endif
# ifndef BR_DFT_GRADE
#  define BR_DFT_GRADE 1
# endif
# ifndef BR_GRADE_HIGH
#  define BR_GRADE_HIGH 1
# endif
# ifndef BR_GRADE_LOW
#  define BR_GRADE_LOW 150
# endif

class Form;

class Bureaucrat
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		Bureaucrat( void );
		~Bureaucrat( void );
		Bureaucrat( std::string const &, int const );
		Bureaucrat( Bureaucrat const & );

		// OVERLOAD OPERATOR
		Bureaucrat					&operator = ( Bureaucrat const & );

		// GETTER / SETTER
		std::string const			&getName() const;
		int							getGrade() const;
		void						setGrade( int const );

		// SUBJECT FUNCTIONS
		int							decrementGrade( void );
		int							incrementGrade( void );
		bool						signForm( Form const & ) const;
		void						executeForm(Form const & ) const;

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
		const std::string			_name;
		int							_grade;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, Bureaucrat const & );

#endif
