/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:43:33 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/18 16:31:00 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <climits>
# include <iostream>

# define ZB_DFT_NAME "Zeus"
# define ZB_ANNOUNCE "BraiiiiiiinnnzzzZ..."
# define ZB_ERR_N "Error: N <= 0 or N >= SHRT_MAX"

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string);
		~Zombie(void);
		void		announce(void);
		void		setName(std::string);

	private:
		std::string	name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
