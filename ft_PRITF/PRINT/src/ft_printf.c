/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 15:28:17 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/05/20 18:10:27 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *restrict format, ...)
{
	va_list		arg;
	int			i;
	int			res;
	t_info		tmp;

	i = -1;
	res = 0;
	va_start(arg, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			i++;
			tmp = ft_init_tmp();
			while (!ft_arg(format[i], tmp, arg, &res))
			{
				ft_parse(format, &tmp, &i);
				if (format[i] == '\0')
					return (res);
			}
		}
		else
			res += ft_putchar_i(format[i]);
	}
	va_end(arg);
	return (res);
}

int		ft_arg(char c, t_info tmp, va_list arg, int *res)
{
	int	ret;

	ret = 0;
	if (ft_is_type(c))
	{
		tmp.type = c;
		*res += ft_print_c(arg, tmp);
		ret = 1;
	}
	if (!ft_is_flag(c) && !ft_is_type(c) &&
			!ft_is_cast(c) && !ft_isdigit(c) && c != '\0' && c != '.')
	{
		*res += ft_print_c(c, tmp);
		ret = 1;
	}
	return (ret);
}
