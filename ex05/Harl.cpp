/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:20:52 by mprofett          #+#    #+#             */
/*   Updated: 2023/07/31 16:53:10 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
	_harl_levels[0] = std::string("DEBUG");
	_harl_levels[1] = std::string("INFO");
	_harl_levels[2] = std::string("WARNING");
	_harl_levels[3] = std::string("ERROR");
	_harl_functions[0] = &Harl::debug;
	_harl_functions[1] = &Harl::info;
	_harl_functions[2] = &Harl::warning;
	_harl_functions[3] = &Harl::error;
	return;
}

Harl::~Harl(void)
{
	return;
}

void	Harl::complain(std::string level)
{
	int	i;

	i  = -1;
	while(++i < 4)
	{
		if (level.compare(this->_harl_levels[i]) == 0)
		{
			(this->*_harl_functions[i])();
			return;
		}
	}
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
