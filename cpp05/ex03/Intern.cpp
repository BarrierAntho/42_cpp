/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:37:22 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/18 17:19:13 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// CONSTRUCTOR / DESTRUCTOR
Intern::Intern( void )
{
	this->_tab[0] = FRM_SHRU_DFT_NAME;
	this->_tab[1] = FRM_ROBOT_DFT_NAME;
	this->_tab[2] = FRM_PRES_DFT_NAME;
	this->_tab[3] = "";
	std::cout << *this << " has been hired" << std::endl;
}

Intern::~Intern( void )
{
	std::cout << *this << " has been fired" << std::endl;
}

Intern::Intern( Intern const &ref )
{
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVERLOAD OPERATOR
Intern	&Intern::operator = ( Intern const &ref)
{
	if (this == (&ref))
		return (*this);
	return (*this);
}

// SUBJECT FUNCTIONS
Form	*Intern::makeForm( std::string const &name, std::string const &target ) const
{
	int	i;

	i = 0;
	while (this->_tab[i].empty() == false)
	{
		if (this->_tab[i].compare(name) == 0)
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
			return (new ShrubberyCreationForm(target));
			break;
		case 1:
			return (new RobotomyRequestForm(target));
			break;
		case 2:
			return (new PresidentialPardonForm(target));
			break;
		default:
			std::cerr << INTERN_ERR_FORM << ": " << name << std::endl;
			return (NULL);
			break;
	}
	return (NULL);
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, Intern const &ref )
{
	(void)ref;
	return (out << "Intern");
}
