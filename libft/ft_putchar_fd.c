
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	char	c;
	int		fd;

	fd = 1;
	c = 49;
	ft_putchar_fd(c, fd);
}*/
