.PHONY: libft.a all clean fclean re

CC = clang
CFLAGS = -Wall -Wextra -Werror -g -I .

NAME = libft.a

BONUS = ft_lstnew.o \
		ft_lstadd_front.o \
		ft_lstsize.o \
		ft_lstlast.o \
		ft_lstadd_back.o \
		ft_lstdelone.o \
		ft_lstclear.o \
		ft_lstiter.o \
		ft_lstmap.o

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

bonus: $(BONUS)

re: fclean all

log:
	@echo $(SRCS)
	@echo $(OBJS)
	@echo $(CFLAGS)