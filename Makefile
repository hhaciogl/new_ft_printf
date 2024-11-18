CFLAGS = Werrors Wextra Wall
NAME = libftprintf.a
C_FILES = $(wildcard ./libft/*.c) ft_printf.c
OBJECT_FILES = $(patsubst %.c,%.o,$(C_FILES))


CFLAGS := -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECT_FILES)
	ar src $(NAME) $(OBJECT_FILES)

clean:
	rm -f $(OBJECT_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME) main.c
	@echo =============================
	gcc main.c -L. -lftprintf -o test
	@./test

norm:
	norminette $(C_FILES) libft.h

.PHONY: clean all re run fclean norm