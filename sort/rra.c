/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:47:29 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/10 19:03:14 by hed-diou         ###   ########.fr       */
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

	befor_last = ft_lst_last((*node_a));
	last = ft_lstlast((*node_a));
	if (x != 0)
		write(1, "rra\n", 4);
	last->next = (*node_a);
	(*node_a) = last;
	befor_last->next = NULL;
}
