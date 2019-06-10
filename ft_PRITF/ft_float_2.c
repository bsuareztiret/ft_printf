/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:14:02 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/04/10 15:42:41 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_pow.c"
#include "ft_itoa_b.c"
#include "../libft2.0/libft.h"

static char	*ft_revzer(char *str, int precision)
{
	int i;
	int j;
	char *tmp;

	j = 0;
	if (!(tmp = ft_strnew(precision)))
		return (NULL);
	ft_memset(tmp, '0', precision);
	i = ft_strlen(str);
	while (j + i < precision * 2)
	{
		tmp[precision - i + j] = str[j];
		j++;
	}
	return (tmp);
}

static char	*ft_round(char *str, char *str2, int len)
{
	int i;

	i = 0;
	if (str2[len - 1] >= '5')
	{
		if (str2[len - 1] == '9')
		{
			str[len - 2] += 1;
			if (str[len - 2] > '9')
				str[len - 2] = '0';
			ft_round(str, str2, len - 1);
		}
		else
			str[len - 2] += 1;
	}
	return (str);
}

static char	*ft_convert(long double ap, long long av, int precision)
{
	int i;
	char *str;

	if (!(str = ft_strnew(precision + 1)))
		return (NULL);
	i = 0;
	ap = ap - av;
	while (i <= precision)
	{
		ap *= 10;
		av = ap;
		ap -= av;
		str[i] = av + '0';
		i++;
	}
	return (str);
}

void	ft_float_2(long double nbr, int precision)
{
	long long av;
	char *res;
	char *ult;
	char *ult_d;

	av = nbr;
	ult = ft_convert(nbr, av, precision - 1);
	ult_d = ft_convert(nbr, av, precision);
	if (ft_strlen(ult) < (size_t)precision)
	{
		ult = ft_revzer(ult, precision);
		ult_d = ft_revzer(ult_d, precision + 1);
	}
	if (precision == 0 && ult_d[ft_strlen(ult_d) - 1] >= '5')
		av += 1;
	res = ft_itoa_b(av, 10);
	if (ft_strlen(res) == 0)
		res = "0\0";
	ult = ft_round(ult, ult_d, ft_strlen(ult_d));
	if (precision <= 0)
		ft_putendl(res);
	if (precision > 0)
	{
		ft_putstr(res);
		ft_putchar('.');
		ft_putendl(ult);
	}
}
/*
double	ft_r(int precision, int neg)
{
	double	nbr;

	nbr = 5.0;
	while (precision-- >= 0)
		nbr /= 10;
	return (neg ? -nbr : nbr);
}

char	*ft_partiels(long double ap, int precision)
{
	char	*ret;
	char	c;
	int		i;

	ret = ft_strnew(precision);
	i = 0;
	while (precision--)
	{
		ap *= 10;
		c = ap;
		ret[i++] = '0' + c;
		ap -= c; 
	}
	return (ret);
}

char	*ft_convertf(long double ap, int precision)
{
	char	*rst;
	char	*rst2;
	size_t	intpart;

	if (precision >= 0)
		ap += ft_r(precision, ap < 0);
	if (ap < 0)
		ap = -ap;
	intpart = ap;
	ap -= intpart;
	rst = ft_itoa(intpart);
	rst2 = ft_partiels(ap, precision);
	printf("el utlima testa %s, %s\n", rst, rst2);
	return (NULL);
}*/
