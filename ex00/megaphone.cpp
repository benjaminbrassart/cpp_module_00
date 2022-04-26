/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:03:03 by bbrassar          #+#    #+#             */
/*   Updated: 2022/04/26 13:29:17 by bbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#undef DEFAULT_MESSAGE
#define DEFAULT_MESSAGE

#include <cctype>
#include <string>
#include <iostream>

static void	_yell(std::string const str)
{
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
		std::cout << (char)::toupper(*it);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			if (i != 1)
				std::cout << " ";
			_yell(std::string(argv[i]));
		}
	}
	std::cout << std::endl;
	return (0);
}
