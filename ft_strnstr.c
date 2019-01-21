/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbrinksm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 13:07:22 by jbrinksm      #+#    #+#                 */
/*   Updated: 2019/01/10 13:33:22 by jbrinksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const	char *needle, size_t len)
{
	size_t	i;
	size_t	n_i;

	i = 0;
	n_i = 0;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i] == needle[n_i] && i < len)
		{
			i++;
			n_i++;
			if (needle[n_i] == '\0')
				return ((char*)&haystack[i - ft_strlen(needle)]);
			else if (haystack[i] == '\0')
				return (NULL);
		}
		n_i = 0;
		i++;
	}
	return (NULL);
}
