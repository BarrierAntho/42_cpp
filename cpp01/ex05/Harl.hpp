/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:49:03 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/22 17:23:58 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define HARL_DBG "DEBUG"
# define HARL_INFO "INFO"
# define HARL_WARN "WARNING"
# define HARL_ERR "ERROR"
# define HARL_SEP_P "####################"

# define HARL_ERR_UNKNOW "[UNKNOW] Please select: DEBUG, INFO, WARNING, ERROR (CTRL+D to exit the program)"
# define HARL_MSG_DEBUG "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
# define HARL_MSG_INFO "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define HARL_MSG_WARNING "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming fory ears whereas you started working here since last month."
# define HARL_MSG_ERROR "[ERROR] This is unacceptable! I want to speak to the manager now."
# define HARL_COMPLAIN "Which complain: DEBUG, INFO, WARNING, ERROR (CTRL+D to exit the program) "

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void		complain(std::string);

	private:
		std::string	tab[5];
		void		(Harl::*tabf[5])(void);
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
};

#endif
