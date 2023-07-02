#include "../libft/incs/libft.h"
#include <stdio.h>

typedef char *(*	t_spec)(const char *s);

int	main(void)
{
	const t_fp	fp[2] = {sum, sub};
	int			a;
	int			b;

	a = 5;
	b = 2;
	printf("sum(%d, %d): %d\n", a, b, fp[0](a, b));
	return (0);
}

char	*ft_strget(const char *s, const char *set)
{
	const char		spec[2] = "\\";
	const t_spec	spec_ft[2] = {escape, quote};
	int				idx;
	char			*strget;

	idx = ft_stridx(*s, set);
	if (idx == -1)
		return (NULL);
	return (spec_ft[idx]);
}
