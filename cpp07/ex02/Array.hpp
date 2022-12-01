/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:54:35 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/01 12:48:59 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstring>
# include <climits>
# include <iostream>

# ifndef ARR_ERR_SIZE
#  define ARR_ERR_SIZE "Size error"
# endif
# ifndef ARR_ERR_RANGE
#  define ARR_ERR_RANGE "Index out of range"
# endif

template <class T>
class Array
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		Array( void ): _size(0), _array(NULL)
		{
			std::cout << "Array has been created" << std::endl;
		}

		~Array( void )
		{
			if (this->_array != NULL)
				delete[] this->_array;
			std::cout << "Array has been delete" << std::endl;
		}

		Array( unsigned int n )
		{
			if (n == 0 || n > INT_MAX)
				throw (Array::SizeException());
			this->_size = n;
			this->_array = new T[n];
			bzero(this->_array, sizeof(T) * n);
			std::cout << "Array has been created" << std::endl;
		}

		Array( Array const &ref ): _size(0), _array(NULL) // attributes with default value to avoir "uninitialised value(s)"
		{
			if (this == (&ref))
				return;
			*this = ref;
		}

		// OVERLOAD OPERATOR
		Array	&operator = ( Array const &ref)
		{
			if (this == (&ref))
				return (*this);
			if (this->_array != NULL)
				delete[] this->_array;
			this->_size = (&ref)->size();
			if (this->_size != 0)
			{
				this->_array = new T[this->_size];				
				memcpy(this->_array, (&ref)->getArray(), sizeof(T) * this->_size);
			}
			else
				this->_array = NULL;
			return (*this);
		}

		T	&operator [] ( unsigned int i )
		{
			if (i >= this->_size)
				throw (Array::OutOfRangeException());
			return (this->_array[i]);
		}

		// GETTER / SETTER
		T	*getArray( void ) const
		{
			return (this->_array);
		}

		// SUBJECT FUNCTIONS
		unsigned int	size( void ) const
		{
			return (this->_size);
		}

		class SizeException: public std::exception
		{
			virtual const char	*what( void ) const throw()
			{
				return (ARR_ERR_SIZE);
			}
		};

		class OutOfRangeException: public std::exception
		{
			virtual const char	*what( void ) const throw()
			{
				return (ARR_ERR_RANGE);
			}
		};

	private:
		unsigned int	_size;
		T		*_array;
};

#endif
