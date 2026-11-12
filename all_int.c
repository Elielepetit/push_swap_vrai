/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:00:16 by sataide           #+#    #+#             */
/*   Updated: 2026/11/07 18:40:57 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	all_int(char **ag, int i)
{
	int	j;

	j = 0;
	while (ag[i])
	{
		while ((ag[i][j] == ' ') || (ag[i][j] >= 9 && ag[i][j] <= 13))
			j++;
		if (ag[i][j] == '-' || ag[i][j] == '+')
			j++;
		while (ag[i][j])
		{
			if (!ft_isdigit(ag[i][j]))
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}
