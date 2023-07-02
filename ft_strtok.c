#include "../libft/incs/libft.h"

int		ft_toklen(const char *s, const char *set);
int		ft_duplen(const char *s, const char *set);

char	*ft_strtok(const char **s, const char *set)
{
	int		dup;
	int		len;
	char	*tok;
	
	dup = ft_duplen(*s, set);
	*s += dup;
	len = ft_toklen(*s, set);
	if (len == 0)
		return (NULL);
	tok = ft_substr(*s, 0, len);
	*s += len;
	return (tok);
}

int	ft_toklen(const char *s, const char *set)
{
	int	len;

	len = 0;
	while (*s)
	{
		if (ft_isin(*s, set) == 0)
		{
			s++;
			len++;
		}
		else
			break ;
	}
	return (len);
}

int	ft_duplen(const char *s, const char *set)
{
	int	len;

	len = 0;
	while (*s)
	{
		if (ft_isin(*s, set))
		{
			s++;
			len++;
		}
		else
			break ;
	}
	return (len);
}
