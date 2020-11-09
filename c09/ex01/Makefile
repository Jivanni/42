NAME	= libft.a
SRC		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= ${SRC:.c=.o}
DEPS	= includes/ft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

$(NAME): all

all:
		$(CC) $(CFLAGS) $(SRC) , ar rc $(NAME) $(O)

clean:
		rm -f $(O)

fclean:
		clean ; rm -f $(NAME)

re: fclean ; make all
