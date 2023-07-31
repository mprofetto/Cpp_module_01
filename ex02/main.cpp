/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:54:19 by mprofett          #+#    #+#             */
/*   Updated: 2023/07/28 11:00:19 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string my_var("HI THIS IS BRAIN");
	std::string	*strPTR = &my_var;
	std::string	&strREF = my_var;

	std::cout << "my_var adress: " << &my_var << std::endl;
	std::cout << "memory adress held by strPTR: " << strPTR << std::endl;
	std::cout << "memory adress held by strREF: " << &strREF << std::endl << std::endl;
	std::cout << "my_var value: " << my_var << std::endl;
	std::cout << "value pointed to by strPTR: " << *strPTR << std::endl;
	std::cout << "value pointed to by strREF: " << strREF << std::endl;
	return (0);
}
