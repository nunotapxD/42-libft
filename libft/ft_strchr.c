#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	int		find;

	find = 0;
	p = (char *)s;
	if (*p == (unsigned char)c)
		find = 1;
	else
	{
		while (*p != (unsigned char)c && *p != '\0')
		{
			p++;
			if (*p == (unsigned char)c)
				find = 1;
		}
	}
	if (find == 1)
		return (p);
	else
		return (0);
}

/*int	main(void)
{
	const char	str[] = "shamuel";
	int	c = 'd';

	printf("%s\n", ft_strchr(str, c));
}*/