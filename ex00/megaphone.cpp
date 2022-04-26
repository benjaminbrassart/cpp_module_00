/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:03:03 by bbrassar          #+#    #+#             */
/*   Updated: 2022/03/24 07:23:25 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#undef DEFAULT_MESSAGE
#define DEFAULT_MESSAGE

#include <cctype>
#include <string>
#include <iostream>

static std::string	&_strtoupper(std::string &str)
{
	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
		*it = ::toupper(*it);
	return (str);
}

int	main(int argc, char *argv[])
{
	std::string	str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			if (i != 1)
				std::cout << " ";
			str = argv[i];
			std::cout << _strtoupper(str);
		}
	}
	std::cout << std::endl;
	return (0);
}
