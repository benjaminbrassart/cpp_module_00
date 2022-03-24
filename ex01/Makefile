# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 07:24:01 by bbrassar          #+#    #+#              #
#    Updated: 2022/03/24 08:45:50 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX					= c++
CXXFLAGS			= -Wall -Wextra -Werror -c -MMD -MP -Iinclude
RM					= rm -f

ifeq ($(DEBUG), true)
CXXFLAGS			+= -g3 -std=c++98
endif

NAME				= CRAPBOOK.EXE
DIR_SRC				= src
DIR_OBJ				= obj
SRC					= main.cpp \
						class/Contact.cpp \
						class/PhoneBook.cpp
OBJ					= $(addprefix $(DIR_OBJ)/, $(SRC:.cpp=.o))
DEP					= $(OBJ:.o=.d)

$(NAME):			$(OBJ)
					$(CXX) $^ -o $@

$(DIR_OBJ)/%.o:		$(DIR_SRC)/%.cpp
					@mkdir -p $(@D)
					$(CXX) $(CXXFLAGS) $< -o $@

all:				$(NAME)

clean:
					$(RM) $(OBJ) $(DEP)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
