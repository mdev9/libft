NAME = libft.a

CC = clang

SRCS =	ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_memmove.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_memcpy.c\
		ft_bzero.c\
		ft_memset.c\
		ft_strlen.c\
		ft_isprint.c\
		ft_memchr.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strncmp.c\
		ft_memcmp.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_atoi.c\
		ft_isascii.c\
		ft_isalnum.c\
		ft_isdigit.c\
		ft_isalpha.c

	   

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) 
	ar rcs ${NAME} ${OBJS}

.c.o:
	$(CC) $(FLAGS) -c $< -o $@ -I.

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean
