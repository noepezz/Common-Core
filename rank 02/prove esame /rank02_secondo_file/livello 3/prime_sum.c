/*Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>*/
#include <unistd.h>
void putchar(char c){
	write(1, &c, 1);
}
void ft_putnbr(int n){
	if(n > 9)
		ft_putnbr(n / 10);
	char c = (n % 10) + '0';
	putchar(c);
}
int is_prime(int n){
	int i = 2;
	if (n <= 1)
		return 0;
	while (i < n){
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}
int ft_atoi(char *str){
	int i = 0;
	int res = 0;
	
	while (str[i] != '\0'){
		res *= 10;	
		res += str[i] - '0';
		i++;
	}
	return res;
}	
int add_prime_sum(int n)
{
	int i = 2;
	int sum = 0;
	
	if (n <= 0)
		return 0;
	while (i <= n){
		if(is_prime(i))
			sum += i;
		i++;
	}
	return sum;
}
int main (int ac, char **av){
	if (ac == 2)
		ft_putnbr(add_prime_sum(ft_atoi(av[1])));
	else 
		write (1, "0", 1);
	
	putchar('\n');
	return 0;
}	
