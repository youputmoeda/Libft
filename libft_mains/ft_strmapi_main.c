#include <stdio.h>
char my_func(unsigned int i, char str)
{
        printf("My inner function: index = %d and %c\n", i, str);
        if (str == '.')
                return (str);
        return (str - 32);
        }

int main()
{
        char str[50] = "GOSTODEARROZ.";
        printf("The result is %s\n", str);
        char *result = ft_strmapi(str, my_func);
        printf("The result is %s\n", result);
        return (0);
}
