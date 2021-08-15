#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*sub;

	if (!s1 || !s2)
		return (0);
	sub = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!sub)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		sub[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		sub[i + j] = s2[j];
		j++;
	}
	sub[i + j] = '\0';
	return (sub);
}
