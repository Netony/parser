/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   escape.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:52:54 by dajeon            #+#    #+#             */
/*   Updated: 2023/07/02 22:22:41 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_ctos(char c);

char	*escape(const char **s, const char *set)
{
	char	*esc;

	(void)set;
	(*s)++;
	if (*s == NULL)
		return (NULL);
	esc = ft_ctos(**s);
	(*s)++;
	return (esc);
}

char	*ft_ctos(char c)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = c;
	s[1] = '\0';
	return (s);
}
