/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:22:34 by sataide           #+#    #+#             */
/*   Updated: 2026/10/30 16:04:03 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;
	int		len_s;
	int		len_sub;

	i = (size_t) start;
	j = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= (size_t) len_s)
	{
		sub = ft_calloc(1, sizeof(char));
		return (sub);
	}
	len_sub = len;
	if (len >= (len_s - start))
		len_sub = (len_s - start);
	sub = ft_calloc(sizeof (char), (len_sub) + 1);
	if (!sub)
		return (NULL);
	while (j != len && s[i] != '\0')
		sub[j++] = s[i++];
	return (sub);
}
