/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_disorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 15:53:28 by sataide           #+#    #+#             */
/*   Updated: 2026/11/08 15:53:51 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

double	compute_disorder(t_list *stack)
{
	double	mistakes;
	double	total_pairs;
	int		i;
	int		j;
	int		len_stack;

	mistakes = 0;
	total_pairs = 0;
	len_stack = ft_lstsize(stack) - 1;
	i = 0;
	while (i < len_stack)
	{
		j = i + 1;
		while (j < len_stack)
		{
			total_pairs++;
			if ((ft_lstindex(stack, i) > ft_lstindex(stack, j)))
				mistakes++;
			j++;
		}
		i++;
	}
	return (mistakes / total_pairs);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*first;
	int	i = 0;
	int	t[4] = {3, 2 , 1, 0};

	first = ft_lstnew(4);
	if (!first)
		return 1;
	t_list *tmp = first;
	while (i < 5)
	{
		tmp->next = ft_lstnew(t[i]);
		tmp = tmp->next;
		i++;
	}
	printf("%-1.2f\n", compute_disorder(first));
}*/