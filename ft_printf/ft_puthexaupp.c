/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaupp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:42:37 by sataide           #+#    #+#             */
/*   Updated: 2026/11/04 14:30:57 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexaupp(unsigned int nb, int *count)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (nb > 15)
	{
		ft_puthexaupp(nb / 16, count);
		ft_puthexaupp(nb % 16, count);
	}
	else
	{
		write (1, &hexa[nb], 1);
		*count += 1;
	}
}
