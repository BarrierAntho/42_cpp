/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:01:51 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/01 12:30:47 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define SEP_P "##############################"
#define SEP_SP "------------------------------"

int	main( void )
{
	const unsigned int	n = 7; // SIZE OF THE ARRAY
	unsigned int		i; // ITERATOR LOOP
	{
		std::cout << SEP_P << std::endl;
		std::cout << "TEST - CHAR" << std::endl;
		std::cout << SEP_P << std::endl;
		Array<char> a(n);
		char	b[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g'};

		std::cout << "size: " << a.size() << std::endl;
		std::cout << "Process automatic filling in progress..." << std::endl;
		for (i = 0; i < n; i++)
			a[i] = b[i];
		std::cout << "Process automatic filling ended" << std::endl;
		std::cout << "Loop through the array in progress" << std::endl;
		for (i = 0; i < n; i++)
			std::cout << "a[" << i << "]: " << a[i] << std::endl;
		std::cout << "Loop through the array ended" << std::endl;
	}
	////////////////////////////////////////
	////////////////////////////////////////
	////////////////////////////////////////
	{
		std::cout << SEP_P << std::endl;
		std::cout << "TEST - INT" << std::endl;
		std::cout << SEP_P << std::endl;
		Array<int> a(n);
		int	b[] = { 0, 1, 10, -1, -10, INT_MIN, INT_MAX };

		std::cout << "size: " << a.size() << std::endl;
		std::cout << "Process automatic filling in progress..." << std::endl;
		for (i = 0; i < n; i++)
			a[i] = b[i];
		std::cout << "Process automatic filling ended" << std::endl;
		std::cout << "Loop through the array in progress" << std::endl;
		for (i = 0; i < n; i++)
			std::cout << "a[" << i << "]: " << a[i] << std::endl;
		std::cout << "Loop through the array ended" << std::endl;
	}
	////////////////////////////////////////
	////////////////////////////////////////
	////////////////////////////////////////
	{
		std::cout << SEP_P << std::endl;
		std::cout << "TEST - DOUBLE" << std::endl;
		std::cout << SEP_P << std::endl;
		Array<double> a(n);
		double	b[] = { 0.0, 1.1, 10.42, -1.0, -10.42, INT_MIN, INT_MAX };

		std::cout << "size: " << a.size() << std::endl;
		std::cout << "Process automatic filling in progress..." << std::endl;
		for (i = 0; i < n; i++)
			a[i] = b[i];
		std::cout << "Process automatic filling ended" << std::endl;
		std::cout << "Loop through the array in progress" << std::endl;
		for (i = 0; i < n; i++)
			std::cout << "a[" << i << "]: " << a[i] << std::endl;
		std::cout << "Loop through the array ended" << std::endl;
	}
	////////////////////////////////////////
	////////////////////////////////////////
	////////////////////////////////////////
	std::cout << SEP_P << std::endl;
	std::cout << "TEST - INIT WITH DEFAULT CONSTRUCTOR" << std::endl;
	std::cout << SEP_P << std::endl;
	{
		std::cout << "TEST - INT" << std::endl;
		std::cout << SEP_SP << std::endl;
		std::cout << "DEFAULT CONSTRUCTOR" << std::endl;
		std::cout << "Array<int> a" << std::endl;
		Array<int> a;

		std::cout << "obj ptr: " << &a << "\tsize: " << a.size() << "\tarray ptr: " << a.getArray() << std::endl;
		std::cout << "Loop through the array in progress" << std::endl;
		if (a.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "a[" << i << "]: " << a[i] << std::endl;
		}
		std::cout << "Loop through the array ended" << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "COPY CONSTRUCTOR" << std::endl;
		std::cout << "Array<int> b(a)" << std::endl;
		Array<int> b(a);

		std::cout << "obj ptr: " << &b << "\tsize: " << b.size() << "\tarray ptr: " << b.getArray() << std::endl;
		std::cout << "Loop through the array in progress" << std::endl;
		if (b.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "b[" << i << "]: " << b[i] << std::endl;
		}
		std::cout << "Loop through the array ended" << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "OVERLOAD OPERATOR" << std::endl;
		std::cout << "Array<int> c = a" << std::endl;
		Array<int> c = a;

		std::cout << "obj ptr: " << &c << "\tsize: " << c.size() << "\tarray ptr: " << c.getArray() << std::endl;
		std::cout << "Loop through the array in progress" << std::endl;
		if (c.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "c[" << i << "]: " << c[i] << std::endl;
		}
		std::cout << "Loop through the array ended" << std::endl;
		std::cout << SEP_SP << std::endl;
	}
	////////////////////////////////////////
	////////////////////////////////////////
	////////////////////////////////////////
	std::cout << SEP_P << std::endl;
	std::cout << "TEST - INIT WITH CONSTRUCTOR AND ARGUMENT BUT NOT SETTED" << std::endl;
	std::cout << SEP_P << std::endl;
	{
		std::cout << "TEST - INT" << std::endl;
		std::cout << SEP_SP << std::endl;
		std::cout << "DEFAULT CONSTRUCTOR" << std::endl;
		std::cout << "Array<int> a(n)" << std::endl;
		Array<int> a(n);

		std::cout << "obj ptr: " << &a << "\tsize: " << a.size() << "\tarray ptr: " << a.getArray() << std::endl;
		std::cout << "Loop through the array in progress" << std::endl;
		if (a.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "a[" << i << "]: " << a[i] << std::endl;
		}
		std::cout << "Loop through the array ended" << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "COPY CONSTRUCTOR" << std::endl;
		std::cout << "Array<int> b(a)" << std::endl;
		Array<int> b(a);

		std::cout << "obj ptr: " << &b << "\tsize: " << b.size() << "\tarray ptr: " << b.getArray() << std::endl;
		std::cout << "Loop through the array in progress" << std::endl;
		if (b.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "b[" << i << "]: " << b[i] << std::endl;
		}
		std::cout << "Loop through the array ended" << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "OVERLOAD OPERATOR" << std::endl;
		std::cout << "Array<int> c = a" << std::endl;
		Array<int> c = a;

		std::cout << "obj ptr: " << &c << "\tsize: " << c.size() << "\tarray ptr: " << c.getArray() << std::endl;
		std::cout << "Loop through the array in progress" << std::endl;
		if (c.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "c[" << i << "]: " << c[i] << std::endl;
		}
		std::cout << "Loop through the array ended" << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "MODIFICATION OF VALUE" << std::endl;
		std::cout << "a[0] = 1" << std::endl;
		a[0] = 1;
		std::cout << "b[0] = 2" << std::endl;
		b[0] = 2;
		std::cout << "c[0] = 3" << std::endl;
		c[0] = 3;
		std::cout << "Loop through the array (a) in progress" << std::endl;
		if (a.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "a[" << i << "]: " << a[i] << std::endl;
		}
		std::cout << "Loop through the array (a) ended" << std::endl;
		std::cout << "Loop through the array (b) in progress" << std::endl;
		if (b.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "b[" << i << "]: " << b[i] << std::endl;
		}
		std::cout << "Loop through the array (b) ended" << std::endl;
		std::cout << "Loop through the array (c) in progress" << std::endl;
		if (c.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "c[" << i << "]: " << c[i] << std::endl;
		}
		std::cout << "Loop through the array (c) ended" << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "COPY OF THE ARRAY" << std::endl;
		std::cout << "a = b" << std::endl;
		a = b;
		std::cout << "Loop through the array (a) in progress" << std::endl;
		if (a.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "a[" << i << "]: " << a[i] << std::endl;
		}
		std::cout << "Loop through the array (a) ended" << std::endl;
		std::cout << "Loop through the array (b) in progress" << std::endl;
		if (b.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "b[" << i << "]: " << b[i] << std::endl;
		}
		std::cout << "Loop through the array (b) ended" << std::endl;
	}
	////////////////////////////////////////
	////////////////////////////////////////
	////////////////////////////////////////
	std::cout << SEP_P << std::endl;
	std::cout << "TEST - INIT WITH CONSTRUCTOR AND ARGUMENT BUT SETTED VALUE" << std::endl;
	std::cout << SEP_P << std::endl;
	{
		std::cout << "TEST - INT" << std::endl;
		std::cout << SEP_SP << std::endl;
		std::cout << "DEFAULT CONSTRUCTOR" << std::endl;
		std::cout << "Array<int> a(n)" << std::endl;
		Array<int> a(n);
		int	x[] = { 0, 1, 10, -1, -10, INT_MIN, INT_MAX };

		std::cout << "obj ptr: " << &a << "\tsize: " << a.size() << "\tarray ptr: " << a.getArray() << std::endl;
		std::cout << "Process automatic filling in progress..." << std::endl;
		for (i = 0; i < n; i++)
			a[i] = x[i];
		std::cout << "Process automatic filling ended" << std::endl;
std::cout << "Loop through the array in progress" << std::endl;
		if (a.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "a[" << i << "]: " << a[i] << std::endl;
		}
		std::cout << "Loop through the array ended" << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "COPY CONSTRUCTOR" << std::endl;
		std::cout << "Array<int> b(a)" << std::endl;
		Array<int> b(a);

		std::cout << "obj ptr: " << &b << "\tsize: " << b.size() << "\tarray ptr: " << b.getArray() << std::endl;
		std::cout << "Loop through the array in progress" << std::endl;
		if (b.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "b[" << i << "]: " << b[i] << std::endl;
		}
		std::cout << "Loop through the array ended" << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "OVERLOAD OPERATOR" << std::endl;
		std::cout << "Array<int> c = a" << std::endl;
		Array<int> c = a;

		std::cout << "obj ptr: " << &c << "\tsize: " << c.size() << "\tarray ptr: " << c.getArray() << std::endl;
		std::cout << "Loop through the array in progress" << std::endl;
		if (c.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "c[" << i << "]: " << c[i] << std::endl;
		}
		std::cout << "Loop through the array ended" << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "MODIFICATION OF VALUE" << std::endl;
		std::cout << "a[0] = 1" << std::endl;
		a[0] = 1;
		std::cout << "b[0] = 2" << std::endl;
		b[0] = 2;
		std::cout << "c[0] = 3" << std::endl;
		c[0] = 3;
		std::cout << "Loop through the array (a) in progress" << std::endl;
		if (a.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "a[" << i << "]: " << a[i] << std::endl;
		}
		std::cout << "Loop through the array (a) ended" << std::endl;
		std::cout << "Loop through the array (b) in progress" << std::endl;
		if (b.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "b[" << i << "]: " << b[i] << std::endl;
		}
		std::cout << "Loop through the array (b) ended" << std::endl;
		std::cout << "Loop through the array (c) in progress" << std::endl;
		if (c.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "c[" << i << "]: " << c[i] << std::endl;
		}
		std::cout << "Loop through the array (c) ended" << std::endl;
		std::cout << SEP_SP << std::endl;

		////////////////////////////////////////
		std::cout << "COPY OF THE ARRAY" << std::endl;
		std::cout << "a = b" << std::endl;
		a = b;
		std::cout << "Loop through the array (a) in progress" << std::endl;
		if (a.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "a[" << i << "]: " << a[i] << std::endl;
		}
		std::cout << "Loop through the array (a) ended" << std::endl;
		std::cout << "Loop through the array (b) in progress" << std::endl;
		if (b.getArray() != NULL)
		{
			for (i = 0; i < n; i++)
				std::cout << "b[" << i << "]: " << b[i] << std::endl;
		}
		std::cout << "Loop through the array (b) ended" << std::endl;
	}
	////////////////////////////////////////
	////////////////////////////////////////
	////////////////////////////////////////
	{
		std::cout << SEP_P << std::endl;
		std::cout << "TEST - ERROR" << std::endl;
		std::cout << SEP_P << std::endl;
		{
			std::cout << "TEST - SIZE 0" << std::endl;
			try
			{
				Array<int> a(0);
				std::cout << "size: " << a.size() << std::endl;
			}
			catch (std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		std::cout << SEP_SP << std::endl;
		////////////////////////////////////////
		{
			std::cout << "TEST - SIZE INT_MAX + 1" << std::endl;
			try
			{
				Array<int> a(INT_MAX + 1);
				std::cout << "size: " << a.size() << std::endl;
			}
			catch (std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		std::cout << SEP_SP << std::endl;
		////////////////////////////////////////
		{
			std::cout << "TEST - INDEX -1" << std::endl;
			try
			{
				Array<int> a(n);
				std::cout << "obj ptr: " << &a << "\tsize: " << a.size() << "\tarray ptr: " << a.getArray() << std::endl;
				std::cout << "Loop through the array in progress" << std::endl;
				if (a.getArray() != NULL)
				{
					for (i = 0; i < n; i++)
						std::cout << "a[" << i << "]: " << a[i] << std::endl;
				}
				std::cout << "Loop through the array ended" << std::endl;
				std::cout << "a[-1]" << std::endl;
				std::cout << a[-1] << std::endl;
			}
			catch (std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		std::cout << SEP_SP << std::endl;
	}
	return (0);
}
