/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:27:59 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/09 16:14:56 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_numm	*ft_lstlast(t_numm *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_back(t_numm **alst, t_numm *new)
{
	t_numm	*l;

	if (*alst)
	{
		l = ft_lstlast(*alst);
		l -> next = new;
	}
	else
	{
		*alst = new;
	}
}

void	ft_lstadd_front(t_numm **alst, t_numm *new)
{
	if (*alst)
		new->next = *alst;
	*alst = new;
}

t_numm	*ft_lstnew(int content)
{
	t_numm	*c;

	c = (t_numm *)malloc(sizeof(t_numm));
	if (!c)
		return (NULL);
	c->num = content;
	c->next = NULL;
	return (c);
}

int	ft_lstsize(t_numm *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
