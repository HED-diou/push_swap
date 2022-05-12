/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_exit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:59:13 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/10 20:17:03 by hed-diou         ###   ########.fr       */
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

int	ft_strncmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}
