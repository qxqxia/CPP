CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = RPN

SRCS = main.cpp \
		RPN.cpp 

OBJS = $(SRCS:%.cpp=%.o)

%.o : %.cpp
	$(CC) $(CFLAGS) $< -c 

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

all : $(NAME)

clean:
	rm -rf $(OBJS)
f : fclean
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re