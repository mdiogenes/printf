/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 09:48:33 by msoler-e          #+#    #+#             */
/*   Updated: 2022/02/08 11:31:15 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_decimal(t_print *list)
{
	int		result;
	int		number;
	char	*str;

	number = va_arg(list->args, int);
	str = ft_itoa(number);
	result = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (result);
}
