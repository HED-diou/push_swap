/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:47:29 by hed-diou          #+#    #+#             */
/*   Updated: 2022/04/01 12:20:02 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_numm	*ft_lst_last(t_numm *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	rra(t_numm **node_a, int x)
{
	t_numm	*last;
	t_numm	*befor_last;

	if (!node_a || ft_lstsize(*node_a) == 1)
		return ;
	if (*node_a)
	{	
		befor_last = ft_lst_last((*node_a));
		last = ft_lstlast((*node_a));
		last->next = (*node_a);
		(*node_a) = last;
		befor_last->next = NULL;
	}
	if (x != 0)
		x = 0;
}
