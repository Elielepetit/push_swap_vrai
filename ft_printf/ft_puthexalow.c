/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexalow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:56:30 by sataide           #+#    #+#             */
/*   Updated: 2026/11/04 17:05:38 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexalow(unsigned int nb, int *count)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nb > 15)
	{
		ft_puthexalow(nb / 16, count);
		ft_puthexalow(nb % 16, count);
	}
	else
	{
		write (1, &hexa[nb], 1);
		*count += 1;
	}
}
