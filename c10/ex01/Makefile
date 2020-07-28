NAME = ft_cat

SRC = main.c source.c

CFLAGS = -Wextra -Wall -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

f: fclean all
