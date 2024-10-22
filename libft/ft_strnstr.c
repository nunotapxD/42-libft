#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	if (len == 0)
		return (0);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while ((str[i + j] == to_find[j])
			&& (to_find[j] != '\0') && ((i + j) < len))
		{
			if (to_find[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char str[] = "o samuel descobriu que a maria de lurdes gosta dele";
	char to_find[] = "samuel";
	size_t len = 56;

	printf("%s\n", ft_strnstr(str, to_find, len));
}*/
