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
