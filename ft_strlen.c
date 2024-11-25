
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*s1 = "ciao";
	char	*s2 = "42";
	char	*s3 = "stringa lunga";
	printf("Stringa: \"%s\" -> Lunghezza: %zu\n", s1, ft_strlen(s1));
	printf("Stringa: \"%s\" -> Lunghezza: %zu\n", s2, ft_strlen(s2));
	printf("Stringa: \"%s\" -> Lunghezza: %zu\n", s3, ft_strlen(s3));
	return (0);
}*/
