/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 13:28:42 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/05/20 16:52:35 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_parse(const char *format, t_info *tmp, int *i)
{
	if (ft_is_flag(format[*i]))
		ft_parse_flag(format[(*i)++], tmp);
	if (ft_isdigit(format[*i]))
		tmp->width = ft_parse_precision(format, i);
	if (format[*i] == '.')
	{
		(*i)++;
		tmp->precision = ft_parse_precision(format, i);
	}
	if (ft_is_cast(format[*i]))
	{
		tmp->cast = ft_parse_cast(format, i);
		(*i)++;
	}
}

static void		ft_parse_flag(char flag, t_info *tmp)
{
	if (flag == '#')
		tmp->hash = 1;
	else if (flag == '+')
		tmp->plus = 1;
	else if (flag == '-')
		tmp->minus = 1;
	else if (flag == ' ')
		tmp->space = 1;
	else if (flag == '0')
		tmp->zero = 1;
}

static int		ft_parse_precision(const char *format, int *i)
{
	int		precision;
	int		start;
	char	*str;
	char	*tmp;

	start = *i;
	while (ft_isdigit(format[*i]))
		(*i)++;
	str = ft_strsub(format, start, *i - start);
	precision = ft_atoi(str);
	return (precision);
}

static int		ft_parse_cast(const char *format, int *i)
{
	enum e_cast cast;

	cast = NONE;
	if (format[*i] == 'h')
		cast = H;
	if (format[*i] == 'h' && format[*i + 1] == 'h')
		cast = HH;
	if (format[*i] == 'l')
		cast = L;
	if (format[*i] == 'l' && format[*i + 1] == 'l')
		cast = LL;
	if (cast == HH || cast == LL)
		(*i)++;
	return (cast);
}
