# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qxia <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/08 12:20:32 by qxia              #+#    #+#              #
#    Updated: 2022/09/08 15:38:00 by qxia             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= clang++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME	:= My_awesome_phonebook

SRCS	:= contact.cpp \
		phonebook.cpp \

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
