NAME = libft.a

CC = clang

SRCS =	ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_split.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
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

BONUS = ft_lstnew_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(BONUS:.c=.o) 

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) 
	ar rcs ${NAME} ${OBJS}

bonus: $(OBJS) $(OBJS_BONUS) 
	ar rcs ${NAME} ${OBJS} ${OBJS_BONUS}


.c.o:
	$(CC) $(FLAGS) -c $< -o $@ -I.

	

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJS_BONUS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean all re fclean
