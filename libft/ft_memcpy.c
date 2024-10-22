
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	if (!dest && !src)
		return (NULL);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[24] = "samu";
	char	dest1[24] = "m";
	char	dest2[24] = "";
	char	src[24] = "pereira";
	char	src1[24] = "pereira";
	char	src2[24] = "pereira";
	size_t	n = 6;

	puts(dest);
	puts(dest1);
	puts(dest2);
	ft_memcpy(dest, src, n);
	ft_memcpy(dest2, src2, n);
	memcpy(dest1, src1, n);
	puts(dest);
	puts(dest1);
	puts(dest2);
}*/
