/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:25:30 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/21 18:43:30 by hed-diou         ###   ########.fr       */
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

numm	*ft_lstlast(numm *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_back(numm **alst, numm *new)
{
	numm	*l;

	if (*alst)
	{
		l = ft_lstlast(*alst);
		l -> next = new;
	}
	else
	{
		*alst = new;
	}
}

void	ft_lstadd_front(numm **alst, numm *new)
{
	if (*alst)
		new->next = *alst;
	*alst = new;
}

numm	*ft_lstnew(int content)
{
	numm	*c;

	c = (numm *)malloc(sizeof(numm));
	if (!c)
		return (NULL);
	c->num = content;
	c->next = NULL;
	return (c);
}

int	is_duplicate(char **num, int size)
{
	int i = 1;
	int j = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if(ft_atoi(num[i]) == ft_atoi(num[j]))
			{
				return (-1);
			}
			j++;
		}
		i++;
	}
	return 0;
}

int main(int ac , char **av)
{
    int i;
	numm *node_a;
	numm *node_b;ft_lstadd_back(&node_b, ft_lstnew(ft_atoi("5")));

    i = 1;
    if(ac == 1)
		err_exit(2);
    while(i < ac)
    {
		if((is_duplicate(av, ac) == -1 || ac == 1))
			err_exit(2);
		ft_lstadd_back(&node_a, ft_lstnew(ft_atoi(av[i])));
	i++;
    }
	if (ft_check_is_sorted(node_a) == -1)
	{
		if(ac == 3)
			sort_2(node_a);
		else if(ac == 4)
			sort_3(node_a);
		else if(ac == 5)
			sort_4(node_a);
		else if(ac == 6)
			sort_5(node_a);
		else
			sort(node_a);
	}
	
	while(node_a != NULL)
	{
		printf("%d\n", node_a->num);
		node_a = node_a->next; 
	}
}