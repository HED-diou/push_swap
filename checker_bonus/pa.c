/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:02:19 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/10 18:44:05 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_numm **node_b, t_numm **node_a)
{
	t_numm	*tmp;

	tmp = *node_b;
	if (*node_b)
	{
		*node_b = (*node_b)->next;
		tmp->next = NULL;
		ft_lstadd_front(node_a, tmp);
	}
}
