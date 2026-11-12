/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:43:45 by sataide           #+#    #+#             */
/*   Updated: 2026/11/12 18:39:55 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *a)
{
	t_list	*first;
	t_list	*second;

	if (ft_lstsize(a) <= 1)
		return ;
	first = a;
	second = a->next;
	a = second;
	a->next = first;
	ft_printf("sa\n");
}
