/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:48:10 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/11 13:25:16 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_pushed(t_numm **node_a)
{
	int	pushed;

	if (ft_lstsize(*node_a) < 101)
		pushed = (ft_lstsize(*node_a) - 5) / 3 + 1;
	else
		pushed = (ft_lstsize(*node_a) - 5) / 5 + 1;
	return (pushed);
}

void	push_b(t_numm **node_a, t_numm **node_b, int min, int max)
{
	int	pushed;
	int	cible;
	int	med;

	pushed = ft_pushed(node_a);
	min = find_asghar_wa7d(*node_a);
	max = (pushed + min) - 1;
	cible = fcible(node_a, min, max);
	med = (min + max) / 2;
	while ((*node_a)->num != cible)
	{
		if (f3ataba(node_a, min, max) == 1)
			ra(node_a, 1);
		else
			rra(node_a, 1);
		cible = fcible(node_a, min, max);
	}
	pb(node_b, node_a);
	if (med < cible)
		rb(node_b, 1);
}

void	ft(t_numm **node_a, t_numm **node_b)
{
	while ((*node_b)->num != (*node_a)->num - 1)
	{
		if (f3ataba2(node_b, (*node_a)->num - 1) == 1)
			rb(node_b, 1);
		else
			rrb(node_b, 1);
	}
}

void	push_a(t_numm **node_a, t_numm **node_b, int min, int max)
{
	int	pushed;
	int	cible;

	pushed = ft_pushed(node_a);
	min = find_asghar_wa7d(*node_a);
	max = (pushed + min) - 1;
	cible = fcible(node_a, min, max);
	if ((*node_a)->num - 1 == (*node_b)->num)
		pa(node_b, node_a);
	else
	{
		if (if_exist(node_b, (*node_a)->num - 1))
		{
			if ((*node_b)->num < (*node_a)->num
				&& (*node_b)->num > ft_lstlast(*node_a)->num)
			{
				pa(node_b, node_a);
				ra(node_a, 1);
			}
			else
				ft(node_a, node_b);
		}
		else
			rra(node_a, 1);
	}
}

void	sort(t_numm **node_a, t_numm **node_b)
{
	int	min;
	int	max;
	int	pushed;

	while (ft_lstsize(*node_a) > 5)
	{
		pushed = ft_pushed(node_a);
		min = find_asghar_wa7d(*node_a);
		max = (pushed + min) - 1;
		push_b(node_a, node_b, min, max);
	}
	sort_5(node_a, node_b);
	ft_lstlast(*node_a)->num = -1;
	while ((*node_b))
	{
		pushed = ft_pushed(node_a);
		min = find_asghar_wa7d(*node_a);
		max = (pushed + min) - 1;
		push_a(node_a, node_b, min, max);
	}
	while (ft_lstlast(*node_a)->num != -1)
		rra(node_a, 1);
}
