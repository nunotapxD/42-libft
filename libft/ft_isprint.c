
#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isprint(01));
	printf("%d\n", ft_isprint(303));
	printf("%d\n", ft_isprint(63));
	printf("%d\n", ft_isprint(74));
	printf("%d\n", ft_isprint(17));
}*/
