/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScalarTypes.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:28:33 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/29 12:45:12 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertScalarTypes.hpp"

// CONSTRUCTOR / DESTRUCTOR
ConvertScalarTypes::ConvertScalarTypes( void ): _str(CVT_DFT_STR), _type(CVT_DFT_TYPE),
	_char(0), _int(0), _float(0.0f), _double(0.0)
{
	this->_type = this->getInputType();
	if (this->_type == CHR)
		this->_handle = static_cast<double>(this->_str[0]);
	else
		this->_handle = strtod(this->_str.c_str(), NULL);
	std::cout << *this << " has been created" << std::endl;
}

ConvertScalarTypes::~ConvertScalarTypes( void )
{
	std::cout << "ConvertScalarTypes has been deleted" << std::endl;
}

ConvertScalarTypes::ConvertScalarTypes( std::string const &newStr ): _str(newStr), _type(CVT_DFT_TYPE),
	_char(0), _int(0), _float(0.0f), _double(0.0)
{
	this->_type = this->getInputType();
	if (this->_type == CHR)
		this->_handle = static_cast<double>(this->_str[0]);
	else
		this->_handle = strtod(this->_str.c_str(), NULL);
	std::cout << *this << " has been created" << std::endl;
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
	this->_char = (&ref)->getChar();
	this->_int = (&ref)->getInt();
	this->_float = (&ref)->getFloat();
	this->_double = (&ref)->getDouble();
	return (*this);
}

ConvertScalarTypes::operator char ( void )
{
	try
	{
		this->_char = static_cast<char>(this->_handle);
	}
	catch (const std::overflow_error& e)
	{
		std::cout << "TEST ERROR" << std::endl;
	}
	return (this->_char);
}

ConvertScalarTypes::operator int ( void )
{
	try
	{
		this->_int = static_cast<int>(this->_handle);
	}
	catch (const std::overflow_error& e)
	{
		std::cout << "TEST ERROR" << std::endl;
	}
	catch (const std::out_of_range& oor)
	{
		std::cerr << "Out of Range error: " << oor.what() << '\n';
	}
	return (this->_int);
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
	return (this->_str);
}

int	ConvertScalarTypes::getType( void ) const
{
	return (this->_type);
}

char	ConvertScalarTypes::getChar( void ) const
{
	return (this->_char);
}

int	ConvertScalarTypes::getInt( void ) const
{
	return (this->_int);
}

float	ConvertScalarTypes::getFloat( void ) const
{
	return (this->_float);
}

double	ConvertScalarTypes::getDouble( void ) const
{
	return (this->_double);
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
	if (this->_str.compare(CVT_INF_P) == 0 || this->_str.compare(CVT_INF_N) == 0
			|| this->_str.compare(CVT_NAN) == 0)
		return (FLT);
	else if (this->_str.compare(CVT_INFF_P) == 0 || this->_str.compare(CVT_INFF_N) == 0
			|| this->_str.compare(CVT_NANF) == 0)
		return (DBL);
	else if (this->_str.length() == 1)
	{
		if (std::isdigit((unsigned char)this->_str.at(0)) != 0)
			return (INTG);
		else
			return (CHR);
	}
	else
		return (this->checkString());
}

int	ConvertScalarTypes::checkString( void )
{
	size_t	i;
	int	dot;
	int	f;

	dot = 0;
	f = 0;
	for (i = 0; i < this->_str.length(); i++)
	{
		if (this->_str.at(i) == '.')
			dot++;
		else if (this->_str.at(i) == 'f')
			f++;
		else if (std::isdigit((unsigned char)this->_str.at(i)) == 0)
			return (STRG);
		if (dot > 1 || f > 1)
			return (STRG);
	}
	if (dot == 1 && f == 1) // 42.42f
		return (FLT);
	else if (dot == 1 && f == 0) // 42.42
		return (DBL);
	else if (dot == 0 && f == 1) // 42f
		return (STRG);
	else
		return (INTG);
}

//void	ConvertScalarTypes::convert( void )
//{
//	switch (this->_type)
//	{
//		case CHR:
//			this->_char = this->_str.at(0);
//			break;
//		case INTG:
//			break;
//		case FLT:
//			break;
//		case DBL:
//			break;
//	}
//}

// EXCEPTION FUNCTIONS
const char	*ConvertScalarTypes::NullInputException::what( void ) const throw()
{
	return ("NullInputException");
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, ConvertScalarTypes const &ref )
{
	return (out << "[ConvertScalarTypes] " << "string: " << (&ref)->getString()
			<< "\ttype: " << (&ref)->getType());
}
