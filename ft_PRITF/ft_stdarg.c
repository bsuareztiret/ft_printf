/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdarg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuarez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 13:39:14 by bsuarez-          #+#    #+#             */
/*   Updated: 2019/03/06 14:32:24 by bsuarez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

void	ft_stdarg(char *fmt, ...)
{
	va_list			ap;
	char			*str;

	va_start(ap, fmt);
	str = va_arg(ap, char *);
	//ft_putdenl(str);
	va_end(ap);
}
