/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transformer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:21:17 by sataide           #+#    #+#             */
/*   Updated: 2026/11/12 15:50:06 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*transformer(int *tab, int size)
{
	t_list	*new_node;
	t_list	*head;
	int		i;

	i = 0;
	if (!tab)
		return (NULL);
	head = ft_lstnew(tab[i]);
	i++;
	while (i <= size)
	{
		new_node = ft_lstnew(tab[i]);
		ft_lstadd_back(&head, new_node);
		i++;
	}
	new_node->next = NULL;
	return (head);
}

// int	main(void)
// {
// 	t_list	*trans;
// 	int	t[5] = {1, 2, 0, 9, 4561};

// 	trans = transformer(t, 5);
// 	while (trans->next != 0)
// 	{
// 		ft_printf("%i\n", trans->content);
// 		trans = trans->next;
// 	}
// 	ft_lstclear(&trans);
// 	free(trans);
// }
