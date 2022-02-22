/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:59:32 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/21 18:15:46 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	int			num;
	struct s_list	*next;
}		numm;

// func

int	ft_atoi(const char *c);
int	ft_isdigit(int arg);
void    err_exit(int c);

// sort
void sa(numm* head, int s);
void sb(numm* head, int s);
void ss(numm* node_a, numm* node_b);
int     ft_check_is_sorted(numm *head);

// algo
void    sort_2(numm *node_a);

#endif