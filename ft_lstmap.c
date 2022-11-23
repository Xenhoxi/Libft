/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 23:47:28 by ljerinec          #+#    #+#             */
/*   Updated: 2022/11/24 00:05:18 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*start;

	start = lst;
	list = malloc(sizeof(t_list));
	if (!lst || !f || !del)
		return (0);
	while (lst->next)
	{
		f(lst->content);
		lst = lst->next;
	}
	lst = start;
	while (lst->next)
	{
		list = lst->content;
		lst = lst->next;
	}
	return (list);
}
