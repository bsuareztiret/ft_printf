/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 15:16:11 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/05/02 17:37:51 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "../libft2.0/libft.h"
#include <stdio.h>

char		*nt_strrev(char *str)
{
	int			i;
	int			j;
	char		tmp;

	i = 0;
	j = ft_strlen(str + 1);
	tmp = '\0';
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j--;
		i++;
	}
	return (str);
}

static int		nt_len(long long nbr, int base)
{
	int i;

	i = 0;
	while (nbr > 0)
	{
		nbr /= base;
		i++;
	}
	return (i);
}

static char		*nt_base(unsigned long long nbr, char *str, int base, int i)
{
	unsigned int	j;
	char		*hex;

//	printf("hey nbr: %lli\n", nbr);
	j = 0;
	hex = "0123456789abcdef";
	if (nbr == 0)
	{
		str[0] = '0';
		i = 1;
	}
	while (nbr > 0)
	{
		str[i] = hex[(nbr % base)];
		nbr /= base;
//		printf("hey str1: %s\n", str);
		i++;
	}
	nt_strrev(str);
//	printf("hey str2: %s\n", str);
	return (str);
}

char			*ft_itoa_b(unsigned long long  nbr, int base)
{
	int			i;
	char		*str;

	i = 0;
	if (!(str = ft_strnew(nt_len(nbr, base) + 1)))
		return (NULL);
	if (base != 0)
		return (str = nt_base(nbr, str, base, i));
	else
		return (0);
}
