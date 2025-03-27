/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npezzati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:32:02 by npezzati          #+#    #+#             */
/*   Updated: 2025/02/24 14:32:05 by npezzati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*void epur_str(char *str){
	while (*str == ' ')
		str++;
	while (*str != '\0'){
		if (*str == ' ')
		{
		 	if (*str++ == ' ' && *str++ != '\0')
		 		write(1, ".", 1);
		}
		else 
			write(1, &*str, 1);
		str++;
	}
}
int main(int ac, char **av){
	if (ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
	return 0;
}*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	epur_str(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] == ' ' || str[idx] == '\t')
		idx++;
	while (str[idx] != '\0')
	{
		if (str[idx] == ' ' || str[idx] == '\t')
		{
			if (str[idx + 1] > ' ' && str[idx + 1] != '\0')
				ft_putchar(' ');
		}
		else if (str[idx] != ' ' && str[idx] != '\t')
			ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}

