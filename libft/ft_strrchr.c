#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;
	int		last;

	p = (char *)s;
	i = 0;
	last = -1;
	if ((unsigned char)c == 0)
		return (p + ft_strlen(p));
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
		{
			last = i;
		}
		i++;
	}
	if (last != -1)
		return (p + last);
	else
		return (0);
}

/*int	main(void)
{
	char str[] = "samuel,joao,miguel,diogo";
	int	c = ',';

	printf("%s\n", ft_strrchr(str, c));
}*/