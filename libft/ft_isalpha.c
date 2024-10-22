#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
			return (0);
	}

/*int	main(void)
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", ft_isalpha('0'));
	printf("%d\n", ft_isalpha('%'));
	printf("%d\n", ft_isalpha('0'));
}*/
