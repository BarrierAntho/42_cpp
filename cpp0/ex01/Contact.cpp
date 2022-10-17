/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:30:16 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/17 11:59:06 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact(void)
{
//	std::cout << "Contact created" << std::endl;
//	_first_name = "Anthony";
//	_last_name = "BARRIER";
//	_nickname = "abarrier";
//	_phone_num = "+33 1 23 45 67 78";
//	_secret = "I am a ghost";
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::copy(Contact *contact)
{
	this->_first_name = contact->_first_name;
	this->_last_name = contact->_last_name;
	this->_nickname = contact->_nickname;
	this->_phone_num = contact->_phone_num;
	this->_secret = contact->_secret;
}

int	Contact::create(void)
{
	std::cout << CT_FT_NAME;
	std::getline (std::cin, _first_name);
	if (_first_name.empty() == 1)
		return (1);
	std::cout << CT_LT_NAME;
	std::getline (std::cin, _last_name);
	if (_last_name.empty() == 1)
		return (1);
	std::cout << CT_NCK_NAME;
	std::getline (std::cin, _nickname);
	if (_nickname.empty() == 1)
		return (1);
	std::cout << CT_PH_NUM;
	std::getline (std::cin, _phone_num);
	if (_phone_num.empty() == 1)
		return (1);
	std::cout << CT_SECRET;
	std::getline (std::cin, _secret);
	if (_secret.empty() == 1)
		return (1);
	return (0);
}

void	Contact::search(int index)
{
	std::cout << std::right << std::setw(FD_WIDTH) << (index + 1);
	std::cout << FD_SEP;
	search_field(_first_name);
	std::cout << FD_SEP;
	search_field(_last_name);
	std::cout << FD_SEP;
	search_field(_nickname);
	std::cout << std::endl;
}

void	Contact::search_field(std::string str)
{
	size_t	i;

	if (str.length() < FD_WIDTH)
		std::cout << std::right << std::setw(FD_WIDTH) << str;
	else
	{
		for (i = 0; i < (FD_WIDTH - 1); ++i)
			std::cout << str.at(i);
		std::cout << ".";
	}
}

void	Contact::show(void)
{
	if (_first_name.empty() == true)
	{
		std::cout << MSG_CT_EMPTY << std::endl;
		return ;
	}
	std::cout << CT_FT_NAME << _first_name << std::endl;
	std::cout << CT_LT_NAME << _last_name << std::endl;
	std::cout << CT_NCK_NAME << _nickname << std::endl;
	std::cout << CT_PH_NUM << _phone_num << std::endl;
	std::cout << CT_SECRET << _secret << std::endl;
}
