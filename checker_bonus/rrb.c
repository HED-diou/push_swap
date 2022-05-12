/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:35:37 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/29 15:24:26 by hed-diou         ###   ########.fr       */
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

	if (!node_a || ft_lstsize(*node_a) == 1)
		return ;
	if (*node_a)
	{	
		befor_last = ft_lst__last((*node_a));
		last = ft_lstlast((*node_a));
		last->next = (*node_a);
		(*node_a) = last;
		befor_last->next = NULL;
	}
	if (x != 0)
		x = 1;
}
