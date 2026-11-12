/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:03:59 by sataide           #+#    #+#             */
/*   Updated: 2026/10/30 16:03:30 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		j;
	size_t	len_dst;
	int		len_src;

	j = 0;
	len_dst = 0;
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	while (len_dst < size && dst[len_dst] != '\0')
		len_dst++;
	i = len_dst;
	if (len_dst >= size)
		return (size + len_src);
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + (size_t) len_src);
}
