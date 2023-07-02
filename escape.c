char	*escape(const char **s, const char *set)
{
	(*s)++;
	return (ft_ctos(**s));
}

char	*ft_ctos(char c)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = c;
	s[1] = '\0';
	return (s);
}
