/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScalarTypes.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:28:33 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/29 15:57:50 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertScalarTypes.hpp"

// CONSTRUCTOR / DESTRUCTOR
ConvertScalarTypes::ConvertScalarTypes( void ): _str(CVT_DFT_STR), _type(CVT_DFT_TYPE),
	_handle(0.0), _intpart(0.0), _fractpart(0.0),
	_char(0), _int(0), _float(0.0f), _double(0.0),
	_isPseudo(false), _isPseudoF(false),
	_err_char(true), _err_int(true), _err_float(true), _err_double(true)
{
	this->_type = this->inputType();
	if (this->_type == CHR)
		this->_handle = static_cast<double>(this->_str[0]);
	else
		this->_handle = strtod(this->_str.c_str(), NULL);
	this->_fractpart = std::modf(this->_handle, &this->_intpart);
	this->convert();
	this->show();
}

ConvertScalarTypes::~ConvertScalarTypes( void )
{
}

ConvertScalarTypes::ConvertScalarTypes( std::string const &newStr ): _str(newStr), _type(CVT_DFT_TYPE),
	_handle(0.0), _intpart(0.0), _fractpart(0.0),
	_char(0), _int(0), _float(0.0f), _double(0.0),
	_isPseudo(false), _isPseudoF(false),
	_err_char(true), _err_int(true), _err_float(true), _err_double(true)
{
	this->_type = this->inputType();
	if (this->_type == CHR)
		this->_handle = static_cast<double>(this->_str[0]);
	else
		this->_handle = strtod(this->_str.c_str(), NULL);
	this->_fractpart = std::modf(this->_handle, &this->_intpart);
	this->convert();
	this->show();
}

ConvertScalarTypes::ConvertScalarTypes( ConvertScalarTypes const &ref )
{
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVERLOAD OPERATOR
ConvertScalarTypes	&ConvertScalarTypes::operator = ( ConvertScalarTypes const &ref )
{
	if (this == (&ref))
		return (*this);
	this->_str = (&ref)->getString();
	this->_type = (&ref)->getType();
	this->_handle = (&ref)->getHandle();
	this->_intpart = (&ref)->getIntPart();
	this->_fractpart = (&ref)->getFractPart();
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
	char	res;

	res = 0;
	if (this->_type == STRG || this->_handle < CHAR_MIN || this->_handle > CHAR_MAX
			|| this->_isPseudo == true || this->_isPseudoF == true)
		return (res);
	else
	{
		res = static_cast<char>(this->_handle);
		this->_err_char = false;
		return (res);
	}
}

ConvertScalarTypes::operator int ( void )
{
	int	res;

	res = 0;
	if (this->_type == STRG || this->_handle < INT_MIN || this->_handle > INT_MAX
			|| this->_isPseudo == true || this->_isPseudoF == true)
		return (res);
	else
	{
		res = static_cast<int>(this->_handle);
		this->_err_int = false;
		return (res);
	}
}

ConvertScalarTypes::operator float ( void )
{
	float	res;

	res = 0.0f;
	if (this->_type == STRG)
		return (res);
	else
	{
		res = static_cast<float>(this->_handle);
		this->_err_float = false;
		return (res);
	}
}

ConvertScalarTypes::operator double ( void )
{
	double	res;

	res = 0.0;
	if (this->_type == STRG)
		return (res);
	else
	{
		res = this->_handle;
		this->_err_double = false;
		return (res);
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

double	ConvertScalarTypes::getHandle( void ) const
{
	return (this->_handle);
}

double	ConvertScalarTypes::getIntPart( void ) const
{
	return (this->_intpart);
}

double	ConvertScalarTypes::getFractPart( void ) const
{
	return (this->_fractpart);
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
int	ConvertScalarTypes::inputType( void )
{
	if (this->_str.compare(CVT_INF_P) == 0 || this->_str.compare(CVT_INF_PP) == 0
			|| this->_str.compare(CVT_INF_N) == 0
			|| this->_str.compare(CVT_NAN) == 0)
	{
		this->_isPseudoF = true;
		return (FLT);
	}
	else if (this->_str.compare(CVT_INFF_P) == 0 || this->_str.compare(CVT_INFF_PP) == 0
			|| this->_str.compare(CVT_INFF_N) == 0
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
	this->showChar();
	std::cout << std::endl;
	this->showInt();
	std::cout << std::endl;
	this->showFloat();
	std::cout << std::endl;
	this->showDouble();
	std::cout << std::endl;
}

void	ConvertScalarTypes::showChar( void ) const
{
	std::cout << "char: ";
	if (this->_err_char == true)
		std::cout << CVT_IMPOSSIBLE;
	else if (std::isprint(this->_char) == 0)
		std::cout << CVT_NOT_DISP;
	else
		std::cout << "\'" << this->_char << "\'";
}

void	ConvertScalarTypes::showInt( void ) const
{
	std::cout << "int: ";
	if (this->_err_int == true)
		std::cout << CVT_IMPOSSIBLE;
	else
		std::cout << this->_int;
}

void	ConvertScalarTypes::showFloat( void ) const
{
	std::cout << "float: ";
	if (this->_err_float == true)
		std::cout << CVT_IMPOSSIBLE;
	else
	{
		std::cout << this->_float;
		if (this->_fractpart == 0 && this->_isPseudo == false && this->_isPseudoF == false)
			std::cout << ".0";
		std::cout << "f";
	}
}

void	ConvertScalarTypes::showDouble( void ) const
{
	std::cout << "double: ";
	if (this->_err_double == true)
		std::cout << CVT_IMPOSSIBLE;
	else
	{
		std::cout << this->_double;
		if (this->_fractpart == 0 && this->_isPseudo == false && this->_isPseudoF == false)
			std::cout << ".0";
	}
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
