/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:33:28 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/19 13:39:35 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

# define HA_MSG_CREATED "HumanA has been created"
# define HA_MSG_DEL "HumanA has been killed"

class HumanA
{
	public:
		HumanA(void);
		~HumanA(void);

	private:
		Weapon	weapon;
};

#endif
