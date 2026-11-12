/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:15:30 by sataide           #+#    #+#             */
/*   Updated: 2026/11/12 18:40:47 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list *b)
{
	t_list	*first;
	t_list	*second;

	if (ft_lstsize(b) <= 1)
		return ;
	first = b;
	second = b->next;
	b = second;
	b->next = first;
	ft_printf("sb\n");
}
