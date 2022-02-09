/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ad_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:22:31 by msoler-e          #+#    #+#             */
/*   Updated: 2022/02/08 14:12:50 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_convert(t_print *list, const char conver, int numchars)
{
	int		result;
	char	*taula;

	taula = ft_strdup("cspdiuxX%");
	result = 0;
	if (ft_strchr(taula, conver))
	{
		result = ft_format(list, conver);
		numchars = numchars + result - 2;
	}
	free(taula);
	return (numchars);
}
