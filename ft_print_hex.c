/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:23:22 by msoler-e          #+#    #+#             */
/*   Updated: 2022/02/08 14:15:49 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_hex(t_print *list)
{
	int				result;
	unsigned int	hex;

	result = 0;
	hex = va_arg(list->args, int);
	if (hex < 0)
	{
		ft_putchar_fd('-', 1);
		hex = hex * -1;
	}
	if (hex == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	result = ft_putnbr_base(hex, "0123456789abcdef", result);
	return (result);
}
