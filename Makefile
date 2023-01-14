NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror -Lft_printf

SOURCES = push_swap.c \
			funcRotate.c \
			funcSwap.c \
			tools.c \
			funcR_Rotate.c \
			func3.c \

OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
		make -C ft_printf
		$(CC) $(FLAGS) $(SOURCES) -Iheaders -o $(NAME) -lftprintf

all: $(NAME)

clean:
		@rm -rf $(OBJECTS)

fclean: clean
		@rm -rf $(NAME)

re: fclean all