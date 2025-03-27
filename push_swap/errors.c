/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npezzati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 20:56:15 by npezzati          #+#    #+#             */
/*   Updated: 2025/03/26 20:56:17 by npezzati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char **str, int ac)
{
	if (ac == 2)
		ft_free(str);
	ft_printf("errore");
	exit(1);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	free_list(t_node **lista)
{
	t_node	*testa;
	t_node	*tmp;

	testa = *lista;
	while (testa)
	{
		tmp = testa;
		testa = testa->next;
		free(tmp);
	}
	free(lista);
}
