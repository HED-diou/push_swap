/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:39:21 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/10 18:06:18 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            */
/*              :::    ::: :::::::::: :::::::::                               */
/*             :+:    :+: :+:        :+:    :+:                               */
/*            +:+    +:+ +:+        +:+    +:+                                */
/*           +#++:++#++ +#++:++#   +#+    +:+                                 */
/*          +#+    +#+ +#+        +#+    +#+                                  */
/*         #+#    #+# #+#        #+#    #+#                                   */
/*        ###    ### ########## ######### - 01001000 01000101 01000100        */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// static int	ft_isspace(char c)
// {
// 	if (c == ' ' || c == '\t' || c == '\v'
// 		|| c == '\f' || c == '\r' || c == '\n')
// 	{
// 		return (1);
// 	}
// 	return (0);
// }
int	ft_isdigit(int arg)
{
	if (arg >= 48 && arg <= 57)
	{
		return (1);
	}
	return (0);
}

static int	checkout(const char *c, int i, int x)
{
	long long			out;
	int					n;
	unsigned long long	max;

	n = 0;
	out = 0;
	max = 2147483647;
	while (ft_isdigit(c[i]))
	{
		out = (out * 10) + (c[i] - '0');
		if ((unsigned long long)out > max && x == 1)
			err_exit(2);
		if ((unsigned long long)out > max + 1 && x == -1)
			err_exit(2);
		i++;
		n++;
	}
	if (c[i] == '\0')
	{
		out = out * x;
		return (out);
	}
	err_exit(2);
	return (0);
}

static int	sing(char c)
{
	int	x;

	x = 1;
	if (c == '-' || c == '+')
	{
		if (c == '-')
			x = x * -1;
	}
	return (x);
}

int	ft_atoi(const char *c)
{
	int			i;
	int			x;
	long long	out;

	x = 1;
	i = 0;
	if (c == NULL)
		err_exit(2);
	if (c[i] == '-' || c[i] == '+')
	{
		x = sing(c[i]);
		i++;
	}
	if (ft_isdigit(c[i]))
	{
		out = checkout(c, i, x);
		return (out);
	}
	err_exit(2);
	return (0);
}
