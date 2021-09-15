#include <stdio.h>

int		main()
{
	char	str[] = "lorem ipsum dolor sit";
	t_list	*elem;

	elem = ft_lstnew((void *)str);
	printf("\n%s\n", (char *)elem->content);
}
