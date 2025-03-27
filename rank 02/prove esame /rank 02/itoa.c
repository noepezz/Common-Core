#include <string.h>
int	ft_len_nbr(long nbr)
{
	int i;

	i = 0;
	if (nbr <= 0)
		++i;
	while (nbr != 0)
	{
		++i;
		nbr = nbr / 10;	
	}
	return (i);
	
}
char *itoa_f(int nb){
    int len = ft_len_nbr(nb);
    int i = 0;
    char *str = malloc(sizeof(char) * len + 1);
    long n = nb;

    str[len] = '\0';
    if (n < 0){
        str[0] = "-";
        n = -n;
        i = 1;
    }
    else if (n == 0)
        str[0] = '0';
    i = 0;
    while(n != 0){
        --len;
        str[len] = n % 10 + '0';
        n = n / 10;
    }
    return(str);
}