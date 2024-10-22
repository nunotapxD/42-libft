#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t			start;
	size_t			end;
	size_t			size;
	char			*new;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] != s1[start] && ft_strchr(set, s1[end]))
		end--;
	size = end - start;
	new = ft_substr(s1, start, size + 1);
	if (!new)
		return (NULL);
	return (new);
}

/*int	main(void)
{
	char	s1[] = "   Maria,Joana   ";
	char	set[] = " ";

	puts(ft_strtrim(s1, set));
}*/