/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_motor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <bsuarez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 15:08:08 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/09/16 15:01:26 by mcabrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_start(const char *format, va_list arg, char *buff)
{
	int		i;
	t_info	tmp;

	i = -1;
	tmp.res = 0;
	tmp.buffer = 0;
	while (format[++i])
		if (format[i] == '%')
		{
			i++;
			tmp = ft_init_tmp(tmp.res, tmp.buffer);
			while (!ft_stop(format[i], &tmp, arg, buff))
			{
				ft_parse(format, &tmp, &i);
				if (format[i] == '\0')
					return ((int)ft_strlen(buff));
			}
		}
		else if (format[i] == '{')
			ft_colors(format, buff, &i, &tmp);
		else
			ft_format(format[i], buff, &tmp);
	write(1, buff, tmp.res);
	ft_strdel(&buff);
	return ((tmp.res) + (BUFFSIZE * tmp.buffer));
}

int		ft_stop(char c, t_info *tmp, va_list arg, char *buff)
{
	int ret;

	ret = 0;
	if (ft_is_type(c))
	{
		tmp->type = c;
		ft_print(arg, tmp, buff);
		ret = 1;
	}
	if (!ft_is_flag(c) && !ft_is_type(c) &&
			!ft_is_cast(c) && !ft_isdigit(c) &&
			c != '\0' && c != '.' && c != '*')
	{
		ft_print_c(c, tmp, buff);
		ret = 1;
	}
	return (ret);
}
