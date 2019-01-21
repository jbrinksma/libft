/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jbrinksm <jbrinksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 21:32:45 by jbrinksm       #+#    #+#                */
/*   Updated: 2019/01/18 10:46:30 by jbrinksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst_start;
	t_list	*new_lst;

	if ((new_lst = f(lst)) == NULL)
		return (NULL);
	new_lst_start = new_lst;
	while (lst->next != NULL)
	{
		lst = lst->next;
		if ((new_lst->next = f(lst)) == NULL)
			return (NULL);
		new_lst = new_lst->next;
	}
	return (new_lst_start);
}
