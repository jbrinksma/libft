/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbrinksm <jbrinksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 08:38:24 by jbrinksm       #+#    #+#                */
/*   Updated: 2019/01/16 21:34:37 by jbrinksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	int		i[3];
	char	**array;

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	array = (char**)malloc((ft_strlen(s) + 1) * sizeof(char*));
	if (array == 0)
		return (NULL);
	while (s[i[0]] != '\0')
	{
		while (s[i[0]] == c && s[i[0]] != '\0')
			i[0]++;
		array[i[1]] = (char*)malloc((ft_strlen(s) + 1) * sizeof(char));
		if (array[i[1]] == 0)
			return (NULL);
		while (s[i[0]] != c && s[i[0]] != '\0')
			array[i[1]][i[2]++] = s[i[0]++];
		if (s[i[0]] != '\0' || (s[i[0]] == '\0' && s[i[0] - 1] != c))
			array[i[1]++][i[2]] = '\0';
		i[2] = 0;
	}
	array[i[1]] = 0;
	return (array);
}
