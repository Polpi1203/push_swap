NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror -Lft_printf

SOURCES = push_swap.c \
			funcRotate.c \
			funcSwap.c \
			funcPush.c \
			tools.c \
			toolsA.c \
			toolsB.c \
			funcR_Rotate.c \
			func3.c \
			func5.c \
			func35.c \
			func100.c \

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