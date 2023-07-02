#include "libft.h"
#include <stdio.h>
#include <string.h> 

char	*parse(const char **s, const char *set);

int	main(void)
{
	const char	*s = "Hello My friends, I think it \\will be good";

	printf("%s\n", parse(&s, "\\"));
}
