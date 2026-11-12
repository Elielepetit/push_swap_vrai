/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:14:14 by sataide           #+#    #+#             */
/*   Updated: 2026/11/08 16:22:42 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char *av[])
{
	int	i;

	(void)ac;
	i = 1;
	if (!all_int(av, i))
		return (ft_printf("Error\n"));
	// if (!unique_args(av, i))
		// return ((ft_printf("Error\n")));
}

	/*if (ft_strcmp(av[i], "--simple") == 0
		|| ft_strcmp(av[i], "--medium") == 0
		|| ft_strcmp(av[i], "--complex") == 0
		|| ft_strcmp(av[i], "--adaptative") == 0)
	{
		strat_selector(av[i]);
		i++;
	}*/