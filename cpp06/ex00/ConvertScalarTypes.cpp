/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScalarTypes.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:28:33 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/29 14:09:55 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertScalarTypes.hpp"

// CONSTRUCTOR / DESTRUCTOR
ConvertScalarTypes::ConvertScalarTypes( void ): _str(CVT_DFT_STR), _type(CVT_DFT_TYPE),
	_char(0), _int(0), _float(0.0f), _double(0.0),
	_isPseudo(false), _isPseudoF(false),
	_err_char(true), _err_int(true), _err_float(true), _err_double(true)
{
	this->_type = this->getInputType();
	if (this->_type == CHR)
		this->_handle = static_cast<double>(this->_str[0]);
	else
		this->_handle = strtod(this->_str.c_str(), NULL);
	this->convert();
	std::cout << *this << " has been created" << std::endl;
}

ConvertScalarTypes::~ConvertScalarTypes( void )
{
	std::cout << "ConvertScalarTypes has been deleted" << std::endl;
}

ConvertScalarTypes::ConvertScalarTypes( std::string const &newStr ): _str(newStr), _type(CVT_DFT_TYPE),
	_char(0), _int(0), _float(0.0f), _double(0.0),
	_isPseudo(false), _isPseudoF(false),
	_err_char(true), _err_int(true), _err_float(true), _err_double(true)
{
	this->_type = this->getInputType();
	if (this->_type == CHR)
		this->_handle = static_cast<double>(this->_str[0]);
	else
		this->_handle = strtod(this->_str.c_str(), NULL);
	this->convert();
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
	this->_err_char = (&ref)->getErrChar();
	this->_err_int = (&ref)->getErrInt();
	this->_err_float = (&ref)->getErrFloat();
	this->_err_double = (&ref)->getErrDouble();
	return (*this);
}

ConvertScalarTypes::operator char ( void )
{
	if (this->_type == STRG || this->_handle < CHAR_MIN || this->_handle > CHAR_MAX)
		return (0);
	else
	{
		this->_char = static_cast<char>(this->_handle);
		this->_err_char = false;
		return (this->_char);
	}
}

ConvertScalarTypes::operator int ( void )
{
	if (this->_type == STRG || this->_handle < INT_MIN || this->_handle > INT_MAX)
		return (0);
	else
	{
		this->_int = static_cast<int>(this->_handle);
		this->_err_int = false;
		return (this->_int);
	}
}

ConvertScalarTypes::operator float ( void )
{
	if (this->_type == STRG)
		return (0.0f);
	else
	{
		this->_float = static_cast<float>(this->_handle);
		this->_err_float = false;
		return (this->_float);
	}
}

ConvertScalarTypes::operator double ( void )
{
	if (this->_type == STRG)
		return (0.0f);
	else
	{
		this->_double = this->_handle;
		this->_err_double = false;
		return (this->_double);
	}
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

bool	ConvertScalarTypes::getPseudo( void ) const
{
	return (this->_isPseudo);
}

bool	ConvertScalarTypes::getPseudoF( void ) const
{
	return (this->_isPseudoF);
}

bool	ConvertScalarTypes::getErrChar( void ) const
{
	return (this->_err_char);
}

bool	ConvertScalarTypes::getErrInt( void ) const
{
	return (this->_err_int);
}

bool	ConvertScalarTypes::getErrFloat( void ) const
{
	return (this->_err_float);
}

bool	ConvertScalarTypes::getErrDouble( void ) const
{
	return (this->_err_double);
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
	{
		this->_isPseudoF = true;
		return (FLT);
	}
	else if (this->_str.compare(CVT_INFF_P) == 0 || this->_str.compare(CVT_INFF_N) == 0
			|| this->_str.compare(CVT_NANF) == 0)
	{
		this->_isPseudo = true;
		return (DBL);
	}
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

void	ConvertScalarTypes::convert( void )
{
	switch (this->_type)
	{
		case CHR:
			this->_char = static_cast<char>(*this);
			this->_int = static_cast<int>(*this);
			this->_float = static_cast<float>(*this);
			this->_double = static_cast<double>(*this);
			break;
		case INTG:
			this->_int = static_cast<int>(*this);
			this->_char = static_cast<char>(*this);
			this->_float = static_cast<float>(*this);
			this->_double = static_cast<double>(*this);
			break;
		case FLT:
			this->_float = static_cast<float>(*this);
			this->_char = static_cast<char>(*this);
			this->_int = static_cast<int>(*this);
			this->_double = static_cast<double>(*this);
			break;
		case DBL:
			this->_double = static_cast<double>(*this);
			this->_char = static_cast<char>(*this);
			this->_int = static_cast<int>(*this);
			this->_float = static_cast<float>(*this);
			break;
		default:
			this->_char = 0;
			this->_int = 0;
			this->_float = 0.0f;
			this->_double = 0.0;
			break;
	}
}

void	ConvertScalarTypes::show( void ) const
{
	std::cout << "char: ";
	if (this->_err_char == true)
		std::cout << "Impossible";
	else
		std::cout << this->_char;
	std::cout << std::endl;
	std::cout << "int: ";
	if (this->_err_int == true)
		std::cout << "Impossible";
	else
		std::cout << this->_int;
	std::cout << std::endl;
	std::cout << "float: ";
	if (this->_err_float == true)
		std::cout << "Impossible";
	else
		std::cout << this->_float;
	std::cout << std::endl;
	std::cout << "double: ";
	if (this->_err_double == true)
		std::cout << "Impossible";
	else
		std::cout << this->_double;
	std::cout << std::endl;
}

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
