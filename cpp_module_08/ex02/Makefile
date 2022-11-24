# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 15:56:35 by qxia              #+#    #+#              #
#    Updated: 2022/11/24 22:53:55 by qinxia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME := MutantStack

SRCS := main.cpp \
		
OBJS := $(SRCS:%.cpp=%.o)

%.o : %.cpp
		$(CC) $(CFLAGS) $< -c

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

all : $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
