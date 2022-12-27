.PHONY: all clean fclean re log

CC = clang
CFLAGS = -Wall -Wextra -Werror -I .

UNAME := $(shell uname)

ifeq ($(UNAME), Darwin)
	CFLAGS = -Wall -Wextra -Werror -arch x86_64 -I .
endif

NAME = libft.a

MAIN =  ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		get_next_line.c \
		append_flag_00.c \
		append_flag_01.c \
		arg_parse.c \
		get_str.c \
		linked_list.c \
		utils_00.c \
		utils_01.c \
		ft_utoa.c \
		ft_printf.c \
		ft_squeeze.c \
		ft_atoi_base.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

OBJS = $(MAIN:.c=.o)

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