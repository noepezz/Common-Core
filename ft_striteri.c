
void	*ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i;
	
	i = 0;
	if (!s || !f)
		return;
	while (*s)
	{
		f(s[i], &s[i]);
		i++;
	}
}