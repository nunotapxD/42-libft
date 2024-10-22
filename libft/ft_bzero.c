#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (n > i)
	{
		str[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>

int   main(void)
{
    char str[50] = "sam the kid o bravo";

    bzero(str, 10);
    printf("Original: Before: %d After: %s \n", 2, str);
    ft_bzero(str, 10);
    printf("Minha: Before: %d After: %s \n", 2, str);
    return (0);
}*/