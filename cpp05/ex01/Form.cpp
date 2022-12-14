/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:30:26 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/17 15:03:38 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// CONSTRUCTOR / DESTRUCTOR
Form::Form( void ): _name(FRM_DFT_NAME), _isSigned(false), _gradeToSign(FRM_DFT_GRADE_TOSIGN), _gradeToExec(FRM_DFT_GRADE_TOEXEC)
{
	std::cout << *this << " has been created" << std::endl;
}

Form::~Form( void )
{
	std::cout << *this << " has been deleted" << std::endl;
}

Form::Form( std::string const &newName, const int newGradeToSign, const int newGradeToExec): _name(newName), _isSigned(false), _gradeToSign(newGradeToSign), _gradeToExec(newGradeToExec)
{
	if (newGradeToSign > BR_GRADE_LOW)
		throw (Form::GradeTooLowException());
	else if (newGradeToSign  < BR_GRADE_HIGH)
		throw (Form::GradeTooHighException());
	if (newGradeToExec > BR_GRADE_LOW)
		throw (Form::GradeTooLowException());
	else if (newGradeToExec  < BR_GRADE_HIGH)
		throw (Form::GradeTooHighException());
	std::cout << *this << " has been created" << std::endl;

}

Form::Form( Form const &ref ): _name((&ref)->getName() + "_copy"), _gradeToSign((&ref)->getGradeToSign()), _gradeToExec((&ref)->getGradeToExec())
{
	std::cout << "Form copy constructor" << std::endl;
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVERLOAD OPERATOR
Form	&Form::operator = ( Form const &ref )
{
	std::cout << "Form overload operator =" << std::endl;
	if (this == (&ref))
		return (*this);
	this->_isSigned = (&ref)->getIsSigned();
	return (*this);
}

// GETTER / SETTER
std::string const	&Form::getName( void ) const
{
	return (this->_name);
}

bool	Form::getIsSigned( void ) const
{
	return (this->_isSigned);
}

int	Form::getGradeToSign( void ) const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExec( void ) const
{
	return (this->_gradeToExec);
}

// SUBJECT FUNCTIONS
void	Form::beSigned( Bureaucrat const &bureaucrat )
{
	if ((&bureaucrat)->signForm(*this) == false)
		throw (Form::GradeTooLowException());
	this->_isSigned = true;
}

// EXCEPTION FUNCTIONS
const char	*Form::GradeTooLowException::what( void ) const throw()
{
	return ("GradeTooLowException");
}

const char	*Form::GradeTooHighException::what( void ) const throw()
{
	return ("GradeTooHighException");
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, Form const & ref )
{
	return (out << (&ref)->getName() << ", status \"isSigned\" " << (&ref)->getIsSigned()
			<< ", grade to sign " << (&ref)->getGradeToSign()
			<< ", grade to execute " << (&ref)->getGradeToExec());
}
