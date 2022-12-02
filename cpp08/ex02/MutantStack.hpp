/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:39:25 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/02 17:28:59 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

// SOURCES
// https://en.cppreference.com/w/cpp/container/stack
// Look the definition and chapter "Member objects"
//
// https://www.cprogramming.com/tutorial/typedef.html

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		MutantStack( void ): std::stack<T>()
		{
			std::cout << *this << " has been created" << std::endl;
		}

		~MutantStack( void )
		{
			std::cout << *this << " has been deleted" << std::endl;
		}

		MutantStack( MutantStack const &ref ): std::stack<T>(ref)
		{
			if (this == (&ref))
					return ;
			*this = ref;
		}

		// OVERLOAD OPERATOR
		MutantStack	&operator = ( MutantStack const &ref )
		{
			std::stack<T>		*parentThis;
			const std::stack<T>	*parentClone;

			if (this == (&ref))
				return (*this);
			parentThis = this;
			parentClone = &ref;
			*parentThis = *parentClone;
			return (*this);
		}

//		typedef typename std::stack<T>::container_type::iterator iterator;
//		iterator begin()
		typename std::stack<T>::container_type::iterator	begin()
		{
			return (std::stack<T>::c.begin());
		}

//		iterator end()
		typename std::stack<T>::container_type::iterator	end()
		{
			return (std::stack<T>::c.end());
		}
};

#endif
