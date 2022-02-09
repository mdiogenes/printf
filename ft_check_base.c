/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:02:13 by msoler-e          #+#    #+#             */
/*   Updated: 2022/02/08 14:12:07 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_checkempty(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{	
		if (base[i] < 2)
			return (1);
		i ++;
	}
	return (0);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_checkempty(base))
		return (1);
	i = 0;
	while (base[i])
	{
		if ((base[i] == '-' || base[i] == '+' || base[i] == ' '
				|| (base[i] >= 9) && (base[i] <= 13)))
			return (1);
		i ++;
	}
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i ++;
	}
	return (0);
}
