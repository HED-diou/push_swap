/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:39:22 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/09 16:14:56 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	find_asghar_wa7d_3(int n1, int n2, int n3)
{
	if (n1 < n2)
	{
		if (n1 < n3)
			return (1);
		else
			return (3);
	}
	else
	{
		if (n2 < n3)
			return (2);
		else
			return (3);
	}
}

void	pbsapa(t_numm **node_a, t_numm **node_b)
{
	pb(node_b, node_a);
	sa((*node_a), 1);
	pa(node_b, node_a);
}

void	n1n3(t_numm **node_a, int n1, int n3)
{
	if (n1 < n3)
		sa((*node_a), 1);
	else
		ra(node_a, 1);
}

void	sort_3(t_numm **node_a, t_numm **node_b)
{
	int	n1;
	int	n2;
	int	n3;
	int	r;

	n1 = (*node_a)->num;
	n2 = (*node_a)->next->num;
	n3 = (*node_a)->next->next->num;
	r = find_asghar_wa7d_3(n1, n2, n3);
	if (ft_check_is_sorted(*node_a) == -1)
	{
		if (r == 1)
			pbsapa(node_a, node_b);
		if (r == 2)
			n1n3(node_a, n1, n3);
		if (r == 3)
		{
			if (n1 > n2)
				sa((*node_a), 1);
			rra(node_a, 1);
		}
	}
}
