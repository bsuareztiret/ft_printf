/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 10:35:37 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/05/24 12:26:47 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "point.h"
//#include "../libft2.0/libft.h"
#include "../GDS-ft_printf/includes/libftprintf.h"

int		main(void)
{
	int Rvy;
	int c;
	char cc;
	const char *s;
	void *p;
	int b;
	int d;
	int i;
	long ld;
	long li;
	long long lld;
	long long lli;
	short hd;
	unsigned short hi;
	char hhd;
	unsigned char hhi;
	unsigned int o;
	unsigned int u;
	unsigned int x;
	unsigned int X;
	unsigned long lo;
	unsigned long long llo;
	unsigned char hho;
	unsigned short ho;
	unsigned long lu;
	unsigned long long llu;
	unsigned char hhu;
	unsigned short hu;
	unsigned long lx;
	unsigned long long llx;
	unsigned char hhx;
	unsigned short hx;
	unsigned long lX;
	unsigned long long llX;
	unsigned char hhX;
	unsigned short hX;
	double f;
	long double Lf;
	
	int lbase;
	char *str;
	str = ft_strnew(8);

	c = 75;
	cc = 'K';
	s = "coucou les amis";
	p = &cc;
	b = 8;
	d = -120;
	i = 130;
	ld = 120;
	lld = 9999999120;
	hhd = 'h';
	hd = 1;
	li = 130;
	lli = 99999999130;
	hhi = 'h';
	hi = 1;
	o = 120;
	u = 15287;
	x = 9;
	X = 162;
	lo = 17;
	llo = 1700;
	hho = 'h';
	ho = 1;
	lu = 15287;
	llu = 152800007;
	hhu = 'h';
	hu = 1;
	lx = 9;
	llx = 90000;
	hhx = 'h';
	hx = 1;
	lX = 162;
	llX = 1620000;
	hhX ='X';
	hX = 1;
	f = 258258258258;
	Lf = 258258258258;


	lbase = 162;


	// INT --> UNSIGNED CHAR
	printf("--- c,s,p ---\n\n");
	Rvy = printf("printf %%c --- %c\n", c);
	printf("printf %%cc --- %c\n", cc);
//		printf("\t\t--- atribut # ---\n\n");
//		printf("\t\tprintf %%#c --- %#c\n", c);
//		printf("\n");
/*
		printf("\t\t--- atribut 010 ---\n\n");
//		printf("\t\tprintf %%010c --- %010c\n", c);
	//	printf("\n");
*/
		printf("\t\t--- atribut 4 ---\n\n");
		printf("\t\tprintf %%4c --- %4c\n", c);
		ft_printf("\t\tft_printf %%4c --- %4c\n", c);
		printf("\n");
		
		printf("\t\t--- atribut *4 ---\n\n");
		printf("\t\tprintf %%*4c --- %*c\n", 4, c);
		ft_printf("\t\tft_printf %%*4c --- %*c\n", 4, c);
		printf("\n");
/*
		printf("\t\t--- atribut 0.25 ---\n\n");
//		printf("\t\tprintf %%0.25s --- %0.25c\n", c);
//		printf("\n");

		printf("\t\t--- atribut +.5 ---\n\n"); */
//		printf("\t\tprintf %%+.5s --- %+.5c\n", c);
	//	printf("\n");

		printf("\t\t--- atribut -.5 ---\n\n");
		printf("\t\tprintf %%-.5c --- %-.c\n", c);
		ft_printf("\t\tft_printf %%-.5c --- %-.c\n", c);
		printf("\n");

/*		printf("\t\t--- atribut .5 ---\n\n");
//		printf("\t\tprintf %%.5s --- %.5c\n", c);
//		printf("\n");

		printf("\t\t--- atribut ' ' ---\n\n"); */
//		printf("\t\tprintf %% 5s --- % 5c\n", c);
	//	printf("\n");
	// CONST CHAR * --> chaine de caractere
	//	printf("\t\t ||| --- valeur de renvoi --- %u |||\n\n\n", Rvy);
	printf("printf %%s --- %s\n", s);
	ft_printf("ft_printf %%s --- %s\n", s);
/*		printf("\t\t--- atribut # ---\n\n");
//		printf("\t\tprintf %%#s --- %#s\n", s);
//		printf("\n");

		printf("\t\t--- atribut 010 ---\n\n");
//		printf("\t\tprintf %%010s --- %010s\n", s);
//		printf("\n");
*/
		printf("\t\t--- atribut 4 ---\n\n");
		printf("\t\tprintf %%4s --- %4s -\n", s);
		ft_printf("\t\tft_printf %%4s --- %4s -\n", s);
		printf("\n");

		printf("\t\t--- atribut *4 ---\n\n");
		printf("\t\tprintf %%50s --- %50s -\n", s);
		ft_printf("\t\tft_printf %%50s --- %50s -\n", s);
		printf("\n");
/*
		printf("\t\t--- atribut 0.25 ---\n\n");
//		printf("\t\tprintf %%0.25s --- %0.25f\n", s);
//		printf("\n");

		printf("\t\t--- atribut +.5 ---\n\n");
//		printf("\t\tprintf %%+.5s --- %+.5s\n", s);
//		printf("\n");
*/
		printf("\t\t--- atribut -.5 ---\n\n");
		printf("\t\tprintf %%-.5s --- %-.s -\n", s);
		ft_printf("\t\tft_printf %%-.5s --- %-.s -\n", s);
		printf("\n");

		printf("\t\t--- atribut .5 ---\n\n");
		printf("\t\tprintf %%.5s --- %.5s -\n", s);
		ft_printf("\t\tft_printf %%.5s --- %.5s -\n", s);
		printf("\n");

//		printf("\t\t--- atribut ' ' ---\n\n");
//		printf("\t\tprintf %% 5s --- % 5s\n", s);
//		printf("\n");
	// VOID * --> HEXADECIMAL
	printf("printf %%p --- %p\n", p);
	ft_printf("ft_printf %%p --- %p\n", p);
	printf("\n");
	//	printf("\t\t--- value of %%p ---\n\n");
	//	printf("\t\tprintf %%i --- %i -\n", (int)p);
	//	printf("\n");
	// INT --> DECIMAL SIGNED | UNSIGNED INT --> OCTAL / DECIMAL / HEXA
	printf("--- d,i,o,u,x,X ---\n\n");
	printf("printf %%d --- %d\n", d);
	printf("printf %%i --- %i\n", i);
	printf("printf %%o --- %o\n", o);
	printf("printf %%u --- %u\n", u);
	printf("printf %%x --- %x\n", x);
	printf("printf %%X --- %X\n", X);
	ft_printf("ft_printf %%d --- %d\n", d);
	ft_printf("ft_printf %%i --- %i\n", i);
	ft_printf("ft_printf %%o --- %o\n", o);
	ft_printf("ft_printf %%u --- %u\n", u);
	ft_printf("ft_printf %%x --- %x\n", x);
	ft_printf("ft_printf %%X --- %X\n", X);
	printf("\n");

		printf("\t--- atribut # ---\n\n");
		printf("\tprintf %%#o --- %#o\n", o);
//		printf("\tprintf %%#u --- %#u\n", u);
		printf("\tprintf %%#x --- %#x\n", x);
		printf("\tprintf %%#X --- %#X\n", X);	
		ft_printf("\tft_printf %%#o --- %#o\n", o);
//		printf("\tprintf %%#u --- %#u\n", u);
		ft_printf("\tft_printf %%#x --- %#x\n", x);
		ft_printf("\tft_printf %%#X --- %#X\n", X);

		printf("\n");
		
		printf("\t--- atribut 05 ---\n\n");
		printf("\tprintf %%05d --- %05d\n", d);
		printf("\tprintf %%05i --- %05i\n", i);
		printf("\tprintf %%05o --- %05o\n", o);
		printf("\tprintf %%05u --- %05u\n", u);
		printf("\tprintf %%05x --- %05x\n", x);
		printf("\tprintf %%05X --- %05X\n", X);
		ft_printf("\tft_printf %%05d --- %05d\n", d);
		ft_printf("\tft_printf %%05i --- %05i\n", i);
		ft_printf("\tft_printf %%05o --- %05o\n", o);
		ft_printf("\tft_printf %%05u --- %05u\n", u);
		ft_printf("\tft_printf %%05x --- %05x\n", x);
		ft_printf("\tft_printf %%05X --- %05X\n", X);

		printf("\n");

		printf("\t--- atribut 0.5 ---\n\n");
		printf("\tprintf %%0.5d --- %0.5d\n", d);
		printf("\tprintf %%0.5i --- %0.5i\n", i);
		printf("\tprintf %%0.5o --- %0.5o\n", o);
		printf("\tprintf %%0.5u --- %0.5u\n", u);
		printf("\tprintf %%0.5x --- %0.5x\n", x);
		printf("\tprintf %%0.5X --- %0.5X\n", X);
		ft_printf("\tft_printf %%0.5d --- %0.5d\n", d);
		ft_printf("\tft_printf %%0.5i --- %0.5i\n", i);
		ft_printf("\tft_printf %%0.5o --- %0.5o\n", o);
		ft_printf("\tft_printf %%0.5u --- %0.5u\n", u);
		ft_printf("\tft_printf %%0.5x --- %0.5x\n", x);
		ft_printf("\tft_printf %%0.5X --- %0.5X\n", X);

		printf("\n");

		printf("\t--- atribut *(5) ---\n\n");
		printf("\tprintf %%*d --- %*d-\n", 5, d);
		printf("\tprintf %%*i --- %*i-\n", 5, i);
		printf("\tprintf %%*o --- %*o-\n", 5, o);
		printf("\tprintf %%*u --- %*u-\n", 5, u);
		printf("\tprintf %%*x --- %*x-\n", 5, x);
		printf("\tprintf %%*X --- %*X-\n", 5, X);
		ft_printf("\tft_printf %%*d --- %*d-\n", 5, d);
		ft_printf("\tft_printf %%*i --- %*i-\n", 5, i);
		ft_printf("\tft_printf %%*o --- %*o-\n", 5, o);
		ft_printf("\tft_printf %%*u --- %*u-\n", 5, u);
		ft_printf("\tft_printf %%*x --- %*x-\n", 5, x);
		ft_printf("\tft_printf %%*X --- %*X-\n", 5, X);

		printf("\n");

		printf("\t--- atribut *(5)$ ---\n\n");
/*		printf("\tprintf %%*1$d --- %*1$d-\n", 5, d);
		printf("\tprintf %%*1$i --- %*1$i-\n", 5, i);
		printf("\tprintf %%*1$o --- %*1$o-\n", 5, o);
		printf("\tprintf %%*1$u --- %*1$u-\n", 5, u);
		printf("\tprintf %%*1$x --- %*1$x-\n", 5, x);*/
		printf("\tprintf %%*1$X --- %*X-\n", 5, X);
		ft_printf("\tft_printf %%*1$X --- %*X-\n", 5, X);
		printf("\n");

		printf("\t--- atribut +.5 ---\n\n");
		printf("\tprintf %%+.5d --- %+.5d\n", d);
		printf("\tprintf %%+.5i --- %+.5i\n", i);
		ft_printf("\tft_printf %%+.5d --- %+.5d\n", d);
		ft_printf("\tft_printf %%+.5i --- %+.5i\n", i);
//		printf("\tprintf %%+.5o --- %+.5o\n", o);
//		printf("\tprintf %%+.5u --- %+.5u\n", u);
//		printf("\tprintf %%+.5x --- %+.5x\n", x);
//		printf("\tprintf %%+.5X --- %+.5X\n", X);
		printf("\n");

		printf("\t--- atribut +5 ---\n\n");
		printf("\tprintf %%+5d --- %+5d -\n", d);
		printf("\tprintf %%+5i --- %+5i -\n", i);
		ft_printf("\tft_printf %%+5d --- %+5d -\n", d);
		ft_printf("\tft_printf %%+5i --- %+5i -\n", i);
//		printf("\tprintf %%+.5o --- %+.5o\n", o);
//		printf("\tprintf %%+.5u --- %+.5u\n", u);
//		printf("\tprintf %%+.5x --- %+.5x\n", x);
//		printf("\tprintf %%+.5X --- %+.5X\n", X);
		printf("\n");

		printf("\t--- atribut -.5 ---\n\n");
		printf("\tprintf %%-.5d --- %-.5d\n", d);
		printf("\tprintf %%-.5i --- %-.5i\n", i);
		printf("\tprintf %%-.5o --- %-.5o\n", o);
		printf("\tprintf %%-.5u --- %-.5u\n", u);
		printf("\tprintf %%-.5x --- %-.5x\n", x);
		printf("\tprintf %%-.5X --- %-.5X\n", X);
		ft_printf("\tft_printf %%-.5d --- %-.5d\n", d);
		ft_printf("\tft_printf %%-.5i --- %-.5i\n", i);
		ft_printf("\tft_printf %%-.5o --- %-.5o\n", o);
		ft_printf("\tft_printf %%-.5u --- %-.5u\n", u);
		ft_printf("\tft_printf %%-.5x --- %-.5x\n", x);
		ft_printf("\tft_printf %%-.5X --- %-.5X\n", X);

		printf("\n");

		printf("\t--- atribut -5 ---\n\n");
		printf("\tprintf %%-5d --- %-5d -\n", d);
		printf("\tprintf %%-5i --- %-5i -\n", i);
		printf("\tprintf %%-5o --- %-5o -\n", o);
		printf("\tprintf %%-5u --- %-5u -\n", u);
		printf("\tprintf %%-5x --- %-5x -\n", x);
		printf("\tprintf %%-5X --- %-5X -\n", X);
		ft_printf("\tft_printf %%-5d --- %-5d -\n", d);
		ft_printf("\tft_printf %%-5i --- %-5i -\n", i);
		ft_printf("\tft_printf %%-5o --- %-5o -\n", o);
		ft_printf("\tft_printf %%-5u --- %-5u -\n", u);
		ft_printf("\tft_printf %%-5x --- %-5x -\n", x);
		ft_printf("\tft_printf %%-5X --- %-5X -\n", X);

		printf("\n");

		printf("\t--- atribut ' ' ---\n\n");
		printf("\tprintf %% 8d --- % 8d\n", d);
		printf("\tprintf %% 8i --- % 8i\n", i);
//		printf("\tprintf %% 5o --- % 5o\n", o);
		printf("\tprintf %% 8u --- % 8i\n", u);
//		printf("\tprintf %% 5x --- % 5x\n", x);
//		printf("\tprintf %% 5x --- % 5X\n", X);
		ft_printf("\tft_printf %% 8d --- % 8d\n", d);
		ft_printf("\tft_printf %% 8i --- % 8i\n", i);
		ft_printf("\tft_printf %% 8u --- % 8i\n", u);

		printf("\n");


		printf("\t--- flags hh ---\n\n");
		printf("\tprintf %%hhd --- %hhd\n", hhd);
		printf("\tprintf %%hhi --- %hhi\n", hhi);
		printf("\tprintf %%hho --- %hho\n", hho);
		printf("\tprintf %%hhu --- %hhu\n", hhu);
		printf("\tprintf %%hhx --- %hhx\n", hhx);
		printf("\tprintf %%hhX --- %hhX\n", hhX);
		ft_printf("\tft_printf %%hhd --- %hhd\n", hhd);
		ft_printf("\tft_printf %%hhi --- %hhi\n", hhi);
		ft_printf("\tft_printf %%hho --- %hho\n", hho);
		ft_printf("\tft_printf %%hhu --- %hhu\n", hhu);
		ft_printf("\tft_printf %%hhx --- %hhx\n", hhx);
		ft_printf("\tft_printf %%hhX --- %hhX\n", hhX);
		printf("\n");

			printf("\t\t--- atribut # ---\n\n");
			printf("\t\tprintf %%#hho --- %#hho\n", hho);
//			printf("\t\tprintf %%#hhu --- %#hhu\n", hhu);
			printf("\t\tprintf %%#hhx --- %#hhx\n", hhx);
			printf("\t\tprintf %%#hhX --- %#hhX\n", hhX);
			ft_printf("\t\tft_printf %%#hho --- %#hho\n", hho);
			ft_printf("\t\tft_printf %%#hhx --- %#hhx\n", hhx);
			ft_printf("\t\tft_printf %%#hhX --- %#hhX\n", hhX);
			printf("\n");
			
			printf("\t\t--- atribut 0 ---\n\n");
			printf("\t\tprintf %%0hhd --- %0hhd\n", hhd);
			printf("\t\tprintf %%0hhi --- %0hhi\n", hhi);
			printf("\t\tprintf %%0hho --- %0hho\n", hho);
			printf("\t\tprintf %%0hhu --- %0hhu\n", hhu);
			printf("\t\tprintf %%0hhx --- %0hhx\n", hhx);
			printf("\t\tprintf %%0hhX --- %0hhX\n", hhX);
			ft_printf("\t\tft_printf %%0hhd --- %0hhd\n", hhd);
			ft_printf("\t\tft_printf %%0hhi --- %0hhi\n", hhi);
			ft_printf("\t\tft_printf %%0hho --- %0hho\n", hho);
			ft_printf("\t\tft_printf %%0hhu --- %0hhu\n", hhu);
			ft_printf("\t\tft_printf %%0hhx --- %0hhx\n", hhx);
			ft_printf("\t\tft_printf %%0hhX --- %0hhX\n", hhX);
			printf("\n");

			printf("\t\t--- atribut 0.5 ---\n\n");
			printf("\t\tprintf %%0.5hhd --- %0.5hhd\n", hhd);
			printf("\t\tprintf %%0.5hhi --- %0.5hhi\n", hhi);
			printf("\t\tprintf %%0.5hho --- %0.5hho\n", hho);
			printf("\t\tprintf %%0.5hhu --- %0.5hhu\n", hhu);
			printf("\t\tprintf %%0.5hhx --- %0.5hhx\n", hhx);
			printf("\t\tprintf %%0.5hhX --- %0.5hhX\n", hhX);
			ft_printf("\t\tft_printf %%0.5hhd --- %0.5hhd\n", hhd);
			ft_printf("\t\tft_printf %%0.5hhi --- %0.5hhi\n", hhi);
			ft_printf("\t\tft_printf %%0.5hho --- %0.5hho\n", hho);
			ft_printf("\t\tft_printf %%0.5hhu --- %0.5hhu\n", hhu);
			ft_printf("\t\tft_printf %%0.5hhx --- %0.5hhx\n", hhx);
			ft_printf("\t\tft_printf %%0.5hhX --- %0.5hhX\n", hhX);

			printf("\n");

			printf("\t\t--- atribut +.5 ---\n\n");
			printf("\t\tprintf %%+.5hhd --- %+.5hhd\n", hhd);
			printf("\t\tprintf %%+.5hhi --- %+.5hhi\n", hhi);
			ft_printf("\t\tft_printf %%+.5hhd --- %+.5hhd\n", hhd);
			ft_printf("\t\tft_printf %%+.5hhi --- %+.5hhi\n", hhi);
			printf("\n");

			printf("\t\t--- atribut -.5 ---\n\n");
			printf("\t\tprintf %%-.5hhd --- %-.5hhd\n", hhd);
			printf("\t\tprintf %%-.5hhi --- %-.5hhi\n", hhi);
			printf("\t\tprintf %%-.5hho --- %-.5hho\n", hho);
			printf("\t\tprintf %%-.5hhu --- %-.5hhu\n", hhu);
			printf("\t\tprintf %%-.5hhx --- %-.5hhx\n", hhx);
			printf("\t\tprintf %%-.5hhX --- %-.5hhX\n", hhX);
			ft_printf("\t\tft_printf %%-.5hhd --- %-.5hhd\n", hhd);
			ft_printf("\t\tft_printf %%-.5hhi --- %-.5hhi\n", hhi);
			ft_printf("\t\tft_printf %%-.5hho --- %-.5hho\n", hho);
			ft_printf("\t\tft_printf %%-.5hhu --- %-.5hhu\n", hhu);
			ft_printf("\t\tft_printf %%-.5hhx --- %-.5hhx\n", hhx);
			ft_printf("\t\tft_printf %%-.5hhX --- %-.5hhX\n", hhX);

			printf("\n");

			printf("\t\t--- atribut ' ' ---\n\n");
			printf("\t\tprintf %% 5hhd --- % 5hhd\n", hhd);
			printf("\t\tprintf %% 5hhi --- % 5hhi\n", hhi);
//			printf("\t\tprintf %% 5hhu --- % 5hhu\n", hhu);
			ft_printf("\t\tft_printf %% 5hhd --- % 5hhd\n", hhd);
			ft_printf("\t\tft_printf %% 5hhi --- % 5hhi\n", hhi);

			printf("\n");

		printf("\t--- flags h  ---\n\n");

		printf("\tprintf %%hd --- %hd\n", hd);
		printf("\tprintf %%hi --- %hi\n", hi);
		printf("\tprintf %%ho --- %ho\n", ho);
		printf("\tprintf %%hu --- %hu\n", hu);
		printf("\tprintf %%hx --- %hx\n", hx);
		printf("\tprintf %%hX --- %hX\n", hX);
		ft_printf("\tft_printf %%hd --- %hd\n", hd);
		ft_printf("\tft_printf %%hi --- %hi\n", hi);
		ft_printf("\tft_printf %%ho --- %ho\n", ho);
		ft_printf("\tft_printf %%hu --- %hu\n", hu);
		ft_printf("\tft_printf %%hx --- %hx\n", hx);
		ft_printf("\tft_printf %%hX --- %hX\n", hX);

		printf("\n");

			printf("\t\t--- atribut # ---\n\n");
			printf("\t\tprintf %%#ho --- %#ho\n", ho);
//			printf("\t\tprintf %%#hu --- %#hu\n", hu);
			printf("\t\tprintf %%#hx --- %#hx\n", hx);
			printf("\t\tprintf %%#hX --- %#hX\n", hX);
			ft_printf("\t\tft_printf %%#ho --- %#ho\n", ho);
			ft_printf("\t\tft_printf %%#hx --- %#hx\n", hx);
			ft_printf("\t\tft_printf %%#hX --- %#hX\n", hX);
			printf("\n");
			
			printf("\t\t--- atribut 0 ---\n\n");
			printf("\t\tprintf %%0hd --- %0hd\n", hd);
			printf("\t\tprintf %%0hi --- %0hi\n", hi);
			printf("\t\tprintf %%0ho --- %0ho\n", ho);
			printf("\t\tprintf %%0hu --- %0hu\n", hu);
			printf("\t\tprintf %%0hx --- %0hx\n", hx);
			printf("\t\tprintf %%0hX --- %0hX\n", hX);
			ft_printf("\t\tft_printf %%0hd --- %0hd\n", hd);
			ft_printf("\t\tft_printf %%0hi --- %0hi\n", hi);
			ft_printf("\t\tft_printf %%0ho --- %0ho\n", ho);
			ft_printf("\t\tft_printf %%0hu --- %0hu\n", hu);
			ft_printf("\t\tft_printf %%0hx --- %0hx\n", hx);
			ft_printf("\t\tft_printf %%0hX --- %0hX\n", hX);
			printf("\n");

			printf("\t\t--- atribut 0.5 ---\n\n");
			printf("\t\tprintf %%0.5hd --- %0.5hd\n", hd);
			printf("\t\tprintf %%0.5hi --- %0.5hi\n", hi);
			printf("\t\tprintf %%0.5ho --- %0.5ho\n", ho);
			printf("\t\tprintf %%0.5hu --- %0.5hu\n", hu);
			printf("\t\tprintf %%0.5hx --- %0.5hx\n", hx);
			printf("\t\tprintf %%0.5hX --- %0.5hX\n", hX);
			ft_printf("\t\tft_printf %%0.5hd --- %0.5hd\n", hd);
			ft_printf("\t\tft_printf %%0.5hi --- %0.5hi\n", hi);
			ft_printf("\t\tft_printf %%0.5ho --- %0.5ho\n", ho);
			ft_printf("\t\tft_printf %%0.5hu --- %0.5hu\n", hu);
			ft_printf("\t\tft_printf %%0.5hx --- %0.5hx\n", hx);
			ft_printf("\t\tft_printf %%0.5hX --- %0.5hX\n", hX);
			printf("\n");

			printf("\t\t--- atribut +.5 ---\n\n");
			printf("\t\tprintf %%+.5hd --- %+.5hd\n", hd);
			printf("\t\tprintf %%+.5hi --- %+.5hi\n", hi);
			ft_printf("\t\tft_printf %%+.5hd --- %+.5hd\n", hd);
			ft_printf("\t\tft_printf %%+.5hi --- %+.5hi\n", hi);

			printf("\n");

			printf("\t\t--- atribut -.5 ---\n\n");
			printf("\t\tprintf %%-.5hd --- %-.5hd\n", hd);
			printf("\t\tprintf %%-.5hi --- %-.5hi\n", hi);
			printf("\t\tprintf %%-.5ho --- %-.5ho\n", ho);
			printf("\t\tprintf %%-.5hu --- %-.5hu\n", hu);
			printf("\t\tprintf %%-.5hx --- %-.5hx\n", hx);
			printf("\t\tprintf %%-.5hX --- %-.5hX\n", hX);
			ft_printf("\t\tft_printf %%-.5hd --- %-.5hd\n", hd);
			ft_printf("\t\tft_printf %%-.5hi --- %-.5hi\n", hi);
			ft_printf("\t\tft_printf %%-.5ho --- %-.5ho\n", ho);
			ft_printf("\t\tft_printf %%-.5hu --- %-.5hu\n", hu);
			ft_printf("\t\tft_printf %%-.5hx --- %-.5hx\n", hx);
			ft_printf("\t\tft_printf %%-.5hX --- %-.5hX\n", hX);

			printf("\n");

			printf("\t\t--- atribut ' ' ---\n\n");
			printf("\t\tprintf %% 5hd --- % 5hd\n", hd);
			printf("\t\tprintf %% 5hi --- % 5hi\n", hi);
//			printf("\t\tprintf %% 5hu --- % 5hu\n", hu);
			ft_printf("\t\tft_printf %% 5hd --- % 5hd\n", hd);
			ft_printf("\t\tft_printf %% 5hi --- % 5hi\n", hi);

			printf("\n");

		printf("\t--- flags l  ---\n\n");

		printf("\tprintf %%ld --- %ld\n", ld);
		printf("\tprintf %%li --- %li\n", li);
		printf("\tprintf %%lo --- %lo\n", lo);
		printf("\tprintf %%lu --- %lu\n", lu);
		printf("\tprintf %%lx --- %lx\n", lx);
		printf("\tprintf %%lX --- %lX\n", lX);
		ft_printf("\tft_printf %%ld --- %ld\n", ld);
		ft_printf("\tft_printf %%li --- %li\n", li);
		ft_printf("\tft_printf %%lo --- %lo\n", lo);
		ft_printf("\tft_printf %%lu --- %lu\n", lu);
		ft_printf("\tft_printf %%lx --- %lx\n", lx);
		ft_printf("\tft_printf %%lX --- %lX\n", lX);

		printf("\n");

			printf("\t\t--- atribut # ---\n\n");
			printf("\t\tprintf %%#lo --- %#lo\n", lo);
		//	printf("\t\tprintf %%#lu --- %#lu\n", lu);
			printf("\t\tprintf %%#lx --- %#lx\n", lx);
			printf("\t\tprintf %%#lX --- %#lX\n", lX);
			ft_printf("\t\tft_printf %%#lo --- %#lo\n", lo);
			ft_printf("\t\tft_printf %%#lx --- %#lx\n", lx);
			ft_printf("\t\tft_printf %%#lX --- %#lX\n", lX);
			printf("\n");
			
			printf("\t\t--- atribut 0 ---\n\n");
			printf("\t\tprintf %%0ld --- %0ld\n", ld);
			printf("\t\tprintf %%0li --- %0li\n", li);
			printf("\t\tprintf %%0lo --- %0lo\n", lo);
			printf("\t\tprintf %%0lu --- %0lu\n", lu);
			printf("\t\tprintf %%0lx --- %0lx\n", lx);
			printf("\t\tprintf %%0lX --- %0lX\n", lX);
			ft_printf("\t\tft_printf %%0ld --- %0ld\n", ld);
			ft_printf("\t\tft_printf %%0li --- %0li\n", li);
			ft_printf("\t\tft_printf %%0lo --- %0lo\n", lo);
			ft_printf("\t\tft_printf %%0lu --- %0lu\n", lu);
			ft_printf("\t\tft_printf %%0lx --- %0lx\n", lx);
			ft_printf("\t\tft_printf %%0lX --- %0lX\n", lX);

			printf("\n");

			printf("\t\t--- atribut 0.5 ---\n\n");
			printf("\t\tprintf %%0.5ld --- %0.5ld\n", ld);
			printf("\t\tprintf %%0.5li --- %0.5li\n", li);
			printf("\t\tprintf %%0.5lo --- %0.5lo\n", lo);
			printf("\t\tprintf %%0.5lu --- %0.5lu\n", lu);
			printf("\t\tprintf %%0.5lx --- %0.5lx\n", lx);
			printf("\t\tprintf %%0.5lX --- %0.5lX\n", lX);
			ft_printf("\t\tft_printf %%0.5ld --- %0.5ld\n", ld);
			ft_printf("\t\tft_printf %%0.5li --- %0.5li\n", li);
			ft_printf("\t\tft_printf %%0.5lo --- %0.5lo\n", lo);
			ft_printf("\t\tft_printf %%0.5lu --- %0.5lu\n", lu);
			ft_printf("\t\tft_printf %%0.5lx --- %0.5lx\n", lx);
			ft_printf("\t\tft_printf %%0.5lX --- %0.5lX\n", lX);

			printf("\n");

			printf("\t\t--- atribut +.5 ---\n\n");
			printf("\t\tprintf %%+.5ld --- %+.5ld\n", ld);
			printf("\t\tprintf %%+.5li --- %+.5li\n", li);
			ft_printf("\t\tft_printf %%+.5ld --- %+.5ld\n", ld);
			ft_printf("\t\tft_printf %%+.5li --- %+.5li\n", li);

			printf("\n");

			printf("\t\t--- atribut -.5 ---\n\n");
			printf("\t\tprintf %%-.5ld --- %-.5ld\n", ld);
			printf("\t\tprintf %%-.5li --- %-.5li\n", li);
			printf("\t\tprintf %%-.5lo --- %-.5lo\n", lo);
			printf("\t\tprintf %%-.5lu --- %-.5lu\n", lu);
			printf("\t\tprintf %%-.5lx --- %-.5lx\n", lx);
			printf("\t\tprintf %%-.5lX --- %-.5lX\n", lX);
			ft_printf("\t\tft_printf %%-.5ld --- %-.5ld\n", ld);
			ft_printf("\t\tft_printf %%-.5li --- %-.5li\n", li);
			ft_printf("\t\tft_printf %%-.5lo --- %-.5lo\n", lo);
			ft_printf("\t\tft_printf %%-.5lu --- %-.5lu\n", lu);
			ft_printf("\t\tft_printf %%-.5lx --- %-.5lx\n", lx);
			ft_printf("\t\tft_printf %%-.5lX --- %-.5lX\n", lX);

			printf("\n");

			printf("\t\t--- atribut ' ' ---\n\n");
			printf("\t\tprintf %% 5ld --- % 5ld\n", ld);
			printf("\t\tprintf %% 5li --- % 5li\n", li);
//			printf("\t\tprintf %% 5lu --- % 5lu\n", lu);
			ft_printf("\t\tft_printf %% 5ld --- % 5ld\n", ld);
			ft_printf("\t\tft_printf %% 5li --- % 5li\n", li);
			printf("\n");

		printf("\t--- flags ll ---\n\n");

		printf("\tprintf %%lld --- %lld\n", lld);
		printf("\tprintf %%lli --- %lli\n", lli);
		printf("\tprintf %%llo --- %llo\n", llo);
		printf("\tprintf %%llu --- %llu\n", llu);
		printf("\tprintf %%llx --- %llx\n", llx);
		printf("\tprintf %%llX --- %llX\n", llX);
		ft_printf("\tft_printf %%lld --- %lld\n", lld);
		ft_printf("\tft_printf %%lli --- %lli\n", lli);
		ft_printf("\tft_printf %%llo --- %llo\n", llo);
		ft_printf("\tft_printf %%llu --- %llu\n", llu);
		ft_printf("\tft_printf %%llx --- %llx\n", llx);
		ft_printf("\tft_printf %%llX --- %llX\n", llX);

		printf("\n");

			printf("\t\t--- atribut # ---\n\n");
			printf("\t\tprintf %%#llo --- %#llo\n", llo);
//			printf("\t\tprintf %%#llu --- %#llu\n",llu);
			printf("\t\tprintf %%#llx --- %#llx\n", llx);
			printf("\t\tprintf %%#llX --- %#llX\n", llX);
			ft_printf("\t\tft_printf %%#llo --- %#llo\n", llo);
			ft_printf("\t\tft_printf %%#llx --- %#llx\n", llx);
			ft_printf("\t\tft_printf %%#llX --- %#llX\n", llX);
			printf("\n");

			printf("\t\t--- atribut 0 ---\n\n");
			printf("\t\tprintf %%0lld --- %0lld\n", lld);
			printf("\t\tprintf %%0lli --- %0lli\n", lli);
			printf("\t\tprintf %%0llo --- %0llo\n", llo);
			printf("\t\tprintf %%0llu --- %0llu\n", llu);
			printf("\t\tprintf %%0llx --- %0llx\n", llx);
			printf("\t\tprintf %%0llX --- %0llX\n", llX);
			ft_printf("\t\tft_printf %%0lld --- %0lld\n", lld);
			ft_printf("\t\tft_printf %%0lli --- %0lli\n", lli);
			ft_printf("\t\tft_printf %%0llo --- %0llo\n", llo);
			ft_printf("\t\tft_printf %%0llu --- %0llu\n", llu);
			ft_printf("\t\tft_printf %%0llx --- %0llx\n", llx);
			ft_printf("\t\tft_printf %%0llX --- %0llX\n", llX);

			printf("\n");

			printf("\t\t--- atribut 0.12 ---\n\n");
			printf("\t\tprintf %%0.12lld --- %0.12lld\n", lld);
			printf("\t\tprintf %%0.12lli --- %0.12lli\n", lli);
			printf("\t\tprintf %%0.12llo --- %0.12llo\n", llo);
			printf("\t\tprintf %%0.12llu --- %0.12llu\n", llu);
			printf("\t\tprintf %%0.12llx --- %0.12llx\n", llx);
			printf("\t\tprintf %%0.12llX --- %0.12llX\n", llX);
			ft_printf("\t\tft_printf %%0.12lld --- %0.12lld\n", lld);
			ft_printf("\t\tft_printf %%0.12lli --- %0.12lli\n", lli);
			ft_printf("\t\tft_printf %%0.12llo --- %0.12llo\n", llo);
			ft_printf("\t\tft_printf %%0.12llu --- %0.12llu\n", llu);
			ft_printf("\t\tft_printf %%0.12llx --- %0.12llx\n", llx);
			ft_printf("\t\tft_printf %%0.12llX --- %0.12llX\n", llX);

			printf("\n");

			printf("\t\t--- atribut +.5 ---\n\n");
			printf("\t\tprintf %%+.5lld --- %+.5lld\n", lld);
			printf("\t\tprintf %%+.5lli --- %+.5lli\n", lli);
			ft_printf("\t\tft_printf %%+.5lld --- %+.5lld\n", lld);
			ft_printf("\t\tft_printf %%+.5lli --- %+.5lli\n", lli);

			printf("\n");

			printf("\t\t--- atribut -.5 ---\n\n");
			printf("\t\tprintf %%-.5lld --- %-.5lld\n", lld);
			printf("\t\tprintf %%-.5lli --- %-.5lli\n", lli);
			printf("\t\tprintf %%-.5llo --- %-.5llo\n", llo);
			printf("\t\tprintf %%-.5llu --- %-.5llu\n", llu);
			printf("\t\tprintf %%-.5llx --- %-.5llx\n", llx);
			printf("\t\tprintf %%-.5llX --- %-.5llX\n", llX);
			ft_printf("\t\tft_printf %%-.5lld --- %-.5lld\n", lld);
			ft_printf("\t\tft_printf %%-.5lli --- %-.5lli\n", lli);
			ft_printf("\t\tft_printf %%-.5llo --- %-.5llo\n", llo);
			ft_printf("\t\tft_printf %%-.5llu --- %-.5llu\n", llu);
			ft_printf("\t\tft_printf %%-.5llx --- %-.5llx\n", llx);
			ft_printf("\t\tft_printf %%-.5llX --- %-.5llX\n", llX);

			printf("\n");

			printf("\t\t--- atribut ' ' ---\n\n");
			printf("\t\tprintf %% 5lld --- % 5lld\n", lld);
			printf("\t\tprintf %% 5lli --- % 5lli\n", lli);
//			printf("\t\tprintf %% 5llu --- % 5llu\n", llu);
			ft_printf("\t\tft_printf %% 5lld --- % 5lld\n", lld);
			ft_printf("\t\tft_printf %% 5lli --- % 5lli\n", lli);

			printf("\n");
	// DOUBLE --> HEXADECIMAL
	printf("--- f ---\n\n");

	printf("printf %%f --- %f\n", f);
	ft_printf("ft_printf %%f --- %f\n", f);
	printf("\n");
		printf("\t\t--- atribut # ---\n\n");
		printf("\t\tprintf %%#f --- %#f\n", f);
		ft_printf("\t\tft_printf %%#f --- %#f\n", f);
		printf("\n");

		printf("\t\t--- atribut 010 ---\n\n");
		printf("\t\tprintf %%010f --- %010f\n", f);
		ft_printf("\t\tft_printf %%010f --- %010f\n", f);
		printf("\n");

		printf("\t\t--- atribut 0.25 ---\n\n");
		printf("\t\tprintf %%0.25f --- %0.25f\n", f);
		ft_printf("\t\tft_printf %%0.25f --- %0.25f\n", f);
		printf("\n");

		printf("\t\t--- atribut +.5 ---\n\n");
		printf("\t\tprintf %%+.5f --- %+.f\n", f);
		ft_printf("\t\tft_printf %%+.5f --- %+.f\n", f);
		printf("\n");

		printf("\t\t--- atribut -.5 ---\n\n");
		printf("\t\tprintf %%-.5f --- %-.5f\n", f);
		ft_printf("\t\tft_printf %%-.5f --- %-.5f\n", f);
		printf("\n");

		printf("\t\t--- atribut ' ' ---\n\n");
		printf("\t\tprintf %% 5f --- % 5f\n", f);
		ft_printf("\t\tft_printf %% 5f --- % 5f\n", f);
		printf("\n");

		printf("\t--- flags l ---\n\n");

		printf("printf %%lf --- %lf\n", f);
		ft_printf("ft_printf %%lf --- %lf\n", f);
		printf("\n");

			printf("\t\t--- atribut # ---\n\n");
			printf("\t\tprintf %%#lf --- %#lf\n", f);
			ft_printf("\t\tft_printf %%#lf --- %#lf\n", f);
			printf("\n");

			printf("\t\t--- atribut 0 ---\n\n");
			printf("\t\tprintf %%0lf --- %0lf\n", f);
			ft_printf("\t\tft_printf %%0lf --- %0lf\n", f);
			printf("\n");

			printf("\t\t--- atribut 0.5 ---\n\n");
			printf("\t\tprintf %%0.5lf --- %0.5lf\n", f);
			ft_printf("\t\tft_printf %%0.5lf --- %0.5lf\n", f);
			printf("\n");

			printf("\t\t--- atribut +.5 ---\n\n");
			printf("\t\tprintf %%+.5lf --- %+.5lf\n", f);
			ft_printf("\t\tft_printf %%+.5lf --- %+.5lf\n", f);
			printf("\n");

			printf("\t\t--- atribut -.5 ---\n\n");
			printf("\t\tprintf %%-.5lf --- %-.5lf\n", f);
			ft_printf("\t\tft_printf %%-.5lf --- %-.5lf\n", f);
			printf("\n");

			printf("\t\t--- atribut ' ' ---\n\n");
			printf("\t\tprintf %% 5lf --- % 5lf\n", f);
			ft_printf("\t\tft_printf %% 5lf --- % 5lf\n", f);
			printf("\n");

		printf("\t--- flags L ---\n\n");

		printf("printf %%Lf --- %Lf\n", Lf);
		ft_printf("ft_printf %%Lf --- %Lf\n", Lf);
		printf("\n");

			printf("\t\t--- atribut # ---\n\n");
			printf("\t\tprintf %%#Lf --- %#Lf\n", Lf);
			ft_printf("\t\tft_printf %%#Lf --- %#Lf\n", Lf);
			printf("\n");

			printf("\t\t--- atribut 010 ---\n\n");
			printf("\t\tprintf %%010Lf --- %010Lf\n", Lf);
			ft_printf("\t\tft_printf %%010Lf --- %010Lf\n", Lf);
			printf("\n");

			printf("\t\t--- atribut 0.10 ---\n\n");
			printf("\t\tprintf %%0.10Lf --- %0.10Lf\n", Lf);
			ft_printf("\t\tft_printf %%0.10Lf --- %0.10Lf\n", Lf);
			printf("\n");

			printf("\t\t--- atribut +.5 ---\n\n");
			printf("\t\tprintf %%+.5Lf --- %+.5Lf\n", Lf);
			ft_printf("\t\tft_printf %%+.5Lf --- %+.5Lf\n", Lf);
			printf("\n");

			printf("\t\t--- atribut -.5 ---\n\n");
			printf("\t\tprintf %%-.5Lf --- %-.5Lf\n", Lf);
			ft_printf("\t\tft_printf %%-.5Lf --- %-.5Lf\n", Lf);
			printf("\n");

			printf("\t\t--- atribut ' ' ---\n\n");
			printf("\t\tprintf %% 5Lf --- % 5Lf\n", Lf);
			ft_printf("\t\tft_printf %% 5Lf --- % 5Lf\n", Lf);
			printf("\n");

//	printf("printf %%X --- %X\n", X);
//	str = ft_itoa_b(lbase, 16, 'X');
//	printf("printf %%lbase --- %s\n", str);
	
//			str = ft_itoa_b(b, 2, 'N');
//			printf("\t\t--- BINAIRE ---\n\n");
//			printf("\t\tprintf %%b --- %s--\n", str);
//			printf("\n");
}
