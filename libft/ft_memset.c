
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)str;
	i = 0;
	while (n > i)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

/*int   main(void)
{
      char  str[23] = "samuelthekid";
      int   c = 65;
      size_t n = 7;

      puts(str);
      ft_memset(str, c, n);
      puts(str);
      return (0);
}*/
