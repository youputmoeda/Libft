#include "libft.h"

#include <stdio.h>
static size_t	ft_delimiter(char c, char delimator)
{
	if (c == delimator)
		return (1);
	return (0);
}

static size_t	Sub_size(const char *s, char c)
{
	unsigned int	len;

	len = 0;
	while (*s)
	{
		if (ft_delimiter(*s, c))
			s++;
		else
		{
			++len;
			while (*s && !ft_delimiter(*s, c))
				++s;
		}
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**Sub;
	size_t	word_count;

	i = 0;
	j = 0;
	word_count = 0;
	Sub = (char **)malloc(sizeof(char *) * Sub_size(s, c) + 1);
	if (!Sub || !s)
		return (0);
	while (s[i] && j < Sub_size(s, c))
	{
		while (s[i] && ft_delimiter(s[i], c))
			i++;
		while (s[i] && !ft_delimiter(s[i], c))
		{
			word_count++;
			i++;
		}
		Sub[j] = (char *)malloc(sizeof(char) * word_count + 1);
		if (!Sub[j])
			return (0);
		k = 0;
		while (word_count)
		{
			Sub[j][k++] = s[i - word_count--];
		}
		Sub[j++][k] = '\0';
	}
	Sub[j] = '\0';
	return (Sub);
}

/*int	main(void)
{
	int	i = 0;
	char **split_me;

	split_me = ft_split("I dare you to split me!", ' ');
	//split_me = ft_split("I dare you to!", ' ');
	while (i < 6)
	{
		printf("Word %d: %s\n", i, split_me[i]);
		i++;
	}
	return (0);
}*/
