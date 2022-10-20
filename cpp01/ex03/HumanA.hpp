/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:33:28 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/20 12:32:39 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

# define HA_NAME_DEFAULT "Justice Hero"

# define HA_MSG_ATTACK "attacks with their"
# define HA_MSG_CREATED "appears from the darkness"
# define HA_MSG_DEL "disappears in the darkness (Gordon hates when he does it)"
# define HA_MSG_WP_CHOICE "has taken"

class HumanA
{
	public:
		HumanA(std::string, Weapon &);
		~HumanA(void);
		const std::string	getName(void);
		void			setName(const std::string);
		Weapon			getWeapon(void);
		void			setWeapon(Weapon &);
		void			attack(void);

	private:
		std::string		name;
		Weapon			&weapon;
};

#endif
