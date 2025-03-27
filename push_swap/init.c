/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npezzati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 20:56:43 by npezzati          #+#    #+#             */
/*   Updated: 2025/03/26 20:56:48 by npezzati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_list(t_node **lista, int ac, char **av)
{
	char	**argomenti;
	int		i;
	t_node	*new;

	i = 0;
	if (ac == 2)
	{
		argomenti = ft_split(av[1], ' ');
		if (!argomenti)
			return ;
	}
	else
		argomenti = &av[1];
	while (argomenti[i])
	{
		new = create_node(ft_atoi(argomenti[i]));
		if (!new)
			return ;
		ft_lstadd_back(lista, new);
		i++;
	}
	node_index(lista);
	if (ac == 2)
		ft_free(argomenti);
}
