/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:23:22 by msoler-e          #+#    #+#             */
/*   Updated: 2022/02/08 14:16:16 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_basem(unsigned int hex, char *base, int result)
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
		result = ft_putnbr_basem(hex / bs, "0123456789ABCDEF", result);
		ft_putchar_fd(base[hex % bs], 1);
	}
	return (result);
}

int	ft_print_hexu(t_print *list)
{
	int				result;
	unsigned int	hex;

	result = 0;
	hex = va_arg(list->args, unsigned int);
	if (hex < 0)
	{
		ft_putchar_fd('-', 1);
		hex = hex * -1;
	}
	if (hex == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	result = ft_putnbr_basem(hex, "0123456789ABCDEF", result);
	return (result);
}
