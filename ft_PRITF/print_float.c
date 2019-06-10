/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_float.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 13:27:29 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/06/10 15:14:41 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_float_2.c"
//#include "ft_float.c"
#include "binary.c"
#include <stdio.h>
#include <math.h>
#include "../libft2.0/libft.h"

//% [flag] [width] [.precision] [length] specifier
//  #+_ 0  isdigit  .isdigit   hh ll h l  diouxXcspf%

int		main()
{
	long double nbr;
	long long k;
	long long u;
	int i;
	char *cc;
	char c;
//	double nbr2, nbr3, nbr4;

//					nbr = 245.0000000002365;
//					nbr = 386.154;
//					nbr = 15.60;
//					nbr = 67.002266;
//					nbr = 1.9223372036854775807;
//					nbr = 1589.0003256;
//					nbr = 999.999999999;
//					nbr = -0;
					nbr = 100.0;
					k = UINT_MAX;
					k = 19346800;
//					nbr = 5896.258;
//					c = '\000';
//					nbr = 1.6 * 2.9;
//		nbr = 15.00120036;
/*	printf("----- float : %f-----\n", nbr);
	nbr /= 10;
	nbr2 *= 10;
	printf("\n----- float /= 10: %f-----\n----- float *= 10: %f-----\n", nbr, nbr2); */
//	ft_convertf(nbr, 50);
//	printf("%u --\n", k);
//	cc = ft_float(nbr, 50);
//	printf("\nvaleuri\n");
//	i = printf("%s\n", cc);
//	printf("\nvaleur retour: %i\n", i);
//	i = printf("%.50Lf\n", nbr);
//	printf("\nvaleur retour: %i\n", i);
//	fra = modf(nbr, &in);
//	printf("%.500Lf --\n", nbr);
//	printf("in : %.50f --\n", in);
//	printf("fra: %.50f --\n", fra);
	ft_binary(nbr, 4);
//	ft_float_2(nbr, 50);
	//printf("--- ft_printf FLOAT: %s----\n", cc);
	printf("--- --_printf FLOAT: %Lf----\n", nbr);
/*	ft_float(nbr3);
	printf("--- printf FLOAT: %f----\n", nbr3);
	ft_float(nbr4);
	printf("--- printf FLOAT: %f----\n", nbr4);*/
	return(0);
}
