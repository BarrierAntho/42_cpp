/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:56:59 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/17 10:27:58 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// CONSTRUCTOR / DESTRUCTOR
Bureaucrat::Bureaucrat( void ): _name(BR_DFT_NAME), _grade(BR_DFT_GRADE)
{
	std::cout << *this << " has been hired" << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << *this << " has been fired" << std::endl;
}

Bureaucrat::Bureaucrat( std::string const &newName, int const i ): _name(newName)
{
	if (i > BR_GRADE_LOW)
		throw (Bureaucrat::GradeTooLowException());
	else if (i < BR_GRADE_HIGH)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade = i;
	std::cout << *this << " has been hired" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const &ref ): _name((&ref)->getName() + "_copy")
{
	std::cout << "Bureaucrat copy constructor" << std::endl;
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVERLOAD OPERATOR
Bureaucrat	&Bureaucrat::operator = ( Bureaucrat const &ref )
{
	std::cout << "Bureaucrat overload operator =" << std::endl;
	if (this == (&ref))
		return (*this);
	this->_grade = (&ref)->getGrade();
	std::cout << *this << " has been hired" << std::endl;
	return (*this);
}


// SUBJECT FUNCTIONS
std::string const	&Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

void	Bureaucrat::setGrade( int const i )
{
	if (i > BR_GRADE_LOW)
		throw (Bureaucrat::GradeTooLowException());
	else if (i < BR_GRADE_HIGH)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade = i;
}

int	Bureaucrat::decrementGrade( void )
{
	if (this->getGrade() >= BR_GRADE_LOW)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade++;
	return (this->_grade);
}

int	Bureaucrat::incrementGrade( void )
{
	if (this->getGrade() <= BR_GRADE_HIGH)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade--;
	return (this->_grade);
}

// EXCEPTION FUNCTIONS
const char	*Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return ("GradeTooLowException");
}

const char	*Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return ("GradeTooHighException");
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, Bureaucrat const &ref )
{
	return (out << (&ref)->getName() << ", bureaucrat grade " << (&ref)->getGrade());
}
