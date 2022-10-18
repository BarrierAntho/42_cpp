/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:43:33 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/18 15:22:49 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define ZB_DFT_NAME "Zeus"
# define ZB_ANNOUNCE "BraiiiiiiinnnzzzZ..."

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string);
		~Zombie(void);
		void		announce(void);
	private:
		std::string	name;
};

Zombie		*newZombie(std::string);
void		randomChump(std::string);

#endif
