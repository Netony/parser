#include <stdlib.h>
#include "libft.h"

typedef char *(*t_spec)(const char **s, const char *set);

int		ft_stridx(const char *s, const char *set);
char	*escape(const char **s, const char *set);
char	*dquote(const char **s, const char *set);

char	*ft_strtok_spec(const char **s, const char *set)
{
	const char		spec[3] = "\\\"";
	const t_spec	spec_ft[3] = {escape, dquote, NULL};
	int				idx;

	idx = ft_stridx(*s, spec);
	if (idx == -1)
		return (NULL);
	return (spec_ft[idx](s, set));
}

int	ft_stridx(const char *s, const char *set)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_isin(s[i], set))
			return (i);
		i++;
	}
	return (-1);
}
