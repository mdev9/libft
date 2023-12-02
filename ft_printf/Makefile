NAME = libftprintf.a

CC = clang

SRCS =	ft_printf.c\
		ft_printf_utils.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) 
	ar rcs ${NAME} ${OBJS}

.c.o:
	$(CC) $(FLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f a.out libft.a

re: fclean all

.PHONY: clean all re fclean
