/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <msoler-e@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:52:19 by msoler-e          #+#    #+#             */
/*   Updated: 2022/02/08 12:56:51 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

typedef struct s_print
{
	va_list			args;
	int				wdt;	
	int				prc;	
	int				cero;	
	int				pt;	
	int				guio;
	int				tl;
	int				sign;
	int				is_zero;
	int				perc;
	int				space;
}	t_print;

void	ft_init_struct(t_print *list);
int		ft_printf(const char *str, ...);
int		ft_convert(t_print *list, const char conver, int numchars);
int		ft_format(t_print *list, char conver);
int		ft_print_char(t_print *list);
int		ft_print_string(t_print *list);
int		ft_print_point(t_print *list);
int		ft_print_decimal(t_print *list);
int		ft_print_unsigned(t_print *list);
int		ft_print_hex(t_print *list);
int		ft_print_hexu(t_print *list);
int		ft_putnbr_base(unsigned int hex, char *base, int result);
int		ft_check_base(char *base);
int		ft_print_enter(t_print *list);
#endif
