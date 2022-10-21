/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:53:11 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/21 11:55:32 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYSED_HPP
# define MYSED_HPP

# include <fstream>
# include <iomanip>
# include <iostream>

# define MYSED_FS_NEW ".replace"

# define MYSED_ERR_FS_OPEN "Error: File opening issue"
# define MYSED_MSG_FS_CLOSE "File closed"
# define MYSED_MSG_FS_OPEN "File opened"

class MySed
{
	public:
		MySed(std::string, std::string, std::string);
		~MySed(void);
		int			exec();
		const std::string	getFilename(void);
		const std::string	getS1(void);
		const std::string	getS2(void);
		void			show(void);

	private:
		std::string		_filename;
		std::fstream		_ifs;
		std::fstream		_ofs;
		std::string		_s1;
		std::string		_s2;

		void			close();
		int			openInfile(void);
		int			openOutfile(void);
};

#endif
