/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbrinksm <jbrinksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 09:13:15 by jbrinksm       #+#    #+#                */
/*   Updated: 2019/01/16 13:08:36 by jbrinksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_allocintmin(void)
{
	char	*min;

	min = (char*)malloc(sizeof(char) * 12);
	min = ft_strdup("-2147483648");
	return (min);
}

char		*ft_itoa(int n)
{
	char	*strint;
	int		i;
	int		len;

	i = 0;
	len = ft_intlen(n);
	strint = (char*)malloc((ft_intlen(n) + 1) * sizeof(char));
	if (!strint)
		return (NULL);
	if (n == -2147483648)
		return (ft_allocintmin());
	else if (n < 0)
	{
		strint[i] = '-';
		n *= -1;
	}
	strint[len--] = '\0';
	if (n == 0)
		strint[len] = 0 + 48;
	while (n > 0)
	{
		strint[len--] = n % 10 + 48;
		n /= 10;
	}
	return (strint);
}
