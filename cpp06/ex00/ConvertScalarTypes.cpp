/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScalarTypes.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:28:33 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/22 14:29:53 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertScalarTypes.hpp"

// CONSTRUCTOR / DESTRUCTOR
ConvertScalarTypes::ConvertScalarTypes( void )
{
	std::cout << "ConvertScalarTypes has been created" << std::endl;
}

ConvertScalarTypes::~ConvertScalarTypes( void )
{
	std::cout << "ConvertScalarTypes has been deleted" << std::endl;
}

ConvertScalarTypes::ConvertScalarTypes( ConvertScalarTypes const &ref )
{
	std::cout << "ConvertScalarTypes constructor copy" << std::endl;
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVERLOAD OPERATOR
ConvertScalarTypes	&ConvertScalarTypes::operator = ( ConvertScalarTypes const &ref )
{
	std::cout << "ConvertScalarTypes overload operator =" << std::endl;
	if (this == (&ref))
		return (*this);
	return (*this);
}

// EXCEPTION FUNCTIONS
const char	*ConvertScalarTypes::NullInputException::what( void ) const throw()
{
	return ("NullInputException");
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, ConvertScalarTypes const &ref )
{
	(void)ref;
	return (out << "ConvertScalarTypes object");
}
