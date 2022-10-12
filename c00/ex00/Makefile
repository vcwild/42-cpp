#### SETTINGS ####

NAME = megaphone

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = megaphone.cpp

.SUFFIXES: .o .cpp .hpp

.PHONY: all clean fclean re

OBJS = $(FILES:.cpp=.o)

#### RULES ####

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $^

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

test:			$(NAME)
				./$(NAME) "shhhhh... I think the students are asleep..."
				./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
				./$(NAME)
