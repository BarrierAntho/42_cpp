/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:35:11 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/15 17:47:23 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP 
# define CONTACT_HPP

# include "main.hpp"

# define CT_FT_NAME "First name: "
# define CT_LT_NAME "Last name: "
# define CT_NCK_NAME "Nickname: "
# define CT_PH_NUM "Phone number: "
# define CT_SECRET "Dark secret: "

# define ERR_CT_EMPTY_FD "Forbidden empty contact's fields"

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		int	create(void);
		void	search(int);
		void	search_field(std::string);
		void	show(void);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_num;
		std::string	_secret;
//		time_t		*_timer;
};

#endif
