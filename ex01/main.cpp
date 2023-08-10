/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:15:20 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/02 10:07:56 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde = zombieHorde(42, std::string("Kevin"));
	int		i;

	i = 0;
	while(i < 42)
		horde[i++].announce();
	delete [] horde;

	Zombie	*horde2 = zombieHorde(0, std::string("Luc"));

	i = 0;
	while(i < 0 && horde2)
		horde2[i++].announce();
	if (horde2)
		delete [] horde2;

	Zombie	*horde3 = zombieHorde(-50, std::string("Sylvie"));

	i = 0;
	while(i < 0 && horde3)
		horde3[i++].announce();
	if (horde3)
		delete [] horde3;
	return (0);
}
