int	token_add(t_list **token, const char *tok)
{
	t_list	*new;

	new = ft_lstnew(tok);
	if (new == NULL)
		return (-1);
	ft_lstadd_back(token, new);
	return (0);	
}


/*
t_list	*get_token(const char **s, const char *set)
{
	
}

char	*dq_gettok(const char *s, const char *set);
int		ft_stridx(const char *s, char c);
int		ft_duplen(const char *s, const char *set);

char	*dquote(const char **s, const char *set)
{
	int		len;
	char	*do_quote;

	(*s)++;
	if (*s == NULL)
		return (NULL);
	len = ft_toklen(*s, '"');
	if (len < 0)
		return (NULL); // parse error
	dq_gettok(*s, set);
}

char	*dq_tokenize(const char *s, const char *set)
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
*/
