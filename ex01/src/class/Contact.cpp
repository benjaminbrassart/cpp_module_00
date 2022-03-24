/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:18:34 by bbrassar          #+#    #+#             */
/*   Updated: 2022/03/24 09:49:47 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cctype>
#include <iostream>

bool	Contact::fillField(int index)
{
	std::string prompt;
	std::string *field_ptr;

	switch (index)
	{
		case 0:
			prompt = "FIRST NAME";
			field_ptr = &this->firstName;
			break ;
		case 1:
			prompt = "LAST NAME";
			field_ptr = &this->lastName;
			break ;
		case 2:
			prompt = "NICKNAME";
			field_ptr = &this->nickname;
			break ;
		case 3:
			prompt = "PHONE NUMBER";
			field_ptr = &this->phoneNumber;
			break ;
		case 4:
			prompt = "DARKEST SECRET";
			field_ptr = &this->darkestSecret;
			break ;
		default:
			std::cout
				<< "ERROR: UNKNOWN INDEX: "
				<< index
				<< std::endl;
			return (false);
	}
	std::cout.width(15);
	std::cout << std::left << prompt << ": ";
	if (!std::getline(std::cin, *field_ptr))
	{
		std::cout << std::endl;
		return (false);
	}
	return (true);
}

void Contact::printFields(void)
{
	for (int i = 0; i < 5; ++i)
		this->printField(i);
}

void Contact::printField(int index)
{
	std::string prompt;
	std::string *field_ptr;

	switch (index)
	{
		case 0:
			prompt = "FIRST NAME";
			field_ptr = &this->firstName;
			break ;
		case 1:
			prompt = "LAST NAME";
			field_ptr = &this->lastName;
			break ;
		case 2:
			prompt = "NICKNAME";
			field_ptr = &this->nickname;
			break ;
		case 3:
			prompt = "PHONE NUMBER";
			field_ptr = &this->phoneNumber;
			break ;
		case 4:
			prompt = "DARKEST SECRET";
			field_ptr = &this->darkestSecret;
			break ;
		default:
			std::cout
				<< "ERROR: UNKNOWN INDEX: "
				<< index
				<< std::endl;
			return ;
	}
	std::cout
		<< prompt
		<< ": "
		<< *field_ptr
		<< std::endl;
}
