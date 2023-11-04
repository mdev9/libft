/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-vr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 01:37:13 by marde-vr          #+#    #+#             */
/*   Updated: 2023/11/04 03:05:48 by marde-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	map = ft_lstnew(f(lst->content));
	if (!map)
		return (NULL);
	lst = lst->next;
	tmp = map;
	while (lst)
	{
		tmp->next = ft_lstnew(f(lst->content));
		if (!tmp->next)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		lst = lst->next;
		tmp = tmp->next;
	}
	return (map);
}
/*
void * addOne(void * p) {void * r = malloc(sizeof(int)); *(int*)r = *(int*)p + 1; return (r);}

int main(void)
{


	int tab[] = {0, 1, 2, 3};
	t_list * l =  ft_lstnew(tab);
	for (int i = 1; i < 4; ++i)
		ft_lstadd_back(&l, ft_lstnew(tab + i));
	t_list * m = ft_lstmap(l, addOne, free);
	t_list * tmp = l;
	* 1 2 3 4  for (int i = 0; i < 4; ++i)
	{
		*(int*)tmp->content == i;
		tmp = (t_list *)tmp->next;
	}
	tmp = m;
	* 5 6 7 8  for (int i = 0; i < 4; ++i)
	{
		*(int*)tmp->content == i + 1;
		tmp = (t_list *)tmp->next;
	}
	write(1, "\n", 1);
	return(0);
}
*/
