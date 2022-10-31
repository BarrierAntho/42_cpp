/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:59:26 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/31 13:38:55 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int value )
{
	this->_value = value * (1 << this->_frac);
}

Fixed::Fixed( const float value )
{
	this->_value = roundf(value * (1 << this->_frac));
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed )
{
	std::cout << "Copy constructor called" << std::endl;
	if (this == &fixed)
		return ;
	this->_value = (&fixed)->getRawBits();
}

Fixed	&Fixed::operator = ( const Fixed &fixed )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &fixed)
		return (*this);
	this->_value = (&fixed)->getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw )
{
//	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->getRawBits() / (1 << this->_frac));
}

int	Fixed::toInt( void ) const
{
//	return (roundf(this->getRawBits() / (1 << this->_frac)));
	return (this->getRawBits() / (1 << this->_frac));
}

void	Fixed::show( void ) const
{
	std::cout << this->getRawBits() << std::endl;
}

std::ostream	&operator << (std::ostream &out, const Fixed &fixed )
{
	return (out << (&fixed)->toFloat());
}
