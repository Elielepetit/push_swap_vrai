/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unique_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:27:20 by sataide           #+#    #+#             */
/*   Updated: 2026/11/08 15:53:02 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	unique_args(char **ag, int i)
{
	int	j;

	j = i + 1;
	while (ag[i])
	{
		while (ag[j])
		{
			if (ft_strcmp(ag[i], ag[j]) == 0)
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}
