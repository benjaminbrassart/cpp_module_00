/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:28:05 by bbrassar          #+#    #+#             */
/*   Updated: 2022/03/24 09:49:11 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_HPP_
# define _CONTACT_HPP_

# include <string>

class Contact
{
	public:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	private:
	std::string phoneNumber;
	std::string darkestSecret;

	public:
	bool fillField(int index);
	void printFields(void);
	private:
	void printField(int index);
};

#endif
