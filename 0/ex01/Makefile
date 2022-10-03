.SUFFIXES: .o .cpp

NAME = phonebook
FILES =


all: $(NAME)

$(NAME): $(NAME).cpp $(NAME).hpp main.cpp
	@g++ -o $(NAME) $^

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

