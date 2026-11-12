/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:38:04 by sataide           #+#    #+#             */
/*   Updated: 2026/10/30 14:18:08 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	*str;

	i = ft_strlen(s);
	str = (unsigned char *) s;
	while (i >= 0)
	{
		if (str[i] == (unsigned char) c)
			return (&((char *)str)[i]);
		i--;
	}
	return (NULL);
}
