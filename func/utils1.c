/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:32:19 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/30 16:13:25 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_asghar_wa7d(t_numm *node)
{
	t_numm	*tmp;
	int		min;

	min = node->num;
	tmp = node;
	while (tmp)
	{
		if (min > tmp->num)
			min = tmp->num;
		tmp = tmp->next;
	}
	return (min);
}

int	find_akbar_wa7d(t_numm *node)
{
	t_numm	*tmp;
	int		max;

	tmp = node;
	max = 0;
	while (tmp)
	{
		if (max < tmp->num)
			max = tmp->num;
		tmp = tmp->next;
	}
	return (max);
}

int	fcible(t_numm **node, int min, int max)
{
	t_numm	*tmp;
	int		i;

	i = 0;
	tmp = *node;
	while (tmp)
	{
		if (min <= tmp->num && tmp->num <= max)
		{
			return (tmp->num);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}

int	f3ataba2(t_numm **node, int cible)
{
	t_numm	*tmp;
	int		i;
	int		c;

	tmp = *node;
	i = 0;
	c = 0;
	while (tmp)
	{
		if (tmp->num == cible)
		{
			c = i;
			break ;
		}
		tmp = tmp->next;
		i++;
	}
	if (c < ft_lstsize(*node) / 2)
		return (1);
	else
		return (-1);
}

int	f3ataba(t_numm **node, int min, int max)
{
	t_numm	*tmp;
	int		i;
	int		c;

	c = 0;
	i = 0;
	tmp = *node;
	while (tmp)
	{
		if (min <= tmp->num || tmp->num <= max)
		{
			c = i;
			break ;
		}
		tmp = tmp->next;
		i++;
	}
	if (c < ft_lstsize(*node) / 2)
		return (1);
	else
		return (-1);
}
