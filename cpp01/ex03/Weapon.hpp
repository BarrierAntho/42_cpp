/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:26:48 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/19 13:53:31 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

# define WP_MSG_CREATED "Weapon has been created"
# define WP_MSG_DEL "Weapon has been destroyed"

class Weapon
{
	public:
		Weapon(void);
		~Weapon(void);
		const std::string	&getType(void);
		void			setType(std::string);

	private:
		std::string		type;
};

#endif
