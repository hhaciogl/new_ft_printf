#include "ft_printf.h"
#include "./libft/libft.h"
#include <stdio.h>

int main()
{
	printf("size: %zu\n", ft_strlen("hello"));
	printf("%i\n", ft_printf("hello"));
	return (0);
}