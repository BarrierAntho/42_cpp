/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:26:48 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/20 12:28:30 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

# define WP_MSG_CHANGE "Weapon has been changed"
# define WP_MSG_CREATED "Weapon has spawned"
# define WP_MSG_DEFAULT "Weapon does not spawned, be prepared for street fight style"
# define WP_MSG_DEL "Weapon is not available anymore"

class Weapon
{
	public:
		Weapon(void);
		Weapon(std::string);
		~Weapon(void);
		const std::string	&getType(void);
		void			setType(std::string);

	private:
		std::string		type;
};

#endif
