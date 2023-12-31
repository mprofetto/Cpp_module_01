/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:56:59 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/03 11:08:12 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int	open_stream_in(std::ifstream &stream_in, char *filename)
{
	try
	{
		stream_in.open(filename);
	}
	catch(const std::ios_base::failure &failure)
	{
		std::cerr << failure.what() << std::endl;
		return (1);
	}
	if (stream_in.fail())
	{
		stream_in.close();
		std::cerr << "Error when trying to open source file" << std::endl;
		return (1);
	}
	return (0);
}

int	open_stream_out(std::ofstream &stream_out, std::ifstream &stream_in, char *filename)
{
	std::string	new_file(filename);

	try
	{
		stream_out.open(new_file.append(".replace"));
	}
	catch(const std::exception& failure)
	{
		std::cerr << failure.what() << std::endl;
		stream_in.close();
		return (1);
	}
	if (stream_out.fail())
	{
		stream_in.close();
		std::cerr << "Error when trying to open output file" << std::endl;
		return (1);
	}
	return (0);
}

std::string	replace_str(std::string str1, std::string str2, std::string &str_stream)
{
	std::string				result;
	std::string::size_type	found(str_stream.find(str1, 0));
	std::string::size_type	start;

	if (found == std::string::npos || str1.compare(str2) == 0)
		return (str_stream);
	else
		result.append(str_stream, 0, str_stream.size() - (str_stream.size() - found));
	while(found != std::string::npos)
	{
		result.append(str2);
		start = found + str1.size();
		found = str_stream.find(str1, found + str2.size());
		if (found == std::string::npos)
		{
			result.append(str_stream, start, found - start);
			return (result);
		}
		else
			result.append(str_stream, start, found - start);
	}
	return (result);
}

int	main(int argc, char **argv)
{
	std::ifstream		stream_in;
	std::ofstream		stream_out;
	std::stringstream	strStream;
	std::string 		str_stream;
	std::string			result;

	if (argc != 4)
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return (1);
	}
	if (open_stream_in(stream_in, argv[1]) != 0
		|| open_stream_out(stream_out, stream_in, argv[1]) != 0)
		return (1);
    strStream << stream_in.rdbuf();
	str_stream = strStream.str();
	// result = replace_str(argv[2], argv[3], str_stream);
	// stream_out << result;
	stream_out << replace_str(argv[2], argv[3], str_stream);
	stream_in.close();
	stream_out.close();
	return (0);
}
