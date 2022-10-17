/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:35:11 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/17 10:32:28 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"

# define FD_WIDTH 10
# define FD_SEP "|"

# define USR_A "ADD"
# define USR_E "EXIT"
# define USR_S "SEARCH"

# define HD_INDEX "Index"
# define HD_FT_NAME "First Name"
# define HD_LT_NAME "Last Name"
# define HD_NCKNAME "Nickname"

# define MSG_PB_ID_CANCEL "Cancelling contact displaying"
# define MSG_PB_ID_QUEST "Write index from 1 to 8 to show contact (type something else to cancel): "
# define MSG_PB_MENU "Welcome to PhoneBook program"
# define MSG_PB_MENU_BACK "Go back to main memu"
# define MSG_PB_SELEC "What do you want to do ? (ADD, SEARCH, EXIT): "

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	search(void);
		void	search_header(void);
		void	shift(Contact *);
	
	private:
		Contact contacts[8];
		size_t	amount;
};

#endif
