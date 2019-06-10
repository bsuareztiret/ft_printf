/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_kbrol.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 13:59:09 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/05/02 17:57:26 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "binary.c"

char c;
char *s;
void *p;

short si;
short sd;
unsigned short uso;
unsigned short usu;
unsigned short usx;
unsigned short usX;

int i;
int d;
int o;
unsigned int u;
int x;
int X;
float f;

unsigned char uc;
char *s;
void *p;

long lli;
long ld;
long lo;
long long lu;
long lx;
long lX;
double lf;

int		main(void)
{
//	lli = 18635955599;
//	lli = LONG_MAX;
	si = SHRT_MAX;
	usu = USHRT_MAX;
	si = SHRT_MIN;
	lli = LONG_MIN;
//	printf("sizeof %%uc : %lu\n", sizeof(uc));
	printf("sizeof %%si : %lu\n", sizeof(lli));
	binary(lli, 8);
	printf("\n");
/*	ft_putstr(ft_itoa_b(ft_max_type(ft_convert_b(ft_binary(lli + 5, 8), 4)), 10));
	binary(lli, 7); */
	ft_putstr(ft_itoa_b(ft_binary(lli - INT_MAX, sizeof(lli)), 10));
	printf("\n%li\n", lli + INT_MAX);
}
