/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:45:10 by msoler-e          #+#    #+#             */
/*   Updated: 2022/02/08 10:58:11 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_char(t_print *list)
{
	int		result;
	char	caract;

	caract = (char)va_arg(list->args, int);
	ft_putchar_fd(caract, 1);
	result = 1;
	return (result);
}
