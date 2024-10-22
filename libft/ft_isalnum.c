
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91)
		|| (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isalnum('5'));
	printf("%d\n", ft_isalnum('B'));
	printf("%d\n", ft_isalnum('m'));
	printf("%d\n", ft_isalnum('%'));
	printf("%d\n", ft_isalnum('*'));
}*/
