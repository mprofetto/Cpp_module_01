/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:15:20 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/02 09:55:42 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	georges = Zombie("Georges");
	Zombie	unamed = Zombie();
	Zombie	*albert = newZombie("Albert");

	randomChump("Roger");
	georges.announce();
	unamed.announce();
	albert->announce();
	delete albert;
	return (0);
}
