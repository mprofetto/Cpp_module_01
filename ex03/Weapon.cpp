/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:06:01 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/03 10:42:43 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	_type = "bare hands";
}

Weapon::Weapon(std::string type) : _type(type)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

const std::string	&Weapon::getType(void) const
{
	const std::string	&my_weapon_type = this->_type;

	return (my_weapon_type);
}

void				Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}
