/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npezzati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:36:29 by npezzati          #+#    #+#             */
/*   Updated: 2024/11/23 10:36:32 by npezzati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int	ft_isset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_remove_set(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	result = (char *)malloc(ft_strlen(s1) + 1);
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (ft_isset(s1[i], set))
		{
			result[j] = s1[i];
			j++;
		}
		i++;
	}
	result[j] = '\0';
	return (result);
}
