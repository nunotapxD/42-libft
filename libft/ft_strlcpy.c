#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && (size - 1) > i)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*int	main(void)
{
	char	dest[8] = "sam";
	const char src[9] = "samuel";
	size_t size = 5;
	
	printf("%zu\n", ft_strlcpy(dest, src, size));
}*/
