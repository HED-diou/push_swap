/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:43:08 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/11 20:21:40 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <string.h>

int	is_duplicate1(char **num, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_atoi(num[i]) == ft_atoi(num[j]))
			{
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	appl(char *ch, t_numm **stack_a, t_numm **stack_b)
{
	if (ft_strncmp(ch, "sa\n") == 0)
		sa(*stack_a, 0);
	else if (ft_strncmp(ch, "sb\n") == 0)
		sb(*stack_b, 0);
	else if (ft_strncmp(ch, "ra\n") == 0)
		ra(stack_a, 0);
	else if (ft_strncmp(ch, "rb\n") == 0)
		rb(stack_b, 0);
	else if (ft_strncmp(ch, "rr\n") == 0)
		rr(stack_a, stack_b);
	else if (ft_strncmp(ch, "pa\n") == 0)
		pa(stack_b, stack_a);
	else if (ft_strncmp(ch, "pb\n") == 0)
		pb(stack_b, stack_a);
	else if (ft_strncmp(ch, "rra\n") == 0)
		rra(stack_a, 0);
	else if (ft_strncmp(ch, "rrb\n") == 0)
		rrb(stack_b, 0);
	else if (ft_strncmp(ch, "rrr\n") == 0)
		rrr(stack_a, stack_b);
	else if (ft_strncmp(ch, "ss\n") == 0)
		ss(*stack_a, *stack_b);
	else
		err_exit(2);
}

void	ft_check(char *ch)
{
	if (ft_strncmp(ch, "sa\n") || strcmp(ch, "sb\n")
		|| ft_strncmp(ch, "ss\n") || strcmp(ch, "ra\n") || strcmp(ch, "rb\n")
		|| ft_strncmp(ch, "rra\n") || strcmp(ch, "rrb\n") || strcmp(ch, "rrr\n")
		|| ft_strncmp(ch, "rr\n") || strcmp(ch, "pa\n") || strcmp(ch, "pb\n"))
	{
	}
	else
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

void	result(t_numm *stack_a, t_numm *stack_b)
{
	if (ft_check_is_sorted(stack_a) >= 0 && ft_lstsize(stack_b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int ac, char **av)
{
	int		i;
	t_numm	*stack_a;
	t_numm	*stack_b;
	char	*ch;

	i = 1;
	stack_b = NULL;
	if (ac == 1)
		exit(0);
	while (i < ac)
	{
		if ((is_duplicate1(av, ac) == -1 || ac == 1))
			err_exit(2);
		ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	ch = get_next_line(0);
	while (ch)
	{
		ft_check(ch);
		appl(ch, &stack_a, &stack_b);
		free(ch);
		ch = get_next_line(0);
	}
	result(stack_a, stack_b);
}
