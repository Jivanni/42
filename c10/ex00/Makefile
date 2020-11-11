NAME	= ft_display_file
SRCS	= srcs/ft_display_file.c
OBJ		= ${SRCS:.c=.o}
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all : ${NAME}

${NAME}: obj
	${CC} ${CFLAGS} -o ${NAME} ${OBJ}

obj: ${SRCS}
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

.PHONY: all fclean clean
