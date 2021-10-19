/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:50:03 by joteixei          #+#    #+#             */
/*   Updated: 2021/10/18 17:50:05 by joteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	tmp;

	tmp = (unsigned char)c;
	while (*str != tmp)
	{
		if (*str == 0)
			return (0);
		str++;
	}
	return ((char *)str);
}
