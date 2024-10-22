#include "libft.h"

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	test(unsigned int i, char str)
{
	if (i == 0 || i > 0)
		str = str - 32;
	return (str);
}

int	main(void)
{
	char	*str = "samthekid";

	printf("%s\n", ft_strmapi(str, test));
	return (0);
}*/