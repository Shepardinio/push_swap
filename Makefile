NAME = push_swap

LIBFT_NAME = libft.a

SRC = push_swap.c

OBJS = ${SRC:.c=.o}

HEAD = ./include

AR = ar rc

RM = rm -f

CC = cc

CFLAGS = -Wall -Wextra -Werror -g3

${LIBFT_NAME}:
	@make -C lib

${NAME}: 	${LIBFT_NAME} ${OBJS} ${HEAD}
			${CC} ${CFLAGS} -c ${SRC}
			${AR} ${NAME} ${OBJS}

.PHONY: all
all: ${NAME}

.PHONY: clean
clean:
	@make -C lib clean
	rm -f ${OBJS}

.PHONY: fclean
fclean: clean
	@make -C lib fclean
	rm -f ${NAME}

.PHONY: re
re: fclean all