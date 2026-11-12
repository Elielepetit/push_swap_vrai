/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transformer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:21:17 by sataide           #+#    #+#             */
/*   Updated: 2026/11/10 13:56:04 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*transformer(int *tab, int i)
{
	t_list	*new_node;
	t_list	*head;

	if (!tab)
		return (NULL);
	head = ft_lstnew(tab[i]);
	i++;
	while (tab[i])
	{
		new_node = ft_lstnew(tab[i]);
		ft_lstadd_back(&head, new_node);
		i++;
	}
	new_node->next = NULL;
	return (head);
}

int	main(void)
{
	int	t[4] = {3, 2 ,1 ,0};

	ft_printf("%i\n", transformer(t, 0));
}
