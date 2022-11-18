/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:00:14 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/18 15:30:13 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ): Form(FRM_SHRU_DFT_NAME, FRM_SHRU_DFT_GRADE_TOSIGN, FRM_SHRU_DFT_GRADE_TOEXEC, FRM_SHRU_DFT_TARGET)
{
	std::cout << *this << " has been created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << *this << " has been deleted" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const &target ): Form(FRM_SHRU_DFT_NAME, FRM_SHRU_DFT_GRADE_TOSIGN, FRM_SHRU_DFT_GRADE_TOEXEC, target)
{
	std::cout << *this << " has been created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &ref ): Form((&ref)->getName() + "_copy", (&ref)->getGradeToSign(), (&ref)->getGradeToExec(), (&ref)->getTarget())
{
	std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVERLOAD OPERATOR
ShrubberyCreationForm	&ShrubberyCreationForm::operator = ( ShrubberyCreationForm const &ref )
{
	Form		*cpThis;
	const Form	*cpClone;

	std::cout << "ShrubberyCreationForm overload operator =" << std::endl;
	if (this == (&ref))
		return (*this);
	cpThis = this;
	cpClone = (&ref);
	*cpThis = *cpClone;
	return (*this);
}

// SUBJECT FUNCTIONS
void	ShrubberyCreationForm::executeFunction( Bureaucrat const &executor ) const
{
	std::ofstream	ofs;
	std::string		str = this->getTarget() + "_shrubbery";
	const char		*filename = str.c_str();

	(void)executor;
	ofs.open(filename, std::fstream::out | std::fstream::trunc);
	if (ofs.is_open() == false)
	{
		std::cerr << "File can not be opened/created" << std::endl;
		return ;
	}
	ofs << "  /$$$$$$  /$$      /$$ /$$$$$$$ " << std::endl;
	ofs << " /$$__  $$| $$$    /$$$| $$__  $$" << std::endl;
	ofs << "| $$  \\__/| $$$$  /$$$$| $$  \\ $$" << std::endl;
	ofs << "|  $$$$$$ | $$ $$/$$ $$| $$$$$$$ " << std::endl;
	ofs << " \\____  $$| $$  $$$| $$| $$__  $$" << std::endl;
	ofs << " /$$  \\ $$| $$\\  $ | $$| $$  \\ $$" << std::endl;
	ofs << "|  $$$$$$/| $$ \\/  | $$| $$$$$$$/" << std::endl;
	ofs << " \\______/ |__/     |__/|_______/ " << std::endl;
	ofs.close();
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, ShrubberyCreationForm const &ref )
{
	return (out << "[ShrubberyCreationForm] " << (&ref)->getName()
			<< " ["
			<< "status \"isSigned\" " << (&ref)->getIsSigned()
			<< ", grade to sign " << (&ref)->getGradeToSign()
			<< ", grade to execute " << (&ref)->getGradeToExec()
			<< ", target " << (&ref)->getTarget()
			<< "]");
}
