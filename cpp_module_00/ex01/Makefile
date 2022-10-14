# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/08 12:20:32 by qxia              #+#    #+#              #
#    Updated: 2022/10/14 13:40:53 by qxia             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME	:= My_awesome_phonebook

SRCS	:= Contact.cpp \
		PhoneBook.cpp \

OBJS	:= $(SRCS:%.cpp=%.o)

%.o : %.cpp
	$(CC) $(CFLAGS) $< -c 

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
