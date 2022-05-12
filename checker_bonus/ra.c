/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:44:36 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/30 15:31:51 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_numm **node_a, int x)
{
	t_numm	*tmp;

	if (!node_a || ft_lstsize(*node_a) == 1)
		return ;
	if (*node_a)
	{
	tmp = *node_a;
	*node_a = (*node_a)->next;
	tmp->next = NULL;
		ft_lstadd_back(node_a, tmp);
	}
	if (x != 0)
		x = 1;
}
