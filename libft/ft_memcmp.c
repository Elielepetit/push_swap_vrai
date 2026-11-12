/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:08:32 by sataide           #+#    #+#             */
/*   Updated: 2026/10/30 16:02:35 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				res;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	res = 0;
	if (n == 0)
	{
		res = 0;
		return (res);
	}
	while (i < n - 1)
	{
		if (str1[i] - str2[i] != 0)
		{
			res = (str1[i]) - (str2[i]);
			return (res);
		}
		i++;
	}
	res = (str1[i]) - (str2[i]);
	return (res);
}
