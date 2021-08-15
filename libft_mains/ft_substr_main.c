#include "libft.h"

int             main()
{
        char str[] = "Esta eh a string que vou passar.";
        char *asd;
        int start = 2;
        int length = 5;

        printf("%s\n", str);
        asd = ft_substr(str, start, length);
        printf("%s\n", asd);

        return (0);
}

