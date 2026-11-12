/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:37:04 by sataide           #+#    #+#             */
/*   Updated: 2026/10/30 16:03:05 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	int				len_s;
	unsigned char	*str;

	i = 0;
	len_s = ft_strlen(s);
	str = (unsigned char *) s;
	while (i <= len_s)
	{
		if (str[i] == (unsigned char) c)
			return (&((char *)str)[i]);
		i++;
	}
	return (NULL);
}
