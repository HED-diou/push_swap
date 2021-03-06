/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_exit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:59:13 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/09 16:14:56 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	err_exit(int c)
{
	write(c, "Error\n", 6);
	exit(1);
}

int	if_exist(t_numm **node, int num)
{
	t_numm	*tmp;

	tmp = *node;
	while (tmp != NULL)
	{
		if (tmp->num == num)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
