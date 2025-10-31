CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_strlen.c ft_printhexupp.c printaddress.c printchar.c \
		printfdigit.c printstr.c printunsigned.c ft_putstr.c

OBJS = $(SRCS:.c=.o)

DELETE = rm -f
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(DELETE) $(OBJS) $(BOBJS)

fclean: clean
	$(DELETE) $(NAME)

re: fclean all

.PHONY:	clean