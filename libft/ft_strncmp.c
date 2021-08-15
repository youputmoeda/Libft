#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t num)
{
	size_t	i;

	if (num == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		if (i < (num - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}


