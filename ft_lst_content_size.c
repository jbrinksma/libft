/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lst_content_size.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbrinksm <jbrinksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/21 10:35:48 by jbrinksm      #+#    #+#                 */
/*   Updated: 2019/01/21 10:36:45 by jbrinksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_lst_content_size(t_list *start)
{
	size_t		size;

	size = start->content_size;
	while (start->next != NULL)
	{
		start = start->next;
		size += start->content_size;
	}
	return (size);
}
