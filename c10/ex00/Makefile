NAME	= ft_display_file
OBJ		= ${SRCS:.c=.o}
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror


.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

clean : ${RM} ${OBJ}

fclean : ${RM} ${NAME}

.PHONY: fclean
