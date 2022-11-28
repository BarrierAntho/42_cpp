/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScalarTypes.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:28:33 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/28 17:37:56 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertScalarTypes.hpp"

// CONSTRUCTOR / DESTRUCTOR
ConvertScalarTypes::ConvertScalarTypes( void ): _str(CVT_DFT_STR), _type(CVT_DFT_TYPE)
{
	std::cout << "ConvertScalarTypes has been created" << std::endl;
}

ConvertScalarTypes::~ConvertScalarTypes( void )
{
	std::cout << "ConvertScalarTypes has been deleted" << std::endl;
}

ConvertScalarTypes::ConvertScalarTypes( std::string const &str ): _str(str), _type(CVT_DFT_TYPE)
{
	std::cout << "ConvertScalarTypes has been created" << std::endl;
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
	this->_str = (&ref)->getString();
	this->_type = (&ref)->getType();
	return (*this);
}

ConvertScalarTypes::operator char ( void )
{
	// TO BE DONE
	return ('a');
}

ConvertScalarTypes::operator int ( void )
{
	// TO BE DONE
	return (1);
}

ConvertScalarTypes::operator float ( void )
{
	// TO BE DONE
	return (42.42f);
}

ConvertScalarTypes::operator double ( void )
{
	// TO BE DONE
	return (42.42);
}

// GETTER / SETTER
std::string	ConvertScalarTypes::getString( void ) const
{
	return (_str);
}

int	ConvertScalarTypes::getType( void ) const
{
	return (_type);
}

// MEMBER FUNCTIONS
// Example:
// ??: "", " ", "  "
// char: "a", "!"
// float: "0.0f", " 0.0f", "0.0f ", " 0.0f "
// double: "0.0", " 0.0", "0.0 ", " 0.0 "
// string: "test", " test", "test ", " test ", "a1"
int	ConvertScalarTypes::getInputType( void )
{
	if (this->_str.length() == 1)
	{
		if (std::isdigit(this->_str[0]) == 1)
			return (INTG);
		else
			return (CHR);
	}
	else
	{

	}
	return (NA);
}

bool	ConvertScalarTypes::isString( void )
{
	size_t	i;
	int	dot;
	int	f;

	dot = 0;
	f = 0;
	for (i = 0; i < this->_str.length(); i++)
	{
		if (this->_str.at(i) == '.')
		{
			dot++;
			if (dot > 1)
				return (true);
		}
		else if (this->_str.at(i) == 'f')
		{
			f++;
			if (f > 1)
				return (true);
		}
		else if (std::isdigit(this->_str.at(i)) == 0)
			return (true);
	}
	return (false);
}

// EXCEPTION FUNCTIONS
const char	*ConvertScalarTypes::NullInputException::what( void ) const throw()
{
	return ("NullInputException");
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, ConvertScalarTypes const &ref )
{
	return (out << "[ConvertScalarTypes] "
			<< "string: " << (&ref)->getString() << std::endl);
}
