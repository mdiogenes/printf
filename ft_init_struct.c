/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:37:39 by msoler-e          #+#    #+#             */
/*   Updated: 2022/02/08 11:02:15 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_init_struct(t_print *list)
{
	list->wdt = 0;
	list->prc = 0;
	list->cero = 0;
	list->pt = 0;
	list->guio = 0;
	list->tl = 0;
	list->sign = 0;
	list->is_zero = 0;
	list->perc = 0;
	list->space = 0;
}
