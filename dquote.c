char	*dq_gettok(const char *s, const char *set);
int		ft_stridx(const char *s, char c);
int		ft_duplen(const char *s, const char *set);

char	*dquote(const char **s, const char *set)
{
	int		len;
	char	*ret;

	(*s)++;
	if (*s == NULL)
		return (NULL);
	len = ft_toklen(*s, '"');
	if (len < 0)
		return (NULL); // parse error
	ret = dquote_parse(*s, set, len);
	if (ret == NULL)
		return (NULL);
	*s += len;
	return (ret);
	
}

char	*dqoute_parse(const char *s, const char *set, int len)
{
	const char	*content;
	char		*tok;
	int			len;

	len = ft_toklen(s, "\"");
	content = ft_substr(*s, 0, len);
	if (content == NULL)
		return (NULL);
	tokenize(&content, set);
}
