/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:47:49 by sataide           #+#    #+#             */
/*   Updated: 2026/11/08 15:48:35 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <stdlib.h>

int				all_int(char **ag, int i);
double			compute_disorder(t_list *stack);
int				ft_lstindex(t_list *first, int i);
int				unique_args(char **ag, int i);

#endif