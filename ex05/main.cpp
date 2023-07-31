/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:14:26 by mprofett          #+#    #+#             */
/*   Updated: 2023/07/31 16:07:07 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Harl my_harl = Harl();

	std::cout << "When nothing happens: "  << std::endl;
	my_harl.complain("");
	std::cout << std::endl;
	std::cout << "When harl goes on debug mode: "  << std::endl;
	my_harl.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "When everything goes on info mode: "  << std::endl;
	my_harl.complain("INFO");
	std::cout << std::endl;
	std::cout << "When harl goes on debug warning mode: "  << std::endl;
	my_harl.complain("WARNING");
	std::cout << std::endl;
	std::cout << "When harl goes on debug error mode: "  << std::endl;
	my_harl.complain("ERROR");
	std::cout << std::endl;
	std::cout << "When harl goes on inexistent mode: "  << std::endl;
	my_harl.complain("Pouet");
	std::cout << std::endl;
	return (0);
}
