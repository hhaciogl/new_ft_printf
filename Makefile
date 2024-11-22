CFLAGS = Werrors Wextra Wall
NAME = libftprintf.a
C_FILES = ft_printf.c
LIBFT_OBJECT_FILES = \
    ft_isalpha.o \
    ft_isdigit.o \
    ft_isalnum.o \
	ft_isascii.o \
	ft_isprint.o \
	ft_strlen.o \
	ft_memset.o \
	ft_bzero.o \
	ft_memcpy.o \
	ft_memmove.o \
	ft_strlcpy.o \
	ft_strlcat.o \
	ft_toupper.o \
	ft_tolower.o \
	ft_strchr.o \
	ft_strrchr.o \
	ft_strncmp.o \
	ft_memchr.o \
	ft_memcmp.o \
	ft_strnstr.o \
	ft_atoi.o \
	ft_calloc.o \
	ft_strdup.o \
	ft_substr.o \
	ft_strjoin.o \
	ft_strtrim.o \
	ft_split.o \
	ft_itoa.o \
	ft_strmapi.o \
	ft_striteri.o \
	ft_putchar_fd.o \
	ft_putstr_fd.o \
	ft_putendl_fd.o \
	ft_putnbr_fd.o



CFLAGS = -Wall -Wextra -Werror
OBJECT_FILES = ft_printf.o
ALL_OBJECT_FILES =$(OBJECT_FILES) $(addprefix libft/, $(LIBFT_OBJECT_FILES))

all: libft/libft.a $(NAME)

$(NAME): $(ALL_OBJECT_FILES) 
	ar src $(NAME) $(ALL_OBJECT_FILES)

libft/libft.a: 
	cd ./libft && $(MAKE)

clean:
	rm -f $(OBJECT_FILES)
	cd ./libft && $(MAKE) clean

fclean: clean
	rm -f $(NAME)
	cd ./libft && $(MAKE) fclean

re: fclean all

norm:
	norminette $(C_FILES) ft_printf.h

.PHONY: clean all re fclean norm