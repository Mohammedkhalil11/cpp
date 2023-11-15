NAME = Harl_2.0
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
SOURCES = main.cpp\
		Harl.cpp\

OBJECTS = ${SOURCES:.cpp=.o}

all : $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)

re: clean fclean all

.PHONY: all clean fclean re