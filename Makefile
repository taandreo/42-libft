.PHONY: all clean fclean re log

CC = cc
CFLAGS = -Wall -Wextra -Werror -I .

UNAME := $(shell uname)

# ifeq ($(UNAME), Darwin)
# 	CFLAGS = -Wall -Wextra -Werror -arch x86_64 -I .
# endif

NAME = libft.a

LIBFT_SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_squeeze.c \
		ft_atoi_base.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_utoa.c \
		get_next_line.c ft_freemt.c ft_is_number.c ft_strtol.c ft_max.c ft_strcmp.c \
		ft_is_space.c ft_strndup.c ft_lenmt.c ft_strcasecmp.c ft_startswith.c ft_endswith.c

FT_PRINTF_SRC = ft_printf/append_flag_00.c ft_printf/append_flag_01.c ft_printf/arg_parse.c \
			    ft_printf/get_str.c ft_printf/linked_list.c	ft_printf/utils_00.c \
				ft_printf/utils_01.c ft_printf/ft_printf.c \

SRCS = $(FT_PRINTF_SRC) $(LIBFT_SRC)

OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I include

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

all: $(NAME)

re: fclean all

log:
	@echo $(OBJS)
	@echo $(CFLAGS)