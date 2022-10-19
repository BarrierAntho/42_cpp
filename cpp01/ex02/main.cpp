/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:28:19 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/19 09:37:32 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define SEP_P "####################"
#define SEP_SP "--------------------"

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Show pointer str" << std::endl;
	std::cout << static_cast<void*>(&str) << std::endl;
	std::cout << "Show pointer stringPTR" << std::endl;
	std::cout << static_cast<void*>(stringPTR) << std::endl;
	std::cout << "Show pointer stringREF" << std::endl;
	std::cout << static_cast<void*>(&stringREF) << std::endl;

	std::cout << SEP_SP << std::endl;

	std::cout << "Show value str" << std::endl;
	std::cout << str << std::endl;
	std::cout << "Show value stringPTR" << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << "Show value stringREF" << std::endl;
	std::cout << stringREF << std::endl;

	std::cout << SEP_P << std::endl;

	std::cout << "Modification string: actual value: " << str;
	str = "Hello";
	std::cout << "\tnew value: " << str << std::endl;

	std::cout << "Show pointer str" << std::endl;
	std::cout << static_cast<void*>(&str) << std::endl;
	std::cout << "Show pointer stringPTR" << std::endl;
	std::cout << static_cast<void*>(stringPTR) << std::endl;
	std::cout << "Show pointer stringREF" << std::endl;
	std::cout << static_cast<void*>(&stringREF) << std::endl;

	std::cout << SEP_SP << std::endl;

	std::cout << "Show value str" << std::endl;
	std::cout << str << std::endl;
	std::cout << "Show value stringPTR" << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << "Show value stringREF" << std::endl;
	std::cout << stringREF << std::endl;

	std::cout << SEP_P << std::endl;

	std::cout << "Modification stringPTR: actual value: " << str;
	*stringPTR = "World";
	std::cout << "\tnew value: " << str << std::endl;

	std::cout << "Show pointer str" << std::endl;
	std::cout << static_cast<void*>(&str) << std::endl;
	std::cout << "Show pointer stringPTR" << std::endl;
	std::cout << static_cast<void*>(stringPTR) << std::endl;
	std::cout << "Show pointer stringREF" << std::endl;
	std::cout << static_cast<void*>(&stringREF) << std::endl;

	std::cout << SEP_SP << std::endl;

	std::cout << "Show value str" << std::endl;
	std::cout << str << std::endl;
	std::cout << "Show value stringPTR" << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << "Show value stringREF" << std::endl;
	std::cout << stringREF << std::endl;

	std::cout << SEP_P << std::endl;

	std::cout << "Modification stringREF: actual value: " << str;
	stringREF = "42";
	std::cout << "\tnew value: " << str << std::endl;

	std::cout << "Show pointer str" << std::endl;
	std::cout << static_cast<void*>(&str) << std::endl;
	std::cout << "Show pointer stringPTR" << std::endl;
	std::cout << static_cast<void*>(stringPTR) << std::endl;
	std::cout << "Show pointer stringREF" << std::endl;
	std::cout << static_cast<void*>(&stringREF) << std::endl;

	std::cout << SEP_SP << std::endl;

	std::cout << "Show value str" << std::endl;
	std::cout << str << std::endl;
	std::cout << "Show value stringPTR" << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << "Show value stringREF" << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}
