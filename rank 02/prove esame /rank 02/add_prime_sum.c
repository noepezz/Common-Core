/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npezzati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:44:17 by npezzati          #+#    #+#             */
/*   Updated: 2025/02/24 13:44:19 by npezzati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_small_putnbr(int nbr)
{
	char	digit_char;

	if (nbr > 9)
	{
		ft_small_putnbr(nbr / 10);
		ft_small_putnbr(nbr % 10);
	}
	else
	{
		digit_char = nbr + '0';
		write(1, &digit_char, 1);
	}
}

int is_prime (int nb){
	int check = 2;
	
	if (nb <= 1)
		return 0;
	while (check < nb){
		if ((nb % check) == 0)
			return 0;
		check++;
	}
	return 1;
}
int	mini_atoi(char *str)
{
	int	idx;
	int	result;

	idx = 0;
	result = 0;
	while (str[idx] != '\0')
	{
		result *= 10;
		result += str[idx] - '0';
		idx++;
	}
	return (result);
}

int add_prime_sum(int nb){
	int i = 2;
	int sum = 0;
	
	if (nb <= 0)
		return 0;
	while (i <= nb){
		if (is_prime(i))
			sum += i;
		i++;
	}
	return sum;
}

int main (int ac, char **av){

	if (ac == 2)
		ft_small_putnbr(add_prime_sum(mini_atoi(av[1])));
	else
		write (1, "0", 1);
	write (1, "\n", 1);		
}
		
