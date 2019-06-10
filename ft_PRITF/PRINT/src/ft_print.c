/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 18:16:29 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/05/20 21:55:39 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_print(va_list arg, t_info tmp)
{
	if (tmp.type == '%')
		return (ft_print_c("%", tmp));
	else if (tmp.type == 'd' || tmp.type == 'i')
		return (ft_type_di(arg ,tmp));
	else if (tmp.type == 'c')
		return (ft_type_c(arg, tmp));
	else if (tmp.type == 's')
		return (ft_type_s(arg, tmp));
	else if (tmp.type == 'o' || tmp.type =='u')
		return (ft_type_ou(arg, tmp));
	else if (tmp.type == 'x' || tmp.type == 'X' || tmp.type == 'p')
		return (ft_type_xX(arg, tmp));
}

int		ft_print_c(char *c, t_info tmp)
{
	c = ft_width_before(c , (tmp.width - 1), tmp);
	c = ft_width_after(c, (tmp.width - 1), tmp);
	ft_write(c);
	return (ft_strlen(c));
}

int		ft_print_sdifu(char *sdifu, t_info tmp)
{
	sdifu = ft_width_before(sdifu , (tmp.width - ft_strlen(sdifu)), tmp);
	sdifu = ft_width_after(sdifu, (tmp.width - ft_strlen(sdifu)), tmp);
	ft_write(sdifu);
	return (ft_strlen(sdifu));
}

int		ft_print_o(char *o, t_info tmp)
{
	if (tmp.hash && !tmp.precision)
		o = ft_strjoin_free("0", o, 0);
	o = ft_width_before(o , (tmp.width - ft_strlen(o)), tmp);
	o = ft_width_after(o, (tmp.width - ft_strlen(o)), tmp);
	ft_write(o);
	return (ft_strlen(o));
}

int		ft_print_c(char *c, t_info tmp)
{
	c = ft_width_before(c , (tmp.width - 1), tmp);
	c = ft_width_after(c, (tmp.width - 1), tmp);
	ft_write(c);
	return (ft_strlen(c));
}
