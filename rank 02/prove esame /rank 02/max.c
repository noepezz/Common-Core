
#include<unistd.h>
#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int	max;

	if (!len)
		return (0);
	max = tab[--len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}

int	main()
{
	int tab []={14,10,6};
	int len = 3;

	printf("%d\n",max(tab,len));
}