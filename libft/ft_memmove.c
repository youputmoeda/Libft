#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (0);
	if (src < dest)
	{
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	else if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}
