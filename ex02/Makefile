# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrassar <bbrassar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 11:04:29 by bbrassar          #+#    #+#              #
#    Updated: 2022/03/24 11:31:23 by bbrassar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX					= c++
CXXFLAGS			= -Wall -Wextra -Werror -c -MMD -MP -I.
RM					= rm -f

ifeq ($(DEBUG), true)
CXXFLAGS			+= -g3 -std=c++98
endif

NAME				= tests
SRC					= Account.cpp tests.cpp
OBJ					= $(SRC:.cpp=.o)
DEP					= $(OBJ:.o=.d)

LOGFILE				= 19920104_091532.log
LOGFILE_URL			= https://projects.intra.42.fr/uploads/document/document/8367/19920104_091532.log
LOGFILE_NOW			= now.log
LOGFILE_THEN		= then.log

$(NAME):			$(OBJ)
					$(CXX) $^ -o $@

%.o:				%.cpp
					$(CXX) $(CXXFLAGS) $< -o $@

$(LOGFILE):
					curl -L -o "$@" $(LOGFILE_URL)

all:				$(NAME)

clean:
					$(RM) $(OBJ) $(DEP) $(LOGFILE_THEN) $(LOGFILE_NOW)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

test:				$(LOGFILE) $(NAME) .FORCE
					< $< cut -d ' ' -f 2 > $(LOGFILE_THEN)
					./accounts | cut -d ' ' -f 2 > $(LOGFILE_NOW)
					diff $(LOGFILE_THEN) $(LOGFILE_NOW)

.PHONY:				all clean fclean re
.FORCE:
