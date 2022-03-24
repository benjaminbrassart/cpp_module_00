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

static void	_yell(std::string str)
{
	std::size_t const	len = str.size();

	for (std::size_t n = 0; n < len; ++n)
		str[n] = ::toupper(str[n]);
	std::cout << str;
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		_yell("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	else
		for (int i = 1; i < argc; ++i)
			if (i == argc - 1)
				_yell(argv[i]);
			else
				_yell(std::string(argv[i]) + " ");
	std::cout << std::endl;
	return (0);
}
