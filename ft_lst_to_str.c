/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lst_to_str.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbrinksm <jbrinksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/21 10:40:26 by jbrinksm      #+#    #+#                 */
/*   Updated: 2019/01/21 10:52:51 by jbrinksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lst_to_str(t_list *start, size_t total_lst_size)
{
	int		i;
	int		l_i;
	char	*str;

	i = 0;
	l_i = 0;
	str = (char*)malloc(sizeof(char) * total_lst_size + 1);
	while (((char*)start->content)[l_i] != '\0')
		str[i++] = ((char*)start->content)[l_i++];
	while (start->next != NULL)
	{
		l_i = 0;
		start = start->next;
		while (((char*)start->content)[l_i] != '\0')
			str[i++] = ((char*)start->content)[l_i++];
	}
	str[i] = '\0';
	return (str);
}
