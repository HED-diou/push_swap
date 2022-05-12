/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:33:34 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/30 15:32:17 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_numm **node_b, int x)
{
	t_numm	*tmp;

	if (!node_b || ft_lstsize(*node_b) == 1)
		return ;
	if (*node_b)
	{
		tmp = *node_b;
		*node_b = (*node_b)->next;
		tmp->next = NULL;
		ft_lstadd_back(node_b, tmp);
	}
	if (x != 0)
		x = 1;
}
