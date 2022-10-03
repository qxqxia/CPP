# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 16:34:04 by qxia              #+#    #+#              #
#    Updated: 2022/10/03 22:11:20 by qinxia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= clang++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME	:= test

SRCS	:= Account.cpp \
		tests.cpp \

OBJS	:= $(SRCS:%.cpp=%.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
