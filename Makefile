NAME = libft.a

CC = gcc

SRCS =	src/ft_memmove.c\
		src/ft_toupper.c\
		src/ft_tolower.c\
		src/ft_strlcat.c\
		src/ft_strlcpy.c\
		src/ft_memcpy.c\
		src/ft_bzero.c\
		src/ft_memset.c\
		src/ft_strlen.c\
		src/ft_isprint.c\
		src/ft_memchr.c\
		src/ft_strchr.c\
		src/ft_strrchr.c\
		src/ft_strnstr.c\
		src/ft_strncmp.c\
		src/ft_isascii.c\
		src/ft_isalnum.c\
		src/ft_isdigit.c\
		src/ft_isalpha.c

	   

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) 
	ar rcs ${NAME} ${OBJS}

.c.o:
	$(CC) $(FLAGS) -c $< -o $@ -I.


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean
