/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:45:36 by sataide           #+#    #+#             */
/*   Updated: 2026/11/04 17:05:50 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthexalow_(unsigned long nb, int *count)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nb > 15)
	{
		ft_puthexalow_(nb / 16, count);
		ft_puthexalow_(nb % 16, count);
	}
	else
	{
		write (1, &hexa[nb], 1);
		*count += 1;
	}
}

void	ft_putvoid(void *adress, int *count)
{
	if (!adress)
		ft_putstr ("(nil)", count);
	else
	{
		ft_putstr("0x", count);
		ft_puthexalow_((unsigned long) adress, count);
	}
}
