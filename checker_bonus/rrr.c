/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:37:19 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/29 15:19:18 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_numm **node_a, t_numm **node_b)
{
	if (node_a && node_b)
	{
		rra(node_a, 0);
		rrb(node_b, 0);
	}
}
