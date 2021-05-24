# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llembo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 19:08:42 by llembo            #+#    #+#              #
#    Updated: 2020/11/08 20:27:31 by llembo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = main.c file_io.c ft_split.c entry_validation.c \
		str_utilities.c trim.c dict_parse.c

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

fclean:
		rm -f $(NAME)

re: fclean all

