/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:15:03 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/03 10:47:32 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void	setWeapon(Weapon &new_weapon);
	void	attack(void) const;

	private:

	std::string	_name;
	Weapon	&_weapon;
};

#endif
