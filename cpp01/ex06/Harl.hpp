/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:49:03 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/22 17:58:17 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define HARL_DBG "DEBUG"
# define HARL_INFO "INFO"
# define HARL_WARN "WARNING"
# define HARL_ERR "ERROR"

# define HARL_ERR_UNKNOW "Please execute the program with one the following value: DEBUG, INFO, WARNING, ERROR"
# define HARL_MSG_DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
# define HARL_MSG_INFO "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define HARL_MSG_WARNING "I think I deserve to have some extra bacon for free. I’ve been coming fory ears whereas you started working here since last month."
# define HARL_MSG_ERROR "This is unacceptable! I want to speak to the manager now."

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void		complain(std::string);

	private:
		std::string	tab[5];
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
};

#endif
