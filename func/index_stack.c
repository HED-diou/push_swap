/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:40:22 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/10 15:18:59 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sorttable(int *tab, int a)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	tmp = tab[0];
	while (i < a)
	{
		j = 0;
		while (j < a)
		{
			if (tab[i] < tab[j])
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
			j++;
		}
		i++;
	}
	j = 0;
}

void	indexing(int *tab, t_numm *node, int a)
{
	t_numm	*tmp;
	int		i;

	i = 0;
	tmp = node;
	while (node)
	{
		i = 0;
		while (i < a)
		{
			if (tab[i] == node->num)
			{
				node->num = i;
				break ;
			}
			i++;
		}
		node = node->next;
	}
	node = tmp;
}

void	index_stack(t_numm **node, int a)
{
	int		i;
	int		*tab;
	t_numm	*tmp;

	i = 0;
	tmp = *node;
	tab = malloc(ft_lstsize(*node) * sizeof(int));
	while (tmp)
	{
		tab[i] = tmp->num;
		i++;
		tmp = tmp->next;
	}
	ft_sorttable(tab, a);
	indexing(tab,*node, a);
	free(tab);
}
