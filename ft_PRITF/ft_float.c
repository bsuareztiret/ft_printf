/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:43:04 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/06/05 17:08:54 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft2.0/libft.h"
#include "ft_itoa_b.c"

static char*ft_revzer(char *str, int precision)
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
	free (str);
	return (tmp);
}

/*static char*ft_round(char *str, char *str2, int len)
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
}*/

static char		*ft_convert(long double ap, long long av, int precision)
{
	int i;
	char *str;

	if (!(str = ft_strnew(precision + 1)))
		return (NULL);
	i = 0;
	ap = ap - av;
	printf("av: %lld\n", av);
	while (i <= precision)
	{
		ap *= 10;
		av = ap;
		ap -= av;
		str[i] = av + '0';
		printf("------av: %lld\n", av);
		i++;
	}
	av = atoi(str);
	printf("av: %lld\n", av);
	if (av % 10 > 5)
		av += 1;
	str = ft_itoa(av);
	return (str);
}

char*		ft_float(long double nbr, int precision)
{
	long long av;
	char *res;
	char *ult;
	char *result;

	av = nbr;
	ult = ft_convert(nbr, av, precision - 1);
	if (ft_strlen(ult) < (size_t)precision)
		ult = ft_revzer(ult, precision);
	if (precision == 0 && ult[ft_strlen(ult)] >= '5')
		av += 1;
	res = ft_itoa_b(av, 10);
	printf("res: %s\nult: %s\n", res, ult);
	if (!(result = ft_strnew((ft_strlen(res) + ft_strlen(ult)))))
		return (NULL);
	if (precision != 0)
	{
		result = ft_strcat(result, res);
		result = ft_strcat(result, ".");
		result = ft_strcat(result, ult);
	}
	return (result);
}
