#### SETTINGS ####

NAME = phonebook

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Contact.cpp Phonebook.cpp main.cpp
HEADERS = Contact.hpp Phonebook.hpp

.SUFFIXES: .o .cpp .hpp

.PHONY: all clean fclean re

#### RULES ####

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $^

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
