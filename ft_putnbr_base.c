/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:00:32 by msoler-e          #+#    #+#             */
/*   Updated: 2022/02/08 14:21:23 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_base(unsigned int hex, char *base, int result)
{
	int		bs;
	char	temp;

	if (ft_check_base(base) == 1)
		return (0);
	bs = 0;
	bs = ft_strlen(base);
	if (hex > 0)
	{
		result = result + 1;
		result = ft_putnbr_base(hex / bs, "0123456789abcdef", result);
		ft_putchar_fd(base[hex % bs], 1);
	}
	return (result);
}
