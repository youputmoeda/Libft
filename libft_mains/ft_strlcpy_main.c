#include <stdio.h>
#include <string.h>

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    //int r;
    int s;

    //r = strlcpy(buffer,string,size);
    s = ft_strlcpy(buffer,string,size);

    printf("(S)Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
    printf("(FT)Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            s
          );
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}
