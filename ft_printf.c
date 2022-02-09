/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprint.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:42:35 by msoler-e          #+#    #+#             */
/*   Updated: 2022/02/08 14:20:58 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	t_print	*list;
	int		i;
	int		numchars;

	list = (t_print *)malloc (sizeof(t_print));
	if (!list)
		return (0);
	ft_init_struct(list);
	i = 0;
	numchars = 0;
	va_start(list->args, str);
	while (str[i])
	{
		if (str[i] == '%')
			numchars = ft_convert(list, str[i++ + 1], numchars);
		else
			write(1, &str[i], 1);
		i++;
	}
	va_end(list->args);
	numchars = i + numchars ;
	free(list);
	return (numchars);
}
