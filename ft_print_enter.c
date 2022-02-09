/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_enter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:08:24 by msoler-e          #+#    #+#             */
/*   Updated: 2022/02/08 14:14:46 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_enter(t_print *list)
{
	int				result;
	unsigned int	number;
	char			*str;

	number = va_arg(list->args, int);
	str = ft_itoa(number);
	result = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free (str);
	return (result);
}
