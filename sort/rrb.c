/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:35:37 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/10 19:03:23 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_numm	*ft_lst__last(t_numm *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	rrb(t_numm **node_a, int x)
{
	t_numm	*last;
	t_numm	*befor_last;

	befor_last = ft_lst__last((*node_a));
	last = ft_lstlast((*node_a));
	if (x != 0)
		write(1, "rrb\n", 4);
	last->next = (*node_a);
	(*node_a) = last;
	befor_last->next = NULL;
}
