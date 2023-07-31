/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:15:20 by mprofett          #+#    #+#             */
/*   Updated: 2023/07/27 15:30:10 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	georges = Zombie("Georges");
	Zombie	unamed = Zombie();
	randomChump("Roger");
	Zombie	*albert = newZombie("Albert");

	georges.announce();
	unamed.announce();
	albert->announce();
	delete albert;
	return (0);
}
