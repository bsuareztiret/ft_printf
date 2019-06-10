/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 13:20:22 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/05/14 13:25:30 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_info	ft_init_tmp(void)
{
	t_info tmp;

	tmp.hash = 0;
	tmp.plus = 0;
	tmp.minus = 0;
	tmp.space = 0;
	tmp.zero = 0;
	tmp.width = 0;
	tmp.precision = 0;
	tmp.cast = 0;
	tmp.type = 0;
	return (tmp);
}
