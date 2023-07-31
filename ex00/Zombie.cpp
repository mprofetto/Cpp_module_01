/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:58:00 by mprofett          #+#    #+#             */
/*   Updated: 2023/07/27 15:27:57 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	this->_name = std::string("...");
	std::cout << this->_name << " was created" << std::endl;
	return;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << this->_name << " was created" << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " was destroyed" << std::endl;
	return;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
