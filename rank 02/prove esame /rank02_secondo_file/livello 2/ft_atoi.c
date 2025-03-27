/*Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);*/
#include <stdio.h>
int	ft_atoi(const char *str){
	int i = 0;
	int sign = 1;
	int num = 0;
	
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r')
		i++;
	if (str[i] == '-'){
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num += (str[i] - '0');
		i++;
	}
	return (sign * num);
}

int main (){
	char str[] = "45";

	printf("atoi; %d", ft_atoi(str));
	return 0;
}	
