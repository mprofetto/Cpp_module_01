/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:17:39 by mprofett          #+#    #+#             */
/*   Updated: 2023/07/31 16:52:55 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
	public:
		Harl(void);
		~Harl(void);

		void	complain(std::string level);
		void	filter_complain(std::string level);

	private:

		std::string	_harl_levels[4];
		void		(Harl::	*_harl_functions[4])(void);

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
