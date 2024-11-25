
#include "libft.h"

int	ft_isascii(int c)
{
	int	r;

	r = 0;
	if (c >= 0 && c <= 127)
	{
		r = 1;
	}
	return (r);
}
/*
int	main(void)
{
	char test[] = {'A', 'z', '0', '9', '!'};
	int	numtest = sizeof(test) / sizeof(test[0]);
	int	i;
	char	c;
	
	i = 0;
	while (i < numtest)
	{
		char c = test[i];
		printf("Test del carattere: '%c' (%d): %s\n",c ,c , 
				ft_isascii(c) ? "ascii" : "Non ascii");
		i++;
	}
	return (0);
}*/
