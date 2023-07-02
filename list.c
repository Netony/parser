#include "libft.h"

char	*ft_lstjoin(t_list *lst)
{
	char	*join;
	char	*temp;

	join = ft_strdup("");
	while (lst)
	{
		temp = join;
		join = ft_strjoin(join, lst->content);
		free(temp);
		if (join == NULL)
			return (NULL);
		lst = lst->next;
	}
	return (join);
}

int	ft_tokadd(t_list **toklst, char *tok)
{
	t_list	*new;

	new = ft_lstnew(tok);
	if (new == NULL)
	{
		free(tok);
		return (-1);
	}
	ft_lstadd_back(toklst, new);
	return (0);	
}
