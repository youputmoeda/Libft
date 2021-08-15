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
