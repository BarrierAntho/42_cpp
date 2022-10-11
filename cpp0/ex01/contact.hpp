/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:35:11 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/11 17:24:35 by abarrier         ###   ########.fr       */
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

class Contact
{
	public:
		Contact(void);
		~Contact(void);

	private:
		char	_first_name;
		char	_last_name;
		char	_nickname;
		char	_phone_num;
		char	_secret;
};

#endif
