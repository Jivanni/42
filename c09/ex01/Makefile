NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c \
		srcs/ft_strcmp.c
O = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o \
		srcs/ft_strcmp.o
HEAD = includes/ft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror -o

$(NAME): all

all:
		$(CC) $(CFLAGS) $(SRC)

clean:
		rm -f $(O)

fclean:
		clean ; rm -f $(NAME)

re: fclean ; make all
