/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 17:49:53 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/05/14 17:56:36 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_is_type(char c)
{
	if (c == 'c' || c == 's' || c == 'p' ||
		c == 'd' || c == 'i' || c == 'o' ||
		c == 'u' || c == 'x' || c == 'X' ||
		c == 'f' || c == '%')
		return (1);
	return (0);
}

int		ft_is_flag(char c)
{
	if (c == '#' || c =='0' || c == '-' ||
		c == '+' || c == ' ')
		return (1);
	return (0);
}

int		ft_is_cast(char c)
{
	if (c == 'h' || c == 'l' || c == 'L')
		return (1);
	return (0);
}
