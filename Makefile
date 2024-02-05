NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFT = ./lib/libft.a
SRC_DIR = ./src
SRC = $(shell find $(SRC_DIR) -name '*.c')
OBJ = $(SRC:.c=.o)

NAMEB = checker
SRCB_DIR = ./srcb
SRCB = $(shell find $(SRCB_DIR) -name '*.c')
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

norminette:
	norminette $(SRC_DIR)
	norminette ./includes/

clean:
	$(MAKE) fclean -C ./lib
	$(MAKE) clean -C ./lib
	/bin/rm -f $(OBJ) $(OBJB)

fclean: clean
	/bin/rm -f $(NAME) $(NAMEB)

re: fclean all