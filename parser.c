t_list	*parser(const char *s, const char *spec)
{
	t_list	*lst;
	t_list	*new;

	lst = NULL;
	while (*s)
	{
		new = parse_get(s, spec);
		if (new == NULL)
			ft_lstclear(lst, free);
	}
	return (0);
}

t_list	*parse_get(const char **s, const char *spec)
{
	if (ft_isin(*s, spec, 0))
		new = ft_get_isin(&s);
	else
		new = ft_get_spec(&s, spec);
	return (new);
}

t_list	*ft_get_spec(const char **s, const char *spec)
{
	t_list	*spec;
	
	if (ft_isin(**s, "({['\""))
		spec = ft_pair(**s);
	else if (ft_isin(**s, "\\"))
		spec = ft_escape(**s);
	return (spec);
}

t_list	*ft_get_isin(const char **s, const char *spec)
{
	t_list	*chunk;
	if (isin == NULL)
		return (NULL);
	*s += len;
	chunk = ft_lstnew(isin);
	if (chunk == NULL)
		free(isin);
	return (chunk);
}

char	*ft_token(const char *s, const char *until)
{
	char	*token;
	int		len;
	
	len = ft_isinlen(s, until, 1);
	isin = ft_substr(s, 0, len);
}

int	ft_token_len(const char *s, const char *set)
{
	return (ft_isinlen(s, set, 1));
}

int	ft_repeat_len(const char *s, const char *set)
{
	return (ft_isinlen(s, set, 0));
}
