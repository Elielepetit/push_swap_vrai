/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 00:11:01 by sataide           #+#    #+#             */
/*   Updated: 2026/10/31 11:15:06 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		nbr = nbr * (-1);
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

static char	*int_min(void)
{
	char	*res;

	res = ft_calloc((11 + 1), (sizeof(char)));
	if (!res)
		return (NULL);
	res[0] = '-';
	res[1] = '2';
	res[2] = '1';
	res[3] = '4';
	res[4] = '7';
	res[5] = '4';
	res[6] = '8';
	res[7] = '3';
	res[8] = '6';
	res[9] = '4';
	res[10] = '8';
	res[11] = '\0';
	return (res);
}

static char	*resulter(char *res, int n, int nb, int size)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		res[size - 1 - i] = (nb % 10) + 48;
		nb = nb / 10;
		i++;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		nb;
	int		size;

	nb = n;
	if (n == -2147483648)
	{
		res = int_min();
		return (res);
	}
	size = int_len(nb);
	if (n < 0)
	{
		size++;
		nb = nb * (-1);
	}
	res = ft_calloc((size + 1), (sizeof(char)));
	if (!res)
		return (NULL);
	if (n == 0)
		res[0] = '0';
	res = resulter(res, n, nb, size);
	return (res);
}
