/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:01:37 by mprofett          #+#    #+#             */
/*   Updated: 2023/07/28 11:19:02 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public:

	Weapon(std::string type);
	~Weapon(void);

	const std::string &getType(void) const;
	void		setType(std::string new_type);

	private:

	std::string	_type;
};

#endif
