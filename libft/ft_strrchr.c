#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char *s;
	char	tmp;
	int	i;

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
