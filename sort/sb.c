/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:46:43 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/21 15:01:47 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sb(numm* head, int s)
{
    numm* temp;

    if(head != NULL && head->next != NULL)
    {
        temp = head;
        while (temp != NULL && temp->next != NULL)
        {
            swap(&temp->num, &temp->next->num);
            temp = temp->next->next;
        }
        if(s != 0)
            printf("sb\n");
    }
}
