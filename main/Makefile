NAME = prog
SRC = main.c
CC = cc
CFLAGS = -Wall -Wextra -Werror
INC_DIR = ..
INC_LIBFT = -L/mnt/nfs/homes/galambey/Documents/LIBFT_42/LIBFT/GITHUB -lft
INC_LIBBSD = -lbsd

all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) -g $(SRC) $(INC_LIBFT) $(INC_LIBBSD) -I $(INC_DIR) -o $(NAME)
	./prog

vtest :
	$(CC) $(CFLAGS) -g3 test.c $(INC_LIBFT) $(INC_LIBBSD) -I $(INC_DIR) -o $(NAME)

valgrind :
	$(CC) $(CFLAGS) -g3 $(SRC) $(INC_LIBFT) $(INC_LIBBSD) -I $(INC_DIR) -o $(NAME)
	valgrind ./prog

stest :
	$(CC) $(CFLAGS) -fsanitize=address test.c $(INC_LIBFT) $(INC_LIBBSD) -I $(INC_DIR) -o $(NAME)

sanitize :
	$(CC) $(CFLAGS) -fsanitize=address $(SRC) $(INC_LIBFT) $(INC_LIBBSD) -I $(INC_DIR) -o $(NAME)

lldbtest :
	$(CC) $(CFLAGS) -g test.c $(INC_LIBFT) $(INC_LIBBSD) -I $(INC_DIR) -o $(NAME)

clean :
	rm -f $(NAME) a.out

re : clean all
