/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 11:29:35 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/05/20 21:43:43 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include <stdio.h>
# include <wchar.h>
# include "libft.h"

enum				e_cast
{
	NONE,
	H,
	HH,
	L,
	LL,
	D
};


typedef	struct		s_info
{
	int				hash;
	int				plus;
	int				minus;
	int				space;
	int				zero;
	int				precision;
	int				width;
	int				cast;
	char			type;
}					t_info;

int				ft_printf(const char *restrict format, ...);
int				ft_arg(char c, t_info tmp, va_list arg, int *res);
static void		ft_parse_flag(char flag, t_info *tmp);
static int		ft_parse_precision(const char *format, int *i);
static int		ft_parse_cast(const char *format, int *i);
int				ft_is_type(char c);
int				ft_is_flag(char c);
int				ft_is_cast(char c);
intmax_t		ft_cast_di(t_info tmp, va_list arg);
uintmax_t		ft_cast_ou(t_info tmp, va_list arg);
uintmax_t		ft_cast_xX(t_info tmp, va_list arg);
int				ft_cast_c(t_info tmp, va_list arg);
int				ft_cast_s(t_info tmp, va_list arg);
long double		ft_cast_f(t_info tmp, va_list arg);
t_info			ft_init_tmp(void);

#endif
