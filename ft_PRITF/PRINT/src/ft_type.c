/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 20:03:28 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/05/20 21:43:50 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_type_di(va_list arg, t_info tmp)
{
	intmax_t di;
	char *str;

	di = ft_cast_di(tmp, arg);
	if (di == 0)
	{
		str = ft_strdup("0");
		return (ft_print_di(str, tmp));
	}
	str = ft_itoa(di);
	str = ft_cutsign(str, di);
	str = ft_precision(str, tmp);
	str = ft_put_sign(str, di, tmp);
	return (ft_print_di(str, tmp));
}
