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
			sort_2.c \
			sort_3.c \
			sort_4.c \
			sort_5.c \
			func35.c \
			sort_big.c \
			check_error.c \


OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
		make -C ft_printf
		$(CC) $(FLAGS) $(SOURCES) -Iheaders -o $(NAME) -lftprintf

all: $(NAME)

clean:
		@rm -rf $(OBJECTS)
		@make -C ft_printf clean


fclean: clean
		@rm -rf $(NAME) ft_printf/libftprintf.a

re: fclean all