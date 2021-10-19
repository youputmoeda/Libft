/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joteixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:29:36 by joteixei          #+#    #+#             */
/*   Updated: 2021/10/18 17:39:16 by joteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	size_t	index;

	index = 0;
	if (!destination && !source)
		return (0);
	while (index < num)
	{
		((unsigned char *)destination)[index] = ((unsigned char *)source)[index];
		index++;
	}
	return (destination);
}
