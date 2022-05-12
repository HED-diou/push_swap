/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:33:34 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/10 19:02:55 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_numm **node_b, int x)
{
	t_numm	*tmp;

	tmp = *node_b;
	*node_b = (*node_b)->next;
	tmp->next = NULL;
	ft_lstadd_back(node_b, tmp);
	if (x != 0)
		write(1, "rb\n", 3);
}
