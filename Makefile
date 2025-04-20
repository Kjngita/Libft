NAME = libft.a
CFILES = ft_isalpha.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_atoi.c \
	ft_isascii.c \
	ft_strlcat.c \
	ft_tolower.c \
	ft_isalnum.c \
	ft_isdigit.c \
	ft_strlcpy.c \
	ft_toupper.c \
	ft_memset.c \
	ft_bzero.c

OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OFILES)
	ar -rcs $@ $^

all: $(NAME) clean

%.o: %.c
	cc $(CFLAGS) -c $^

clean:
	rm $(OFILES)

fclean: clean
	rm $(NAME)

re: fclean all

test: main.c $(NAME)
	cc $(CFLAGS) -lbsd $^ -o cuckoo
	./cuckoo
	rm cuckoo

.SILENT:

.PHONY: clean fclean all re
