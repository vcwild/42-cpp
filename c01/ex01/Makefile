#### SETTINGS ####

NAME = phonebook

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Contact.cpp Phonebook.cpp
HEADERS = Contact.hpp Phonebook.hpp

.SUFFIXES: .o .cpp .hpp

.PHONY: all clean fclean re

#### RULES ####

all: $(NAME)

$(NAME): $(FILES) $(HEADERS) main.cpp
	@$(CC) $(CFLAGS) -o $(NAME) $^

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all
