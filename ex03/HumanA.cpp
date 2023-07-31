/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:19:25 by mprofett          #+#    #+#             */
/*   Updated: 2023/07/28 11:43:53 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon weapon) : _name(name)
{
	this->_weapon = &weapon;
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void	HumanA::setWeapon(Weapon new_weapon)
{
	this->_weapon = &new_weapon;
}

void	HumanA::attack(void) const
{
	if (this->_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with their bare hands" << std::endl;
}
