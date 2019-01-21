/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbrinksm <jbrinksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 14:34:00 by jbrinksm       #+#    #+#                */
/*   Updated: 2019/01/12 14:32:28 by jbrinksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		end;

	i = 0;
	end = ft_strlen(s1);
	while (s2[i] != '\0')
		s1[end++] = s2[i++];
	s1[end] = '\0';
	return (s1);
}
