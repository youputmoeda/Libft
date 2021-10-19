/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:59:43 by joteixei          #+#    #+#             */
/*   Updated: 2021/10/18 18:00:19 by joteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*s;
	char		tmp;
	int			i;

	tmp = (unsigned char)c;
	i = ft_strlen(str);
	s = str;
	str = (str + i);
	while (*s != *str && tmp != *str)
		str--;
	if (tmp == *str)
		return ((char *) str);
	return (0);
}
