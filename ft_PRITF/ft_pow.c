/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 16:02:44 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/04/26 12:49:45 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

double			ft_pow(double base, double power)
{
	double	result;

	result = base;
	while (--power > 0)
	{
		result *= base;
	}
	return (result);
}

float			ft_powf(float base, float power)
{
	float result;

	result = base;
	while (--power > 0)
	{
		result *= base;
	}
	return (result);
}

long long		ft_powl(long long base, long long power)
{
	long long result;

	result = base;
	while (--power > 0)
		result *= base;
	return (result);
}
