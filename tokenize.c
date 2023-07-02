#include "libft.h"

char	*ft_strtok(const char **s, const char *set);
char	*ft_strtok_spec(const char **s, const char *set);
char	*ft_lstjoin(t_list *lst);
int	ft_tokadd(t_list **toklst, char *tok);

char	*tokenize(const char **s, const char *set)
{
	char	*token;

	if (ft_isin(**s, set))
		token = ft_strtok_spec(s, set);
	else
		token = ft_strtok(s, set);
	return (token);
}

char	*parse(const char **s, const char *set)
{
	t_list	*toklst;
	char	*tok;
	char	*parse;
	int		res;
	
	toklst = NULL;
	while (*s)
	{
		tok = tokenize(s, set);
		if (tok == NULL)
			break ;
		res = ft_tokadd(&toklst, tok);
		if (res < 0)
			break ;
	}
	parse = ft_lstjoin(toklst);
	ft_lstclear(&toklst, free);
	return (parse);
}
