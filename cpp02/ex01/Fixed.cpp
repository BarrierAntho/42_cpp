/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:59:26 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/01 10:44:15 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value * (1 << this->_frac);
}

Fixed::Fixed( const float value )
{
	std::cout << "Float constructor called" << std::endl;
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
	*this = fixed;
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
	return (roundf(this->getRawBits() / (1 << this->_frac)));
}

void	Fixed::show( void ) const
{
	std::cout << this->getRawBits() << std::endl;
}

std::ostream	&operator << (std::ostream &out, const Fixed &fixed )
{
	return (out << (&fixed)->toFloat());
}
