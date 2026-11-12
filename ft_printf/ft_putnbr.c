/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 10:31:45 by sataide           #+#    #+#             */
/*   Updated: 2026/11/04 14:37:24 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *count)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		*count += 11;
	}
	else
	{
		if (nb < 0)
		{
			nb = nb * -1;
			write (1, "-", 1);
			*count += 1;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10, count);
			ft_putnbr(nb % 10, count);
		}
		else
		{
			nb = nb + 48;
			write (1, &nb, 1);
			*count += 1;
		}
	}
}
