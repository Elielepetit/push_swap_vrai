/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:17:03 by sataide           #+#    #+#             */
/*   Updated: 2026/11/08 15:22:39 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*temp;
	t_list	*temp1;

	if (!lst)
	{
		return ;
	}
	else
	{
		temp = *lst;
		while (temp != 0)
		{
			temp1 = temp->next;
			ft_lstdelone(temp);
			temp = temp1;
		}
		*lst = NULL;
	}
}
