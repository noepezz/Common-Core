
char	*ft_concat(char *dest, char const *s1, char const *s2)
{
	int	i;
	int	j;

	i = 0;
	while (*s1)
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (*s1)
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest [i + j] = '\0';
	return (dest[i + j]);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	const char	*new_str;
	int			total_len;

	total_len = (ft_strlen(s1) + ft_strlen(s2));
	new_str = (char *)malloc(sizeof(char) * total_len + 1);
	if (!result)
		return (NULL);
	ft_concat(new_str, s1, s2);
	return (new_str);
}
