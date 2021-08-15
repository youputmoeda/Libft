#include <stdio.h>

int             main()
{
        char *str = "aaaaasaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaasad";
        char *tirar = "ssssssssssssssssssssssssssssssssssssssa";
        char *here;

        here = ft_strtrim(str, tirar);
        printf("%s\n", str);
        printf("%s", here);

}
