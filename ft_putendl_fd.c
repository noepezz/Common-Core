
#include "libft.h"

void	ft_putendl(char *s, int fd)
{
	while (s)
		write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
