NAME = Megaphooone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
SOURCES = megaphone.cpp\

OBJECTS = ${SOURCES:.cpp=.o}

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)

re: clean fclean all

.PHONY: all clean fclean re