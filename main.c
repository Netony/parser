#include <stdio.h>
#include <string.h> 

char	*tokenize(const char **s, const char *set);
// char	*escape(const char **s);
// char	*dquote(const char **s, const char *set);


int	main(void)
{
	const char	*a;

	a = "He\\3llo";
	printf("%s\n", tokenize(&a, "\\"));
	printf("%s\n", tokenize(&a, "\\"));
	printf("%s\n", tokenize(&a, "\\"));
}

