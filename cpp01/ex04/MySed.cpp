/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:56:08 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/21 11:50:17 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MySed.hpp"

MySed::MySed(std::string filename, std::string s1, std::string s2): _filename(filename), _s1(s1), _s2(s2)
{
	std::cout << "MySed has been created" << std::endl;
}

MySed::~MySed(void)
{
	std::cout << "MySed has been deleted" << std::endl;
}

void	MySed::close(void)
{
	if (_ifs.is_open())
	{
		_ifs.close();
		std::cout << MYSED_MSG_FS_CLOSE << ": " << this->getFilename() << std::endl;
	}
	if (_ofs.is_open())
	{
		_ofs.close();
		std::cout << MYSED_MSG_FS_CLOSE << ": " << this->getFilename() + MYSED_FS_NEW << std::endl;
	}
}

int	MySed::exec(void)
{
	if (this->openInfile() != 0)
		return (1);
	if (this->openOutfile() != 0)
	{
		this->close();
		return (0);
	}
	this->close();
	return (0);
}

const std::string	MySed::getFilename(void)
{
	return (this->_filename);
}

const std::string	MySed::getS1(void)
{
	return (this->_s1);
}

const std::string	MySed::getS2(void)
{
	return (this->_s2);
}

int	MySed::openInfile(void)
{
	std::string	filename;

	filename = this->getFilename();
	this->_ifs.open(filename.c_str(), std::fstream::in);
	if (this->_ifs.is_open())
	{
		std::cout << MYSED_MSG_FS_OPEN << ": " << filename << std::endl;
	}
	else
	{
		std::cerr << MYSED_ERR_FS_OPEN << ": " << filename << std::endl;
		return (1);
	}
	return (0);
}

int	MySed::openOutfile(void)
{
	std::string	filename;

	filename = this->getFilename() + MYSED_FS_NEW;
	this->_ofs.open(filename.c_str(), std::fstream::out | std::fstream::trunc);
	if (this->_ifs.is_open())
	{
		std::cout << MYSED_MSG_FS_OPEN << ": " << filename << std::endl;
	}
	else
	{
		std::cerr << MYSED_ERR_FS_OPEN << ": " << filename << std::endl;
		return (1);
	}
	return (0);
}


void	MySed::show(void)
{
	int	width;

	width = 15;
	std::cout << std::left << std::setw(width) << "Filename:"	<< this->getFilename() << std::endl;
	std::cout << std::left << std::setw(width) << "s1:" << this->getS1() << std::endl;
	std::cout << std::left << std::setw(width) << "s2:" << this->getS2() << std::endl;
}
