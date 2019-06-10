/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:58:43 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/05/20 18:01:22 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

intmax_t	ft_cast_di(t_info tmp, va_list arg)
{
	intmax_t nbr;

	if (tmp.cast == L)
		nbr = va_arg(arg, long);
	else if (tmp.cast == LL)
		nbr = va_arg(arg, long long);
	else if (tmp.cast == H)
		nbr = (short)va_arg(arg, int);
	else if (tmp.cast == HH)
		nbr = (char)va_arg(arg, int);
	else
		nbr = va_arg(arg, int);
	return (nbr);
}

uintmax_t	ft_cast_ou(t_info tmp, va_list arg)
{
	intmax_t nbr;

	if (tmp.cast == L)
		nbr = va_arg(arg, unsigned long);
	else if (tmp.cast == LL)
		nbr = va_arg(arg, unsigned long long);
	else if (tmp.cast == H)
		nbr = (unsigned short)va_arg(arg, unsigned int);
	else if (tmp.cast == HH)
		nbr = (unsigned char)va_arg(arg, unsigned int);
	else
		nbr = va_arg(arg, int);
	return (nbr);
}

uintmax_t	ft_cast_xX(t_info tmp, va_list arg)
{
	intmax_t nbr;

	if (tmp.type == 'p' || tmp.cast != 0)
		nbr = va_arg(arg, size_t);
	else if (tmp.cast == H)
		nbr = (unsigned short)va_arg(arg, unsigned int);
	else if (tmp.cast == HH)
		nbr = (unsigned char)va_arg(arg, unsigned int);
	else
		nbr = (unsigned int)va_arg(arg, unsigned long);
	return (nbr);
}

int		ft_cast_c(t_info tmp, va_list arg)
{
	int nbr;

	if (tmp.cast == L)
		nbr = va_arg(arg, wint_t);
	else
		nbr = va_arg(arg, int);
	return (nbr);
}

int		*ft_cast_s(t_info tmp, va_list arg)
{
	int *nbr;

	if (tmp.cast == L)
		nbr = va_arg(arg, wchar_t*);
	else
		nbr = va_arg(arg, int*);
	return (nbr);
}

long double	ft_cast_f(t_info tmp, va_list arg)
{
	long double f;

	if (tmp.cast == L)
		f = va_arg(arg, long double);
	else
		f = va_arg(arg, double);
	return (f);
}
