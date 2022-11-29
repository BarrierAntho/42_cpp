/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:20:38 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/29 16:40:06 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

// CONSTRUCTOR / DESTRUCTOR
Data::Data( void ): _c(DATA_DFT_CHAR), _i(DATA_DFT_INT)
{
	std::cout << *this << " has been created" << std::endl;
}

Data::~Data( void )
{
	std::cout << *this << " has been deleted" << std::endl;
}

Data::Data( Data const &ref )
{
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVERLOAD OPERATOR
Data	&Data::operator = ( Data const &ref )
{
	if (this == (&ref))
		return (*this);
	this->_c = (&ref)->getChar();
	this->_i = (&ref)->getInt();
	return (*this);
}

// GETTER / SETTER
char	Data::getChar( void ) const
{
	return (this->_c);
}

int	Data::getInt( void ) const
{
	return (this->_i);
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, Data const &ref )
{
	return (out << "[Data] " << "ptr: " << &ref
			<< "\tchar: " << (&ref)->getChar()
			<< "\tint: " << (&ref)->getInt());
}

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
