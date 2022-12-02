/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:21:06 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/02 18:13:15 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <iostream>

#include "MutantStack.hpp"

#define SEP_P "##############################"
#define SEP_SP "------------------------------"

int	main( void )
{
	std::cout << SEP_P << std::endl;
	std::cout << "TEST - SUBJECT" << std::endl;
	std::cout << SEP_P << std::endl;
	{
		MutantStack<int>	mstack;
		
		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	////////////////////
	std::cout << SEP_P << std::endl;
	std::cout << "TEST - STD::LIST" << std::endl;
	std::cout << SEP_SP << std::endl;
	////////////////////
	{
		std::list<int>	mstack;
		
		mstack.push_front(5);
		mstack.push_front(17);

		std::cout << mstack.front() << std::endl;

		mstack.pop_front();

		std::cout << mstack.size() << std::endl;

		mstack.push_front(3);
		mstack.push_front(5);
		mstack.push_front(737);
		//[...]
		mstack.push_front(0);

		std::list<int>::reverse_iterator it = mstack.rbegin();
		std::list<int>::reverse_iterator ite = mstack.rend();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	std::cout << SEP_P << std::endl;
	std::cout << SEP_P << std::endl;
	std::cout << SEP_P << std::endl;
	std::cout << "TEST - SUBJECT WITH DETAILS" << std::endl;
	std::cout << SEP_P << std::endl;
	{
		MutantStack<int>	mstack;
		
		std::cout << "PUSH" << std::endl;
		std::cout << "push(5)" << std::endl;
		std::cout << "push(17)" << std::endl;
		mstack.push(5);
		mstack.push(17);
		std::cout << SEP_SP << std::endl;

		std::cout << "TOP" << std::endl;
		std::cout << mstack.top() << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "POP" << std::endl;
		mstack.pop();
		std::cout << mstack.top() << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "SIZE" << std::endl;
		std::cout << mstack.size() << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "PUSH" << std::endl;
		std::cout << "push(3)" << std::endl;
		mstack.push(3);
		std::cout << SEP_SP << std::endl;

		std::cout << "TOP" << std::endl;
		std::cout << mstack.top() << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "PUSH" << std::endl;
		std::cout << "push(5)" << std::endl;
		mstack.push(5);
		std::cout << SEP_SP << std::endl;

		std::cout << "TOP" << std::endl;
		std::cout << mstack.top() << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "PUSH" << std::endl;
		std::cout << "push(737)" << std::endl;
		mstack.push(737);
		std::cout << SEP_SP << std::endl;

		std::cout << "TOP" << std::endl;
		std::cout << mstack.top() << std::endl;
		std::cout << SEP_SP << std::endl;

		//[...]

		std::cout << "PUSH" << std::endl;
		std::cout << "push(0)" << std::endl;
		mstack.push(0);
		std::cout << SEP_SP << std::endl;

		std::cout << "TOP" << std::endl;
		std::cout << mstack.top() << std::endl;
		std::cout << SEP_SP << std::endl;

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		std::cout << "SHOW" << std::endl;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	////////////////////
	std::cout << SEP_P << std::endl;
	std::cout << "TEST - STD::LIST WITH DETAILS" << std::endl;
	std::cout << SEP_SP << std::endl;
	////////////////////
	{
		std::list<int>	mstack;
		
		std::cout << "PUSH" << std::endl;
		std::cout << "push(5)" << std::endl;
		std::cout << "push(17)" << std::endl;
		mstack.push_front(5);
		mstack.push_front(17);
		std::cout << SEP_SP << std::endl;

		std::cout << "TOP" << std::endl;
		std::cout << mstack.front() << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "POP" << std::endl;
		mstack.pop_front();
		std::cout << mstack.front() << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "SIZE" << std::endl;
		std::cout << mstack.size() << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "PUSH" << std::endl;
		std::cout << "push(3)" << std::endl;
		mstack.push_front(3);
		std::cout << SEP_SP << std::endl;

		std::cout << "TOP" << std::endl;
		std::cout << mstack.front() << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "PUSH" << std::endl;
		std::cout << "push(5)" << std::endl;
		mstack.push_front(5);
		std::cout << SEP_SP << std::endl;

		std::cout << "TOP" << std::endl;
		std::cout << mstack.front() << std::endl;
		std::cout << SEP_SP << std::endl;

		std::cout << "PUSH" << std::endl;
		std::cout << "push(737)" << std::endl;
		mstack.push_front(737);
		std::cout << SEP_SP << std::endl;

		std::cout << "TOP" << std::endl;
		std::cout << mstack.front() << std::endl;
		std::cout << SEP_SP << std::endl;

		//[...]

		std::cout << "PUSH" << std::endl;
		std::cout << "push(0)" << std::endl;
		mstack.push_front(0);
		std::cout << SEP_SP << std::endl;

		std::cout << "TOP" << std::endl;
		std::cout << mstack.front() << std::endl;
		std::cout << SEP_SP << std::endl;

		std::list<int>::reverse_iterator it = mstack.rbegin();
		std::list<int>::reverse_iterator ite = mstack.rend();

		++it;
		--it;
		std::cout << "SHOW" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	return (0);
}
