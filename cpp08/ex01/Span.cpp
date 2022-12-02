/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:53:35 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/02 15:19:50 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// CONSTRUCTOR / DESTRUCTOR
Span::Span( void ): _size(0), _container(std::vector<int>())
{
	std::cout << *this << " has been created" << std::endl;
}

Span::~Span( void )
{
	std::cout << *this << " has been deleted" << std::endl;
}

Span::Span ( unsigned int n ): _size(n), _container(std::vector<int>())
{
	std::cout << *this << " has been created" << std::endl;
}

Span::Span( Span const &ref )
{
	if (this == (&ref))
		return ;
	*this = ref;
}

// OVEROLAD OPERATOR
Span	&Span::operator = ( Span const &ref )
{
	if (this == &(ref))
		return (*this);
	this->_container = (&ref)->getContainer();
	return (*this);
}

// GETTER / SETTER
std::vector<int>	Span::getContainer( void ) const
{
	return (this->_container);
}

//// SUBJECT FUNCTIONS
void	Span::addNumber( int n )
{
	if (this->_container.size() >= this->_size)
		throw (Span::CapacityException());
	this->_container.push_back(n);
}

int	Span::shortestSpan( void )
{
	std::vector<int>			sorted;
	int					gap;
	int					tmpgap;
	unsigned int				i;

	if (this->_container.size() <= 1)
		throw (Span::SizeException());
	sorted = this->_container;
	gap = INT_MAX;
	tmpgap = INT_MAX;
	std::sort(sorted.begin(), sorted.end());
	for (i = 0; i < (sorted.size() - 1); i++)
	{
		tmpgap = sorted.at(i + 1) - sorted.at(i);
		if (tmpgap < gap)
			gap = tmpgap;
	}
	return (gap);
}

int	Span::longestSpan( void )
{
	std::vector<int>			sorted;

	if (this->_container.size() <= 1)
		throw (Span::SizeException());
	sorted = this->_container;
	std::sort(sorted.begin(), sorted.end());
	return (sorted.at((sorted.size() - 1)) - sorted.at(0));
}

// UTILS
void	Span::show( void )
{
	typename std::vector<int>::iterator	it;

	if (this->_container.size() == 0)
		return ;
	it = this->_container.begin();
	for (it = this->_container.begin(); it != this->_container.end(); it++)
		std::cout << "[show] container value: " << *it << std::endl;
}

// EXCEPTION FUNCTIONS
const char	*Span::CapacityException::what( void ) const throw()
{
	return ("CapacityException");
}

const char	*Span::SizeException::what( void ) const throw()
{
	return ("SizeException");
}

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &out, Span const &ref )
{
	(void)ref;
	return (out << "[Span]");
}

int	myRandValue( void )
{
	return (rand() % MY_RAND_RANGE);
}

void	Span::generateData( int n )
{
	std::vector<int>	tmp(n);

	srand(time(NULL));
	std::generate(tmp.begin(), tmp.end(), myRandValue);
	std::copy(tmp.begin(), tmp.end(), std::inserter(this->_container, this->_container.begin()));
}
