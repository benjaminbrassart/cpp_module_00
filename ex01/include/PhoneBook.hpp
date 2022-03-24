/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:30:31 by bbrassar          #+#    #+#             */
/*   Updated: 2022/03/24 09:16:13 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

# include "Contact.hpp"

class PhoneBook
{
	private:
	int index;
	int count;
	Contact contacts[8];

	public:
	PhoneBook(void);

	public:
	void addContact(void);
	void searchContact(void);

	private:
	void printTable(void);
	void printTableSeparator(void);
	void printTableHeader(void);
	void printTableRow(int index);
};

#endif
