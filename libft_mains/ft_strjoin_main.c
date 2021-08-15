#include <stdio.h>

int             main()
{
        char *str1 = "joao";
        char *str2 = "magalhaes";
        char *str3;

        printf("%s\n%s\n", str1, str2);

        str3 = ft_strjoin(str1, str2);

        printf("%s", str3);
        return (0);
}

