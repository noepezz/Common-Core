#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

char *ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}

size_t	ft_strspn( char *s,  char *accept)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		i++;
	}
	return (i);
}

int	main()
{
	

	char haystack[] = "This ";
	char accept[] = "gaTh";

	printf("%zu\n", ft_strspn(haystack, accept));

}
