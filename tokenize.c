#include "libft.h"

char	*ft_strtok(const char **s, const char *set);
char	*ft_strtok_spec(const char **s, const char *set);

char	*tokenize(const char **s, const char *set)
{
	char	*token;

	if (ft_isin(**s, set))
		token = ft_strtok_spec(s, set);
	else
		token = ft_strtok(s, set);
	return (token);
}

