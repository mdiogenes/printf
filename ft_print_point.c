/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:38:25 by msoler-e          #+#    #+#             */
/*   Updated: 2022/02/08 14:18:20 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_putnbrbase(unsigned long long hex, char *base, int result)
{
	int		bs;
	char	temp;

	if (ft_check_base(base) == 1)
		return (0);
	bs = ft_strlen(base);
	if (hex > 0)
	{
		result = result + 1;
		result = ft_putnbrbase(hex / bs, "0123456789abcdef", result);
		ft_putchar_fd(base[hex % bs], 1);
	}
	return (result);
}

static int	ft_printhex(unsigned long long hex)
{
	int		result;

	result = 0;
	result = ft_putnbrbase(hex, "0123456789abcdef", result);
	return (result);
}

int	ft_print_point(t_print *list)
{
	int					result;
	int					i;
	unsigned long long	punter;
	void				*point;

	result = 0;
	point = va_arg(list->args, void *);
	write(1, "0", 1);
	write(1, "x", 1);
	if (!point)
	{
		write(1, "0", 1);
		result = 3;
		return (result);
	}		
	punter = (unsigned long long) point;
	result = ft_printhex(punter);
	return (result + 2);
}
