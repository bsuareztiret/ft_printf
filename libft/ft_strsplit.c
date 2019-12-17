/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcabrol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 19:45:03 by mcabrol           #+#    #+#             */
/*   Updated: 2018/10/26 14:27:23 by mcabrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(const char *s, char c)
{
	size_t len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

static size_t	ft_count_word(char const *s, char c)
{
	size_t word;
	size_t count;

	word = 0;
	count = 0;
	while (*s)
	{
		if (word == 1 && *s == c)
			word = 0;
		if (word == 0 && *s != c)
		{
			word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**tab;
	size_t	word;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	word = ft_count_word(s, c);
	tab = (char **)malloc(sizeof(char *) * ft_count_word(s, c) + 1);
	if (tab == NULL)
		return (NULL);
	while (word)
	{
		while (*s == c && *s)
			s++;
		tab[i] = ft_strsub(s, 0, ft_len(s, c));
		if (tab[i] == NULL)
			return (NULL);
		s = s + ft_len(s, c);
		i++;
		word--;
	}
	tab[i] = NULL;
	return (tab);
}
