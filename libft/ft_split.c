/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:49:27 by joteixei          #+#    #+#             */
/*   Updated: 2021/10/19 17:14:13 by joteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_delimiter(char c, char delimator)
{
	if (c == delimator)
		return (1);
	return (0);
}

static size_t	sub_size(const char *s, char c)
{
	unsigned int	len;

	len = 0;
	while (*s)
	{
		if (ft_delimiter(*s, c))
			s++;
		else
		{
			++len;
			while (*s && !ft_delimiter(*s, c))
				++s;
		}
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**sub;
	size_t	word_count;

	i = 0;
	j = 0;
	word_count = 0;
	sub = (char **)malloc(sizeof(char *) * sub_size(s, c) + 1);
	if (!sub || !s)
		return (0);
	while (s[i] && j < sub_size(s, c))
	{
		while (s[i] && ft_delimiter(s[i], c))
			i++;
		while (s[i] && !ft_delimiter(s[i], c))
		{
			word_count++;
			i++;
		}
		sub[j] = (char *)malloc(sizeof(char) * word_count + 1);
		if (!sub[j])
			return (0);
		k = 0;
		while (word_count)
		{
			sub[j][k++] = s[i - word_count--];
		}
		sub[j++][k] = '\0';
	}
	sub[j] = '\0';
	return (sub);
}
