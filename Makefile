.PHONY: libft.a all clean fclean re

CC = clang
CFLAGS = -Wall -Wextra -Werror -I .

NAME = libft.a

SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

all: $(NAME)

re: fclean all

log:
	@echo $(SRCS)
	@echo $(OBJS)
	@echo $(CFLAGS)