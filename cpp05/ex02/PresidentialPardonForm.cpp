/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:56:30 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/18 09:37:31 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// CONSTRUCTOR / DESTRUCTOR
PresidentialPardonForm::PresidentialPardonForm( void ): Form(FRM_PRES_DFT_NAME, FRM_PRES_DFT_GRADE_TOSIGN, FRM_PRES_DFT_GRADE_TOEXEC, FRM_PRES_DFT_TARGET)
{
	std::cout << *this << " has been created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << *this << " has been deleted" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string const &target ): Form(FRM_PRES_DFT_NAME, FRM_PRES_DFT_GRADE_TOSIGN, FRM_PRES_DFT_GRADE_TOEXEC, target)
{
	std::cout << *this << " has been created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &ref ): Form((&ref)->getName() + "_copy", (&ref)->getGradeToSign(), (&ref)->getGradeToExec(), (&ref)->getTarget())
{
	std::cout << "PresidentialPardonForm copy constructor" << std::endl;
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVERLOAD OPERATOR
PresidentialPardonForm	&PresidentialPardonForm::operator = ( PresidentialPardonForm const &ref )
{
	Form		*cpThis;
	const Form	*cpClone;

	std::cout << "PresidentialPardonForm overload operator =" << std::endl;
	if (this == (&ref))
		return (*this);
	cpThis = this;
	cpClone = (&ref);
	*cpThis = *cpClone;
	return (*this);
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, PresidentialPardonForm const &ref )
{
	return (out << "[PresidentialPardonForm] " << (&ref)->getName() << ", status \"isSigned\" " << (&ref)->getIsSigned()
			<< ", grade to sign " << (&ref)->getGradeToSign()
			<< ", grade to execute " << (&ref)->getGradeToExec()
			<< ", target " << (&ref)->getTarget());
}
