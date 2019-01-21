/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbrinksm <jbrinksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 11:17:51 by jbrinksm       #+#    #+#                */
/*   Updated: 2019/01/15 19:53:18 by jbrinksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hay, const char *ned)
{
	int		i;
	int		len;

	len = ft_strlen(ned);
	i = 0;
	if (ft_strlen(ned) == 0)
		return ((char*)hay);
	while (hay[i] != '\0')
	{
		if (!ft_strncmp(&hay[i], ned, len))
			return ((char*)&hay[i]);
		i++;
	}
	return (NULL);
}
