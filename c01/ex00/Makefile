.SUFFIXES: .o .cpp

NAME = megaphone

all: $(NAME)

$(NAME): $(NAME).cpp
	@g++ -o $(NAME) $<

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all

