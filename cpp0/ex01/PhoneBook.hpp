/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:35:11 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/15 15:45:12 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"

# define FD_WIDTH 10
# define FD_SEP "|"

# define HD_INDEX "Index"
# define HD_FT_NAME "First Name"
# define HD_LT_NAME "Last Name"
# define HD_NCKNAME "Nickname"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact contacts[8];
//		Contact	*old;
		void	add(void);
		void	search(void);
		void	search_header(void);
};

#endif
