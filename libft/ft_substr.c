#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		sub = (char *)malloc(sizeof(char));
		if (!sub)
			return (0);
		*sub = '\0';
		return (sub);
	}
	if (s_len < len)
		return (ft_strdup((char *)s + start));
	i = 0;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (0);
	while (start < s_len && i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
