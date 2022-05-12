/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:04:52 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/09 16:14:56 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_4(t_numm **node_a, t_numm **node_b)
{
	int	r;

	r = find_asghar_wa7d(*node_a);
	if (ft_check_is_sorted(*node_a) == -1)
	{
		while (1)
		{
			if (r == (*node_a)->num)
				break ;
			ra(node_a, 1);
		}
		pb(node_b, node_a);
		sort_3(node_a, node_b);
		pa(node_b, node_a);
	}
}
