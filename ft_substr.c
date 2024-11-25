
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*substr;
	size_t			i;

	if (!s)
		return (NULL);
	substr = (char *)malloc(sizeof(char) len + 1);
	i = 0;
	if (!substr)
		return (NULL);
	while (len > i)
	{
		if (start + i < ft_strlen(s))
			substr[i] = s[start + i];
		else
			substr[i] = '\0';
		i++;
	}
	substr[len] = '\0';
	return (substr);
}
