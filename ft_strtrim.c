/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbrinksm <jbrinksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 22:33:10 by jbrinksm       #+#    #+#                */
/*   Updated: 2019/01/16 21:36:31 by jbrinksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_returnempty(void)
{
	char *str;

	str = (char*)malloc(sizeof(char) * (1));
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char		*ft_strtrim(const char *s)
{
	int		start;
	int		end;
	char	*str;
	int		i;

	i = 0;
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (s[start] == '\0')
		return (ft_returnempty());
	else
	{
		while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
			end--;
		str = (char*)malloc(sizeof(char) * (end - start + 2));
		if (!str)
			return (NULL);
		while (start <= end)
			str[i++] = s[start++];
		str[i] = '\0';
		return (str);
	}
}
