/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:01:36 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/18 14:49:12 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ): Form(FRM_ROBOT_DFT_NAME, FRM_ROBOT_DFT_GRADE_TOSIGN, FRM_ROBOT_DFT_GRADE_TOEXEC, FRM_ROBOT_DFT_TARGET)
{
	std::cout << *this << " has been created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << *this << " has been deleted" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string const &target ): Form(FRM_ROBOT_DFT_NAME, FRM_ROBOT_DFT_GRADE_TOSIGN, FRM_ROBOT_DFT_GRADE_TOEXEC, target)
{
	std::cout << *this << " has been created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &ref ): Form((&ref)->getName() + "_copy", (&ref)->getGradeToSign(), (&ref)->getGradeToExec(), (&ref)->getTarget())
{
	std::cout << "RobotomyRequestForm copy constructor" << std::endl;
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVERLOAD OPERATOR
RobotomyRequestForm	&RobotomyRequestForm::operator = ( RobotomyRequestForm const &ref )
{
	Form		*cpThis;
	const Form	*cpClone;

	std::cout << "RobotomyRequestForm overload operator =" << std::endl;
	if (this == (&ref))
		return (*this);
	cpThis = this;
	cpClone = (&ref);
	*cpThis = *cpClone;
	return (*this);
}

// SUBJECT FUNCTIONS
void	RobotomyRequestForm::executeFunction( Bureaucrat const &executor ) const
{
	(void)executor;
	std::cout << FRM_ROBOT_NOISE << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << this->getTarget() << " has been robotomized" << std::endl;
	else
		std::cerr << "The robotomy has failed" << std::endl;
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, RobotomyRequestForm const &ref )
{
	return (out << "[RobotomyRequestForm] " << (&ref)->getName()
			<< " ["
			<< "status \"isSigned\" " << (&ref)->getIsSigned()
			<< ", grade to sign " << (&ref)->getGradeToSign()
			<< ", grade to execute " << (&ref)->getGradeToExec()
			<< ", target " << (&ref)->getTarget()
			<< "]");
}
