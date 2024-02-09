NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFT = ./lib/libft.a
SRC =	./src/operation/push.c\
		./src/operation/reverse_rotate.c\
		./src/operation/rotate.c\
		./src/operation/swap.c\
		./src/sort/set_a.c\
		./src/sort/set_b.c\
		./src/sort/sort_action.c\
		./src/sort/sort_utils.c\
		./src/sort/sort.c\
		./src/error.c\
		./src/print_stack.c\
		./src/push_swap.c\
		./src/utils_parsing.c\
		./src/utils_stack.c
OBJ = $(SRC:.c=.o)

NAMEB = checker
SRCB =	./srcb/operation/push.c\
		./srcb/operation/reverse_rotate.c\
		./srcb/operation/rotate.c\
		./srcb/operation/swap.c\
		./srcb/check.c\
		./srcb/error.c\
		./srcb/print_stack.c\
		./srcb/push_swap.c\
		./srcb/utils_parsing.c\
		./srcb/utils_stack.c
OBJB = $(SRCB:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C ./lib
	$(CC) $(CFLAGS) -lm $(OBJ) $(LIBFT) -o $(NAME) -g

bonus: $(OBJB)
	$(MAKE) -C ./lib
	$(CC) $(CFLAGS) -lm $(OBJB) $(LIBFT) -o $(NAMEB) -g

$(NAMEB): bonus

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) fclean -C ./lib
	$(MAKE) clean -C ./lib
	/bin/rm -f $(OBJ) $(OBJB)

fclean: clean
	/bin/rm -f $(NAME) $(NAMEB)

re: fclean all