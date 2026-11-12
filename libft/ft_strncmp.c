/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 20:07:15 by sataide           #+#    #+#             */
/*   Updated: 2026/10/30 16:03:44 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_;
	unsigned char	*s2_;

	i = 0;
	s1_ = (unsigned char *) s1;
	s2_ = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (!(s1_[i] == '\0' && s2_[i] == '\0') && i < n - 1)
	{
		if (s1_[i] - s2_[i] != 0)
			return (s1_[i] - s2_[i]);
		i++;
	}
	return (s1_[i] - s2_[i]);
}
