/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 14:25:05 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/06/10 15:16:29 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft2.0/libft.h"
#include "ft_itoa_b.c"
#include "ft_pow.c"

void	binary(long long nbr, unsigned long long power)
{
	unsigned long long	b;
	int					i;
	b = ft_pow(2, (power * 8) - 1);
	i = 0;
	while (b > 0)
	{
		if (b & nbr)
			ft_putchar('1');
		else
			ft_putchar('0');
		b >>= 1;
		if (++i == 8 && b > 0)
		{
			i = 0;
			ft_putchar(' ');
		}
	}
}

long		ft_max_short(long long nbr)
{
	long long tmp;
	tmp = (nbr < 0) ? (nbr + SHRT_MIN) + 1 : nbr - SHRT_MAX - 1 ;
	if (nbr > SHRT_MAX)
	{
		nbr = SHRT_MIN;
		nbr += tmp;
	}
	else if (nbr < SHRT_MIN)
	{
		nbr = SHRT_MAX;
		nbr -= tmp;
	}
	return (nbr);
}

int		ft_max_int(long long nbr)
{
	long long tmp;
	tmp = (nbr < 0) ? (nbr + INT_MIN) + 1 : nbr - INT_MAX - 1 ;
	if (nbr > INT_MAX)
	{
		nbr = INT_MIN;
		nbr += tmp;
	}
	else if (nbr < INT_MIN)
	{
		nbr = INT_MAX;
		nbr -= tmp;
	}
	return (nbr);
}

intmax_t		ft_max_long(intmax_t nbr)
{
	intmax_t tmp;
	tmp = (nbr < 0) ? (nbr + LONG_MIN) + 1 : nbr - LONG_MAX - 1 ;
	if (nbr > LONG_MAX)
	{
		nbr = LONG_MIN;
		nbr += tmp;
	}
	else if (nbr < LONG_MIN)
	{
		nbr = LONG_MAX;
		nbr -= tmp;
	}
	return (nbr);
}

long long ft_convert_b(char *str, int bits)
{
	int					i;
	long long	nbr;

	i = 0;
	nbr = 0;
	str = nt_strrev(str);
	bits *= 8;
	printf("coucou: %s--\n", str);
	while (bits > 0 && str[i] != '\0')
	{
		if (str[i] == '1')
		{
			if (i == 0 && str[i] == '1')
				nbr = -1;
			nbr += ft_powl(2, i);
		}
		i++;
		bits--;
	}
//	if (bits == 16 && nbr > SHRT_MAX /*&& nbr < SHRT_MIN*/)
//		return (ft_max_short(nbr));
//	if (bits == 32 && nbr > INT_MAX /*&& nbr < INT_MIN*/)
//		return (ft_max_int(nbr));
//	else if (bits == 64 && nbr > LONG_MAX && nbr < LONG_MIN)
//		return (ft_max_long(nbr));
	return (nbr);
}

long long	ft_binary(long long nbr, int bits)
{
	unsigned long long	b;
	int					i;
	char				*str;

	b = ft_pow(2, (bits * 8) - 1);
	i = 0;
	printf("nbr: %lld--\n", nbr);
	printf("b: %llu--\n", b);
	if (!(str = ft_strnew(70)))
		return (0);
	while (b > 0)
	{
		if (b & nbr)
			str[i] = '1';
		else
			str[i] = '0';
		b >>= 1;
		i++;
	}
	printf("bibi: %s--\n", str);
	return (ft_convert_b(str, bits));
}
