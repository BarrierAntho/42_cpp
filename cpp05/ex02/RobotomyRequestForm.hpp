/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:01:49 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/18 14:52:00 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h>

# include "Form.hpp"

# ifndef FRM_ROBOT_DFT_NAME
#  define FRM_ROBOT_DFT_NAME "RobotomyRequestForm"
# endif
# ifndef FRM_ROBOT_DFT_GRADE_TOSIGN
#  define FRM_ROBOT_DFT_GRADE_TOSIGN 72
# endif
# ifndef FRM_ROBOT_DFT_GRADE_TOEXEC
#  define FRM_ROBOT_DFT_GRADE_TOEXEC 45
# endif
# ifndef FRM_ROBOT_DFT_TARGET
#  define FRM_ROBOT_DFT_TARGET "Home"
# endif
# ifndef FRM_ROBOT_NOIS
#  define FRM_ROBOT_NOISE "biiippbiiipppbiiipppppppppppppppp"
# endif

class RobotomyRequestForm: virtual public Form
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		RobotomyRequestForm( void );
		~RobotomyRequestForm( void );
		RobotomyRequestForm( std::string const & );
		RobotomyRequestForm( RobotomyRequestForm const & );

		// OVERLOAD OPERATOR
		RobotomyRequestForm	&operator = ( RobotomyRequestForm const & );

		// SUBJECT FUNCTIONS
		void				executeFunction( Bureaucrat const & ) const;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, RobotomyRequestForm const & );

#endif
