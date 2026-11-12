/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:31:17 by sataide           #+#    #+#             */
/*   Updated: 2026/10/28 15:55:45 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len_s;
	int		i;
	char	*str;

	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	i = 0;
	str = ft_calloc((len_s + 1), (sizeof (char)));
	if (!str)
		return (NULL);
	while ((unsigned char)s[i])
	{
		str[i] = f(i, (unsigned char)s[i]);
		i++;
	}
	return (str);
}
