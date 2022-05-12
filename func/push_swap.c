/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:25:30 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/29 15:00:06 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isdigit(int arg)
{
	if (arg >= 48 && arg <= 57)
	{
		return (1);
	}
	return (0);
}

int	is_duplicate(char **num, int size)
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

void	sort_short(t_numm **stack_a, t_numm **stack_b, int ac)
{
	if (ac == 3)
		sort_2(*stack_a);
	else if (ac == 4)
		sort_3(stack_a, stack_b);
	else if (ac == 5)
		sort_4(stack_a, stack_b);
	else if (ac <= 6)
		sort_5(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	int		i;
	t_numm	*stack_a;
	t_numm	*stack_b;

	stack_b = NULL;
	i = 1;
	while (i < ac)
	{
		if ((is_duplicate(av, ac) == -1 || ac == 1))
			err_exit(2);
		ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	index_stack(&stack_a, ac - 1);
	if (ft_check_is_sorted(stack_a) == -1)
	{
		if (ac <= 6)
			sort_short(&stack_a, &stack_b, ac);
		else
			sort(&stack_a, &stack_b);
	}
}

	// printf("\n\n\nstack A \n");
	// while(stack_a != NULL)
	// {
	// 	printf("%d\n", stack_a->num);
	// 	stack_a = stack_a->next; 
	// }
	// printf("\n\n\nstack B \n");
	// while(stack_b != NULL)
	// {
	// 	printf("%d\n", stack_b->num);
	// 	stack_b = stack_b->next; 
	// }