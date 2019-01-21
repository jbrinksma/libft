/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbrinksm <jbrinksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 16:42:24 by jbrinksm       #+#    #+#                */
/*   Updated: 2019/01/12 14:41:49 by jbrinksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	end;

	i = 0;
	end = ft_strlen(s1);
	while (s2[i] != '\0' && i < n)
		s1[end++] = s2[i++];
	s1[end] = '\0';
	return (s1);
}
