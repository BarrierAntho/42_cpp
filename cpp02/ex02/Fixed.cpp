/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:59:26 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/02 14:03:25 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ): _value(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int value )
{
//	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(value * (1 << this->_frac));
}

Fixed::Fixed( const float value )
{
//	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(value * (1 << this->_frac)));
}

Fixed::~Fixed( void )
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed )
{
//	std::cout << "Copy constructor called" << std::endl;
	if (this == &fixed)
		return ;
	*this = fixed;
}

Fixed	&Fixed::operator = ( const Fixed &fixed )
{
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &fixed)
		return (*this);
	this->setRawBits((&fixed)->getRawBits());
	return (*this);
}

Fixed	Fixed::operator + ( const Fixed &fixed )
{
//	std::cout << "Arithmetic \"+\" operator called" << std::endl;
	return Fixed (this->toFloat() + (&fixed)->toFloat());
}

Fixed	Fixed::operator - ( const Fixed &fixed )
{
//	std::cout << "Arithmetic \"-\" operator called" << std::endl;
	return Fixed (this->toFloat() - (&fixed)->toFloat());
}

Fixed	Fixed::operator * ( const Fixed &fixed )
{
//	std::cout << "Arithmetic \"*\" operator called" << std::endl;
	return Fixed (this->toFloat() * (&fixed)->toFloat());
}

Fixed	Fixed::operator / ( const Fixed &fixed )
{
//	std::cout << "Arithmetic \"/\" operator called" << std::endl;
	return Fixed (this->toFloat() / (&fixed)->toFloat());
}

Fixed	Fixed::operator ++ ( void )
{
//	std::cout << "Pre-increment \"++\" operator called" << std::endl;
	return Fixed (this->getRawBits() + 1);
}

Fixed	Fixed::operator ++ ( int )
{
	Fixed	tmp(*this);

//	std::cout << "Post-increment \"++\" operator called" << std::endl;
	this->setRawBits(this->getRawBits() + 1);
	return (tmp);
}

Fixed	Fixed::operator -- ( void )
{
//	std::cout << "Pre-decrement \"--\" operator called" << std::endl;
	return Fixed(this->getRawBits() - 1);
}

Fixed	Fixed::operator -- ( int )
{
	Fixed	tmp(*this);

//	std::cout << "Post-decrement \"--\" operator called" << std::endl;
	this->setRawBits(this->getRawBits() - 1);
	return (tmp);
}

bool	Fixed::operator > ( const Fixed &fixed ) const
{
//	std::cout << "Comparison \">\" operator called" << std::endl;
	if (this->getRawBits() > (&fixed)->getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator < ( const Fixed &fixed ) const
{
//	std::cout << "Comparison \"<\" operator called" << std::endl;
	if (this->getRawBits() < (&fixed)->getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator >= ( const Fixed &fixed ) const
{
//	std::cout << "Comparison \">=\" operator called" << std::endl;
	if (this->getRawBits() >= (&fixed)->getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator <= ( const Fixed &fixed ) const
{
//	std::cout << "Comparison \"<=\" operator called" << std::endl;
	if (this->getRawBits() <= (&fixed)->getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator == ( const Fixed &fixed ) const
{
//	std::cout << "Comparison \"==\" operator called" << std::endl;
	if (this->getRawBits() == (&fixed)->getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator != ( const Fixed &fixed ) const
{
//	std::cout << "Comparison \"!=\" operator called" << std::endl;
	if (this->getRawBits() != (&fixed)->getRawBits())
		return (true);
	else
		return (false);
}

int	Fixed::getRawBits( void ) const
{
	return (this->_value);
}

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->getRawBits() / (1 << this->_frac));
}

int	Fixed::toInt( void ) const
{
	return (this->getRawBits() / (1 << this->_frac));
}

Fixed	&Fixed::min( Fixed &a, Fixed &b )
{
	if ( a == b )
		return (a);
	else if ( a < b )
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::min( const Fixed &a, const Fixed &b )
{
	if ( a == b )
		return (a);
	else if ( a < b )
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max( Fixed &a, Fixed &b )
{
	if ( a == b )
		return (a);
	else if ( a > b )
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::max( const Fixed &a, const Fixed &b )
{
	if ( a == b )
		return (a);
	else if ( a > b )
		return (a);
	else
		return (b);
}

void	Fixed::show( void ) const
{
	std::cout << this->getRawBits() << std::endl;
}

std::ostream	&operator << (std::ostream &out, const Fixed &fixed )
{
	return (out << (&fixed)->toFloat());
}
