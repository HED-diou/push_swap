/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:13:55 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/21 14:59:08 by hed-diou         ###   ########.fr       */
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

void sa(numm* head, int s)
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
            printf("sa\n");
    }
}
