#include<stdio.h>
#include<string.h>

int main()
{
    char source[] = "ArrozComBugalhos";

    char* target = strdup(source);
    char* target2 = ft_strdup(source);

    printf("%s", target);
    printf("\n%s", target2);
    return 0;
}
