/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:08:20 by msoler-e          #+#    #+#             */
/*   Updated: 2022/02/08 13:07:26 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_format(t_print *list, char conver)
{
	int	result;

	if (conver == 'c')
		result = ft_print_char(list);
	if (conver == 's')
		result = ft_print_string(list);
	if (conver == 'p')
		result = ft_print_point(list);
	if (conver == 'd')
		result = ft_print_decimal(list);
	if (conver == 'i')
		result = ft_print_enter(list);
	if (conver == 'u')
		result = ft_print_unsigned(list);
	if (conver == 'x')
		result = ft_print_hex(list);
	if (conver == 'X')
		result = ft_print_hexu(list);
	if (conver == '%')
	{	
		write(1, "%", 1);
		result = 1;
	}
	return (result);
}
