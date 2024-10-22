#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	print_char_with_index(unsigned int i, char *c)
{
	printf("Caractere na posição %u: %c\n", i, *c);
}

int	main(void)
{
	char str[] = "Samumumumu";

	ft_striteri(str, print_char_with_index);
	return (0);
}*/