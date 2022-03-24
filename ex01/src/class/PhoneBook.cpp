/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:14:16 by bbrassar          #+#    #+#             */
/*   Updated: 2022/03/24 09:57:13 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <iostream>

static std::string __truncstr(std::string str)
{
	if (str.size() > 10)
		str = str.substr(0, 9) + '.';
	return (str);
}

PhoneBook::PhoneBook(void)
{
	this->count = 0;
	this->index = 0;
}

void PhoneBook::addContact(void)
{
	Contact contact;

	for (int i = 0; i < 5; ++i)
		if (!contact.fillField(i))
			return ;
	if (this->count < 8)
		++this->count;
	if (this->index == 8)
		this->index = 0;
	this->contacts[this->index++] = contact;
	std::cout << std::endl;
}

void PhoneBook::searchContact(void)
{
	std::string line;
	char const *str;
	char *end;
	int index;

	if (this->count == 0)
	{
		std::cout
			<< "ERROR: NO CONTACT"
			<< std::endl;
		return ;
	}
	printTable();
	std::cout
		<< "INDEX? ";
	if (!std::getline(std::cin, line))
		return ;
	str = line.c_str();
	index = (int) ::strtol(str, &end, 10);
	if (end != str && *end == 0 && index >= 0 && index < this->count)
	{
		this->contacts[index].printFields();
		std::cout << std::endl;
	}
	else
		std::cout
			<< "ERROR: INVALID INDEX"
			<< std::endl;
}

void PhoneBook::printTable(void)
{
	int i;

	this->printTableSeparator();
	this->printTableHeader();
	this->printTableSeparator();
	i = 0;
	for (; i < this->count; ++i)
	{
		this->printTableRow(i);
	}
	if (i > 0)
		this->printTableSeparator();
	std::cout << std::endl;
}

void PhoneBook::printTableSeparator(void)
{
	std::cout << "+"
		<< std::string(12, '-')
		<< "+"
		<< std::string(12, '-')
		<< "+"
		<< std::string(12, '-')
		<< "+"
		<< std::string(12, '-')
		<< "+"
		<< std::endl;
}

void PhoneBook::printTableHeader(void)
{
	std::cout << "| "
		<< std::right << std::setw(10) << "INDEX" << " | "
		<< std::right << std::setw(10) << "FIRST NAME" << " | "
		<< std::right << std::setw(10) << "LAST NAME" << " | "
		<< std::right << std::setw(10) << "NICKNAME"
		<< " |"
		<< std::endl;
}

void PhoneBook::printTableRow(int index)
{
	std::cout << "| "
		<< std::right << std::setw(10) << index << " | "
		<< std::right << std::setw(10) << __truncstr(contacts[index].firstName) << " | "
		<< std::right << std::setw(10) << __truncstr(contacts[index].lastName) << " | "
		<< std::right << std::setw(10) << __truncstr(contacts[index].nickname)
		<< " |"
		<< std::endl;
}
