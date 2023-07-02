char	*dquote(const char **s, const char *set)
{
	int		len;
	char	*do_quote;

	(*s)++;
	len = ft_stridx(*s, '"');
	if (len < 0)
		return (NULL); // parse error
	ft_strget(s, do_quote);
}

char	*do_dquote(const char *s, const char *set)
{
	char	*str;
	char	*ret;

	str = ft_substr(*s, 0, len - 1);
	if (do_quote == NULL)
		return (NULL);
	ft_strget(str);
}

