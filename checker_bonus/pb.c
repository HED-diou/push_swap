/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:15:23 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/10 18:44:10 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_numm **node_b, t_numm **node_a)
{
	t_numm	*tmp;

	tmp = *node_a;
	if (*node_a)
	{
		*node_a = (*node_a)->next;
		tmp->next = NULL;
		ft_lstadd_front(node_b, tmp);
	}
}
