/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 15:21:28 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/04/17 18:17:48 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.h"
#include <limits.h>
#include "ft_itoa_b.c"
#include <stdio.h>
#include "../libft2.0/libft.h"

void	ft_print_add(long long n)
{
//	int		*in;
//	int		j;
	char	*str1;
//	char	*str2;

//	in = p;
//	j = 32767;


	str1 = ft_itoa_b(n, 10);
//	str2 = ft_itoa_b((int)in, 16);
//	ft_putstr("0x");
	ft_putstr(str1);
//	ft_putstr(str2);
	return ;
}

int		main()
{
//	printf("%lu\n", sizeof(long));
	ft_print_add(-4294967296);
	printf("\n%ld\n", -4294967296);
}
