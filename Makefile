NAME = push_swap.a

SRC = ./src

OBJS = ${SRC:.c=.o}

HEAD = ./push_swap.h

AR = ar rc

RM = rm -f

CC = cc

CFLAGS = -Wall -Wextra -Werror -g3

${NAME}: 	${OBJS} ${HEAD}
			${CC} ${CFLAGS} -c ${SRC}
			${AR} ${NAME} ${OBJS}

.PHONY: all
all: ${NAME}

.PHONY: clean
clean:
	rm -f ${OBJS}

.PHONY: fclean
fclean: clean
	rm -f ${NAME}

.PHONY: re
re: fclean all