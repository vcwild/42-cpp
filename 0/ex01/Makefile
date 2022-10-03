.SUFFIXES: .o .cpp

NAME = phonebook
FILES =
CFLAGS = -Wall -Wextra -Werror  -std=c++98

all: $(NAME)

$(NAME): $(NAME).cpp $(NAME).hpp main.cpp
	@g++ $(CFLAGS) -o $(NAME) $^

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

