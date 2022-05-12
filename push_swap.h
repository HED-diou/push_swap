/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:59:32 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/10 20:18:42 by hed-diou         ###   ########.fr       */
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

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				num;
	struct s_list	*next;
}t_numm;

// func
int		ft_atoi(const char *c);
int		ft_isdigit(int arg);
void	err_exit(int c);
void	ft_lstadd_back(t_numm **alst, t_numm *new);
void	ft_lstadd_front(t_numm **alst, t_numm *new);
t_numm	*ft_lstlast(t_numm *lst);
t_numm	*ft_lstnew(int content);
int		ft_lstsize(t_numm *lst);
int		ft_check_is_sorted(t_numm *head);
void	index_stack(t_numm **node, int a);
int		find_asghar_wa7d(t_numm *node);
int		find_akbar_wa7d(t_numm *node);
int		fcible(t_numm **node, int min, int max);
int		f3ataba2(t_numm **node, int cible);
int		f3ataba(t_numm **node, int min, int max);
int		if_exist(t_numm **node, int num);

// sort
void	sa(t_numm *head, int s);
void	sb(t_numm *head, int s);
void	ss(t_numm *node_a, t_numm *node_b);
void	ra(t_numm **node_a, int x);
void	rb(t_numm **node_b, int x);
void	rr(t_numm **node_a, t_numm **node_b);
void	rra(t_numm **node_a, int x);
void	rrb(t_numm **node_b, int x);
void	rrr(t_numm **node_a, t_numm **node_b);
void	pa(t_numm **node_b, t_numm **node_a);
void	pb(t_numm **node_b, t_numm **node_a);

// algo
void	sort_2(t_numm *node_a);
void	sort_3(t_numm **node_a, t_numm **node_b);
void	sort_4(t_numm **node_a, t_numm **node_b);
void	sort_5(t_numm **node_a, t_numm **node_b);
void	sort(t_numm **node_a, t_numm **node_b);

// bonus
char	*get_next_line(int fd);
void	get_new_line(char **s, char **buff, char **line, int fd);
int		is_new_line(char *s);
char	*ft_strdup(char *t1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2);

#endif