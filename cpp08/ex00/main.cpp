/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 08:31:04 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/02 10:17:31 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include <ctime>
#include <iostream>
#include <algorithm>

#include "easyfind.hpp"

// CONTAINERS
#include <deque>
#include <list>
#include <vector>

#define SEP_P "##############################"
#define SEP_SP "------------------------------"

#ifndef CT_SIZE
# define CT_SIZE 10
#endif
#ifndef MY_RAND_RANGE
# define MY_RAND_RANGE 20
#endif
#ifndef TEST_RANGE
# define TEST_RANGE 10
#endif

// BOOK PAGE 464
//int	sequence( void )
//{
//	static int n = 0;
//	return n++;
//}

int	myRand( void )
{
	return (rand() % MY_RAND_RANGE);
}

int	main ( void )
{
	srand(time(NULL));
	{
		std::cout << SEP_P << std::endl;
		std::cout << "TEST - VECTOR" << std::endl;
		std::cout << SEP_P << std::endl;
		std::vector<int>		ct(CT_SIZE);
		std::vector<int>::iterator	it;
		int				toFind;

		std::cout << "Generation of random value in progres..." << std::endl;
		std::generate(ct.begin(), ct.end(), myRand);
		//std::generate(ct.begin(), ct.end(), sequence);
		std::cout << "Generation of random value ended" << std::endl;
		////////////////////
		std::cout << SEP_SP << std::endl;
		////////////////////
		std::cout << "Loop through the container in progress.." << std::endl;
		it = ct.begin();
		for (it = ct.begin(); it != ct.end(); it++)
			std::cout << "test: " << *it << std::endl;
		std::cout << "Loop through the container ended" << std::endl;
		////////////////////
		std::cout << SEP_SP << std::endl;
		////////////////////
		for (int i = 0; i < TEST_RANGE; i++)
		{
			toFind = rand() % MY_RAND_RANGE;
			std::cout << "Test with \'To Find\' = " << toFind << std::endl;
			try
			{
				easyfind(ct, toFind);
			}
			catch (std::exception &e)
			{
				std::cerr << "Error: " << e.what() << std::endl;
			}
			////////////////////
			std::cout << SEP_SP << std::endl;
			////////////////////
		}
	}
	////////////////////
	////////////////////
	{
		std::cout << SEP_P << std::endl;
		std::cout << "TEST - LIST" << std::endl;
		std::cout << SEP_P << std::endl;
		std::list<int>		ct(CT_SIZE);
		std::list<int>::iterator	it;
		int				toFind;

		std::cout << "Generation of random value in progres..." << std::endl;
		std::generate(ct.begin(), ct.end(), myRand);
		//std::generate(ct.begin(), ct.end(), sequence);
		std::cout << "Generation of random value ended" << std::endl;
		////////////////////
		std::cout << SEP_SP << std::endl;
		////////////////////
		std::cout << "Loop through the container in progress.." << std::endl;
		it = ct.begin();
		for (it = ct.begin(); it != ct.end(); it++)
			std::cout << "test: " << *it << std::endl;
		std::cout << "Loop through the container ended" << std::endl;
		////////////////////
		std::cout << SEP_SP << std::endl;
		////////////////////
		for (int i = 0; i < TEST_RANGE; i++)
		{
			toFind = rand() % MY_RAND_RANGE;
			std::cout << "Test with \'To Find\' = " << toFind << std::endl;
			try
			{
				easyfind(ct, toFind);
			}
			catch (std::exception &e)
			{
				std::cerr << "Error: " << e.what() << std::endl;
			}
			////////////////////
			std::cout << SEP_SP << std::endl;
			////////////////////
		}
	}
	////////////////////
	////////////////////
	{
		std::cout << SEP_P << std::endl;
		std::cout << "TEST - DEQUE" << std::endl;
		std::cout << SEP_P << std::endl;
		std::deque<int>		ct(CT_SIZE);
		std::deque<int>::iterator	it;
		int				toFind;

		std::cout << "Generation of random value in progres..." << std::endl;
		std::generate(ct.begin(), ct.end(), myRand);
		//std::generate(ct.begin(), ct.end(), sequence);
		std::cout << "Generation of random value ended" << std::endl;
		////////////////////
		std::cout << SEP_SP << std::endl;
		////////////////////
		std::cout << "Loop through the container in progress.." << std::endl;
		it = ct.begin();
		for (it = ct.begin(); it != ct.end(); it++)
			std::cout << "test: " << *it << std::endl;
		std::cout << "Loop through the container ended" << std::endl;
		////////////////////
		std::cout << SEP_SP << std::endl;
		////////////////////
		for (int i = 0; i < TEST_RANGE; i++)
		{
			toFind = rand() % MY_RAND_RANGE;
			std::cout << "Test with \'To Find\' = " << toFind << std::endl;
			try
			{
				easyfind(ct, toFind);
			}
			catch (std::exception &e)
			{
				std::cerr << "Error: " << e.what() << std::endl;
			}
			////////////////////
			std::cout << SEP_SP << std::endl;
			////////////////////
		}
	}
	return (0);
}
