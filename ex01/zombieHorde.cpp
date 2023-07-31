/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:06:24 by mprofett          #+#    #+#             */
/*   Updated: 2023/07/27 15:38:18 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N < 1)
		return (NULL);

	Zombie	*zombieHorde = new Zombie[N];
	int		i;

	i = -1;
	while (++i < N)
		zombieHorde[i].set_zombie_name(name);
	return (zombieHorde);
}
