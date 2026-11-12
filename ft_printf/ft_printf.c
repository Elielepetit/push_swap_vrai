/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sataide <sataide@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 19:21:38 by sataide           #+#    #+#             */
/*   Updated: 2026/11/04 16:47:03 by sataide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	printer(const char type, va_list *arg, int *count)
{
	if (type == 'c')
		ft_putchar(va_arg(*arg, int), count);
	else if (type == 's')
		ft_putstr(va_arg(*arg, char *), count);
	else if (type == 'p')
		ft_putvoid(va_arg(*arg, void *), count);
	else if (type == 'd' || type == 'i')
		ft_putnbr(va_arg(*arg, int), count);
	else if (type == 'u')
		ft_putunsint(va_arg(*arg, unsigned int), count);
	else if (type == 'x')
		ft_puthexalow(va_arg(*arg, unsigned long), count);
	else if (type == 'X')
		ft_puthexaupp(va_arg(*arg, unsigned long), count);
	else if (type == '%')
		ft_putchar('%', count);
	else
		count += 2;
}

int	ft_printf(const char *type, ...)
{
	int		count;
	int		i;
	va_list	arg;

	if (!type)
		return (-1);
	va_start(arg, type);
	count = 0;
	i = 0;
	while (type[i])
	{
		if (type[i] == '%')
		{
			printer(type[i + 1], &arg, &count);
			i++;
		}
		else
		{
			write(1, &type[i], 1);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
