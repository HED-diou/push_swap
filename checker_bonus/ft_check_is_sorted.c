/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_is_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:11:43 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/09 16:14:56 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_is_sorted(t_numm *head)
{
	int	count;

	count = 0;
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			if (head->num < head->next->num)
			{
				count++;
			}
			else
			{
				count = -1;
				break ;
			}
			head = head->next;
		}
	}
	return (count);
}
