/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:33:28 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/19 13:51:52 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

# define HB_MSG_CREATED "HumanB has been created"
# define HB_MSG_DEL "HumanB has been killed"

class HumanB
{
	public:
		HumanB(void);
		~HumanB(void);

	private:
		Weapon	weapon;
};

#endif
