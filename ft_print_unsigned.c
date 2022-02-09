/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:16:09 by msoler-e          #+#    #+#             */
/*   Updated: 2022/02/08 13:40:18 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	countdigit(unsigned int n)
{
	int	i;

	i = 1;
	while (n >= 10)
	{
		n = n / 10;
		i ++;
	}
	return (i);
}

char	*cuttdigits(char *resultat, int signe, unsigned int n, int digits)
{
	char	num;

	resultat[digits] = '\0';
	while (n > 0)
	{
		num = (n % 10) + '0';
		n = n / 10;
		resultat[digits - 1] = num;
		digits --;
	}
	if (signe)
		resultat[0] = '-';
	return (resultat);
}

char	*ftitoa(unsigned int n)
{
	int		digits;
	int		signe;
	char	*resultat;

	signe = 0;
	if (n == 0)
		return (ft_strdup("0"));
	digits = countdigit(n) + signe;
	resultat = malloc(sizeof(char) * (digits + 1));
	if (!resultat)
		return (0);
	resultat = cuttdigits(resultat, signe, n, digits);
	return (resultat);
}

int	ft_print_unsigned(t_print *list)
{
	int				result;
	unsigned int	number;
	char			*str;

	number = va_arg(list->args, int);
	str = ftitoa(number);
	result = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (result);
}
