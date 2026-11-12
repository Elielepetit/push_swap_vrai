/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:25:16 by sataide           #+#    #+#             */
/*   Updated: 2026/11/12 15:47:44 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_simple(t_list *a, t_list *b)
{
	int	min;
	int	i;

	while (a != NULL)
	{
		min = ft_lstindex(a, i);
		while (ft_lstindex(a, i))
		{
			if (min > ft_lstindex(a, i))
				min = ft_lstindex(a, i);
			i++;
		}
		i = 0;
		while (ft_lstindex(a, 0) != min)
			rra(a);
		pb(a, b);
	}
	while (b != NULL)
	{
		pa(a, b);
	}
}
