/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:17:52 by msoler-e          #+#    #+#             */
/*   Updated: 2022/02/08 14:18:48 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_string(t_print *list)
{
	int		result;
	char	caract;
	char	*str;

	str = va_arg(list->args, char *);
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	result = ft_strlen(str);
	return (result);
}
