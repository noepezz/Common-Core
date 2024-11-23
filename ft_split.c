/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npezzati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:36:44 by npezzati          #+#    #+#             */
/*   Updated: 2024/11/23 10:36:47 by npezzati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

// Conta il numero di parole separate dal delimitatore `c`
static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

// Libera tutta la memoria in caso di errore
static void	free_all(char **arr, size_t i)
{
	while (i > 0)
		free(arr[--i]);
	free(arr);
}

// Copia una sottostringa di lunghezza `len` partendo da `start`
static char	*copy_substring(const char *s, size_t start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// Divide la stringa in sottostringhe separate dal delimitatore `c`
char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	start = 0;
	while (i < word_count)
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		result[i] = copy_substring(s, start, end - start);
		if (!result[i])
		{
			free_all(result, i);
			return (NULL);
		}
		start = end;
		i++;
	}
	result[i] = NULL;
	return (result);
}
