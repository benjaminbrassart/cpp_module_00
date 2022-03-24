/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:26:09 by bbrassar          #+#    #+#             */
/*   Updated: 2022/03/24 09:04:17 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

static void	_command(PhoneBook *phonebook, std::string line, bool &loop)
{
	if (line == "ADD")
		phonebook->addContact();
	else if (line == "SEARCH")
		phonebook->searchContact();
	else if (line == "EXIT")
		loop = false;
	else
	{
		std::cout
			<< "ERROR: AVAILABLE COMMANDS ARE: ADD, SEARCH, EXIT."
			<< std::endl;
	}
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	line;
	bool		loop;

	loop = true;
	while (loop)
	{
		std::cout << "CRAPBOOK> ";
		if (!std::getline(std::cin, line))
		{
			std::cout << std::endl;
			break ;
		}
		_command(&phonebook, line, loop);
	}
	std::cout << "BYE" << std::endl;
	return (0);
}
