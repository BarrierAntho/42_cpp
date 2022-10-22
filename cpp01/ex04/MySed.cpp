/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:56:08 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/22 15:08:00 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MySed.hpp"

MySed::MySed(std::string filename, std::string s1, std::string s2): _filename(filename), _s1(s1), _s2(s2)
{
	std::cout << "MySed class has been created" << std::endl;
}

MySed::~MySed(void)
{
	std::cout << "MySed has class been deleted" << std::endl;
}

void	MySed::close(void)
{
	this->closeInfile();
	this->closeOutfile();
}

void	MySed::closeInfile(void)
{
	if (_ifs.is_open())
	{
		_ifs.close();
		std::cout << MYSED_MSG_FS_CLOSE << ": " << this->getFilename() << std::endl;
	}
}

void	MySed::closeOutfile(void)
{
	if (_ofs.is_open())
	{
		_ofs.close();
		std::cout << MYSED_MSG_FS_CLOSE << ": " << this->getFilename() + MYSED_FS_NEW << std::endl;
	}
}
int	MySed::check(void)
{
	if (this->checkArg() != 0)
		return (1);
	else if (this->checkInfile() != 0)
		return (1);
	else if (this->checkOutfile() != 0)
		return (1);
	else
		return (0);
}

int	MySed::checkArg(void)
{
	if (this->_s1.length() == 0)
	{
		std::cerr << MYSED_ERR_ARG_S1 << std::endl;
		return (1);
	}
	else
		return (0);
}

int	MySed::checkInfile(void)
{
	std::string	buff;

	if (this->openInfile() != 0)
		return (1);
	std::getline(this->_ifs, buff);
	if (this->_ifs.eof() == true)
	{
		this->closeInfile();
		return (0);
	}
	if (this->_ifs.bad() == true || this->_ifs.fail() == true)
	{
		std::cerr << MYSED_ERR_FS_DIR << ": " << this->getFilename() << std::endl;
		this->closeInfile();
		return (1);
	}
	this->closeInfile();
	return (0);
}

int	MySed::checkOutfile(void)
{
	std::string	filename;
	std::string	buff;

	filename = this->getFilename() + MYSED_FS_NEW;
	this->_ofs.open(filename.c_str(), std::fstream::in);
	if (this->_ofs.is_open() == true)
	{
		std::cout << MYSED_MSG_FS_OPEN << ": " << filename << std::endl;
		std::getline(this->_ofs, buff);
		if (this->_ofs.bad() == true || this->_ofs.fail() == true)
		{
			std::cerr << MYSED_ERR_FS_DIR << ": " << filename << std::endl;
			this->closeOutfile();
			return (1);
		}
		else
		{
			this->closeOutfile();
			return (0);
		}
	}
	return (0);
}

int	MySed::exec(void)
{
	if (this->check() != 0)
		return (1);
	if (this->openInfile() != 0)
		return (1);
	if (this->openOutfile() != 0)
	{
		this->close();
		return (0);
	}
	this->readFile();
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
	if (this->_ifs.is_open() == false)
	{
		std::cerr << MYSED_ERR_FS_OPEN << ": " << filename << std::endl;
		return (1);
	}
	else
	{
		std::cout << MYSED_MSG_FS_OPEN << ": " << filename << std::endl;
		return (0);
	}
}

int	MySed::openOutfile(void)
{
	std::string	filename;

	filename = this->getFilename() + MYSED_FS_NEW;
	this->_ofs.open(filename.c_str(), std::fstream::out | std::fstream::trunc);
	if (this->_ofs.is_open() == false)
	{
		std::cerr << MYSED_ERR_FS_OPEN << ": " << filename << std::endl;
		return (1);
	}
	else
	{
		std::cout << MYSED_MSG_FS_OPEN << ": " << filename << std::endl;
		return (0);
	}
}

void	MySed::readFile(void)
{
	std::string	buff;

	std::getline(this->_ifs, buff);
	while (this->_ifs.eof() == false)
	{
		this->replace(buff);
		this->_ofs << buff;
		this->_ofs << std::endl;
		std::getline(this->_ifs, buff);
	}
	if (this->_ifs.eof() == true)
	{
		this->replace(buff);
		this->_ofs << buff;
	}
}

void	MySed::replace(std::string &buff)
{
	std::size_t	found;
	std::size_t	pos;

	found = 0;
	pos = 0;
	found = buff.find(this->_s1, pos);
	while (found != std::string::npos)
	{
		buff.erase(pos, this->_s1.length());
		buff.insert(pos, this->_s2);
		pos = pos + this->_s2.length();
		found = buff.find(this->_s1, pos);
		pos = found;
	}
}

void	MySed::show(void)
{
	int	width;

	width = 15;
	std::cout << std::left << std::setw(width) << "Filename:" << this->getFilename() << std::endl;
	std::cout << std::left << std::setw(width) << "s1:" << this->getS1() << std::endl;
	std::cout << std::left << std::setw(width) << "s2:" << this->getS2() << std::endl;
}
