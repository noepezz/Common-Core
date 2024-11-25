
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		target;
	size_t				i;

	i = 0;
	ptr = (const unsigned char *)s;
	target = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == target)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char data[] = "abcdef";
	char c = 'd';
	void *result = ft_memchr(data, c, sizeof(data));

	if (result != NULL)
		printf("Trovato '%c' in posizione: %ld\n", c, (char *)result - data);
	else
		printf("Il carattere '%c' non è stato trovato.\n", c);

	return 0;
}*/
