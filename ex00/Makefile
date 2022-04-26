# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 06:57:27 by bbrassar          #+#    #+#              #
#    Updated: 2022/04/26 11:00:24 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX					= c++
CXXFLAGS			= -Wall -Wextra -Werror -c -MMD -MP -std=c++98
RM					= rm -f

NAME				= megaphone
SRC					= megaphone.cpp
OBJ					= $(SRC:.cpp=.o)
DEP					= $(OBJ:.o=.d)

$(NAME):			$(OBJ)
					$(CXX) $^ -o $@

%.o:				%.cpp
					$(CXX) $(CXXFLAGS) $< -o $@

all:				$(NAME)

clean:
					$(RM) $(OBJ) $(DEP)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
