NAME = fdf
SOURCES = main.c ft_strtok.c escape.c tokenize.c spec.c

OBJS = $(addprefix $(OBJ_DIR)/, $(SOURCES:.c=.o))
SRCS = $(addprefix $(SRC_DIR)/, $(SOURCES))

SRC_DIR = .
OBJ_DIR = objs
LIBFLAGS = -L libft -l ft

CC = cc
CFLAGS = -Wall -Werror -Wextra -I ../libft/incs
all : $(NAME)

fclean : 
	rm -rf objs
	rm -rf a.out

re :
	make fclean
	make all

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFLAGS) -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR) : 
	mkdir $@
