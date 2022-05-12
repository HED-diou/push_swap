/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:46:43 by hed-diou          #+#    #+#             */
/*   Updated: 2022/04/01 18:48:28 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_numm *head, int s)
{
	int		tmp;

	if (head != NULL && head->next != NULL)
	{
		tmp = head->num;
		head->num = head->next->num;
		head->next->num = tmp;
	}
	if (s == 0)
		s = 1;
}
