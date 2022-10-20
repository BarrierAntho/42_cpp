/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:33:28 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/20 12:41:13 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

# define HB_MSG_ATTACK "attacks with their"
# define HB_MSG_ATTACK_WP_NO "attacks with their whole body"
# define HB_MSG_CREATED "is standing in the Gotham Bank"
# define HB_MSG_DEL "has been locked up in jail"
# define HB_MSG_WP_CHOICE "has taken"
# define HB_MSG_WP_EMPTY "No choosen weapon"
# define HB_MSG_WP_NO "without any weapon, just his crazy destructive minds"

class HumanB
{
	public:
		HumanB(std::string);
		~HumanB(void);
		const std::string	getName(void);
		void			setName(const std::string);
		Weapon			*getWeapon(void);
		void			setWeapon(Weapon &);
		void			attack(void);

	private:
		std::string		name;
		Weapon		*weapon;
};

#endif
