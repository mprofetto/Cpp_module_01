/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:24:48 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/03 10:48:03 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:

	HumanB(std::string name);
	~HumanB(void);

	void	setWeapon(Weapon *new_weapon);
	void	attack(void) const;

	private:

	std::string	_name;
	Weapon	*_weapon;
};

#endif
