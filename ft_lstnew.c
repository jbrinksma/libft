/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbrinksm <jbrinksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 12:35:12 by jbrinksm       #+#    #+#                */
/*   Updated: 2019/01/17 19:41:06 by jbrinksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*create;

	create = (t_list*)malloc(sizeof(t_list));
	if (!create)
		return (NULL);
	if (!content)
	{
		create->content = NULL;
		create->content_size = 0;
	}
	else
	{
		create->content = malloc(sizeof(void) * content_size);
		if (!create->content)
			return (NULL);
		ft_memcpy(create->content, content, content_size);
		create->content_size = content_size;
	}
	create->next = NULL;
	return (create);
}
